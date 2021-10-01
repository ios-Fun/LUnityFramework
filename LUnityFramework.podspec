#
#  Be sure to run `pod spec lint KMCategary.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "LUnityFramework"
  spec.version      = "0.0.1"
  spec.summary      = "LUnityFramework模块."
  
  spec.description  = "LUnityFramework add"

  spec.homepage     = "https://github.com/ios-Fun/LUnityFramework.git"
  spec.license      = "MIT"
  spec.author             = { "wangyouzhuo" => "wangyouzhuo@111.cn" }
  spec.platform     = :ios, "12.0"
  spec.source       = { :git => "https://github.com/ios-Fun/LUnityFramework.git", :tag => "#{spec.version}" }
  spec.public_header_files = "Classes/**/*.h"
    spec.vendored_frameworks = "UnityFramework.framework"
  spec.source_files  = "Classes", "Classes/**/*.{h,m,swift}"
  spec.exclude_files = "Classes/Exclude"
  spec.user_target_xcconfig = { 'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES' }
end
