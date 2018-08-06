Pod::Spec.new do |s|

  s.name         = "SSignalKit"
  s.version      = "0.0.2"
  s.summary      = "An experimental Rx- and RAC-3.0-inspired FRP framework"
  s.homepage     = "https://github.com/PauloMigAlmeida/Signals"
  s.license      = "MIT"

  s.authors            = { "Peter Iakovlev" => '', "Mikhail Komarov" =>  "nemo1369@gmail.com" }

  s.ios.deployment_target = "8.0"
  s.osx.deployment_target = "10.7"

  s.source       = { :git => "git@github.com:Nemo1369/Signals.git", :tag => s.version }
  s.source_files  = "SSignalKit/**/*.{h,m}"
  s.requires_arc = true

end
