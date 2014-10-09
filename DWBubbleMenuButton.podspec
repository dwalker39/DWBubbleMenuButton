Pod::Spec.new do |s|

  s.name         = "DWBubbleMenuButton"
  s.version      = "1.0.1"
  s.summary      = "Simple animation class for expanding and collapsing a variable sized menu"

  s.description  = <<-DESC
                   DWBubbleMenuButton is a simple animation class for expanding and collapsing a variable sized menu. Project allows for expanding menus in left, right, up, and down directions. Using the class is as simple as setting your home button and adding an array of menu buttons.
                   DESC

  s.homepage     = "https://github.com/dwalker39/DWBubbleMenuButton"
  s.license      = 'MIT License'
  s.author             = { "Derrick Walker" => "dwalker39@gmail.com" }
  s.platform     = :ios, '7.0'
  s.source       = { :git => "https://github.com/dwalker39/DWBubbleMenuButton.git", :tag => "v1.0.1" }
  s.source_files  = 'Source/*.{h,m}'
  s.public_header_files = 'Source/*.h'
  s.requires_arc = true

end