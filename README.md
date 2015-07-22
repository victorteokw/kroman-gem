# kroman gem

The fantastic [kroman](https://github.com/cheunghy/kroman) converts hanguls to romanized syllables.

This is the ruby gem wrapper around it.

It has C extension, which means it's efficient, lightweight and enjoyable.

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

