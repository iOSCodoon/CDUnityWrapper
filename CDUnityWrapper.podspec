Pod::Spec.new do |s|
  s.name = 'CDUnityWrapper'
  s.version = '0.0.1'
  s.license = 'MIT'
  s.summary = 'Unity Wrapper for CodoonSport.'
  s.homepage = 'https://github.com/iOSCodoon'
  s.authors = { 'iOSCodoon' => 'ios@codoon.com' }
  s.source = { :git => 'https://github.com/iOSCodoon/CDUnityWrapper.git', :tag => s.version.to_s }
  s.requires_arc = true
  s.ios.deployment_target = '8.0'
  
  s.source_files = 'UnityWrapper/*.h'
  s.vendored_libraries = 'UnityWrapper/*.a'
  s.resources = 'UnityWrapper/Data'
end
