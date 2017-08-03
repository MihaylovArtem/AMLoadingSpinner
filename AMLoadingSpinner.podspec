Pod::Spec.new do |s|

  s.name         = "AMLoadingSpinner"
  s.version      = "0.1"
  s.summary      = "AMLoadingSpinner is a way to show progress of your ongoing task."
  s.description  = "AMLoadingSpinner is a simple way to show animated spinner for displaying the progress of an ongoing task"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.homepage     = "https://github.com/MihaylovArtem/AMLoadingSpinner"
  s.author       = { "Mihaylov Artem" => "mihaylovartem74@gmail.com" }
  s.platform     = :ios
  s.source       = { :git => "https://github.com/MihaylovArtem/AMLoadingSpinner.git", :tag => s.version.to_s }
  s.source_files = "AMLoadingSpinner/*.{h,m}"
  s.requires_arc = true

end
