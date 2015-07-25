# kroman gem

Kroman is a Korean hangul romanization tool.

It's currently implemented as a command line utility, a ruby gem,
a python package, and a nodejs package. Editor plugins will be implemented.

This is the ruby gem.

It is installed with C extension, which means it's efficient, lightweight
and enjoyable.

## Implementations

- [kroman command line tool](https://github.com/cheunghy/kroman)
- [kroman ruby gem](https://github.com/cheunghy/kroman-gem)
- [kroman python package](https://github.com/cheunghy/kroman-py)
- [kroman nodejs package](https://github.com/cheunghy/kroman-js)

## Installation

Add this line to your application's Gemfile:

```ruby
gem 'kroman-gem'
```

And then execute:

    $ bundle

Or install it yourself as:

    $ gem install kroman-gem

## Usage

``` ruby
Kroman.let_me_sing!("손목시계")
=> "son-mog-si-gye"
```

## Contributing

Bug reports and pull requests are welcome on GitHub at https://github.com/cheunghy/kroman-gem.

## License

The gem is available as open source under the terms of the [MIT License](http://opensource.org/licenses/MIT).
