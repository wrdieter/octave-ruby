# -*- ruby -*-

require 'rubygems'
require 'hoe'
require './lib/octave/version.rb'

Hoe.spec('octave-ruby') do |p|
  p.version = Octave::Version::STRING
  p.rubyforge_name = 'octave-ruby'
  p.author = ["Jonathan Younger"]
  p.email = ["jonathan@daikini.com"]
  p.summary = "A Ruby interface to the Octave interpreted language."
  p.description = p.paragraphs_of('README.txt', 2..5).join("\n\n")
  p.urls = ["http://octave-ruby.rubyforge.org/"]
  p.changes = p.paragraphs_of('History.txt', 0..1).join("\n\n")
  p.spec_extras["extensions"] = "ext/octave_api/extconf.rb"
end

# vim: syntax=Ruby
