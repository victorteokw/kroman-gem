# coding: utf-8
lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)

require 'kroman/version'

Gem::Specification.new do |spec|
  spec.name          = "kroman"
  spec.version       = Kroman::VERSION
  spec.authors       = ["Zhang Kai Yu"]
  spec.email         = ["yeannylam@gmail.com"]

  spec.summary       = "Kroman converts Korean hangul to romanized syllables"
  spec.description   = "Kroman make nice Korean songs singable"
  spec.homepage      = "https://github.com/cheunghy/kroman-gem"
  spec.license       = "MIT"

  spec.extensions = %w[ext/kroman/extconf.rb]

  spec.files         = `git ls-files -z`.split("\x0").reject { |f| f.match(%r{^(test|spec|features)/}) }
  spec.require_paths = ["lib"]

  spec.add_development_dependency "bundler", "~> 1.10"
  spec.add_development_dependency "rake", "~> 10.0"
end
