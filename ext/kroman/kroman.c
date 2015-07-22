#include <ruby.h>
#include <unistd.h>
#include "kroman_convert.h"
#include "kroman_process.h"

static VALUE kroman_parse(VALUE self, VALUE hangul) {
  VALUE hangul_s = rb_funcall(hangul, rb_intern("to_s"), 0);
  char *hangul_content = RSTRING_PTR(hangul_s);
  long hangul_length = RSTRING_LEN(hangul_s);

  char in_file_name[L_tmpnam];
  char out_file_name[L_tmpnam];

  tmpnam(in_file_name);
  tmpnam(out_file_name);
  FILE *in_file = fopen(in_file_name, "w+");
  FILE *out_file = fopen(out_file_name, "w+");

  fwrite(hangul_content, hangul_length, 1, in_file);
  fseek(in_file, 0, SEEK_SET);

  kroman_process(in_file, out_file);

  fseek(out_file, 0, SEEK_END);
  long length = ftell(out_file);
  fseek(out_file, 0, SEEK_SET);
  char *buffer = malloc(length + 1);

  fread(buffer, 1, length, out_file);
  buffer[length] = 0;
  
  fclose(in_file);
  fclose(out_file);

  unlink(in_file_name);
  unlink(out_file_name);

  VALUE romanized = rb_str_new_cstr(buffer);
  rb_funcall(romanized, rb_intern("force_encoding"), 1, rb_str_new_cstr("utf-8"));
  return romanized;
}

void Init_kroman(void) {
  VALUE cKroman;
  cKroman = rb_const_get(rb_cObject, rb_intern("Kroman"));

  rb_define_singleton_method(cKroman, "parse", kroman_parse, 1);
  rb_define_singleton_method(cKroman, "let_me_sing!", kroman_parse, 1);
}