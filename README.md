## AMLoadingSpinner

![Pod Version](https://img.shields.io/cocoapods/v/AMLoadingSpinner.svg?style=flat)
![Platforms](https://cocoapod-badges.herokuapp.com/p/AMLoadingSpinner/badge.png)
![License](https://cocoapod-badges.herokuapp.com/l/AMLoadingSpinner/badge.(png|svg))


`AMLoadingSpinner` is a simple way to show animated spinner for displaying the progress of an ongoing task.

## Getting started

### From CocoaPods

[CocoaPods](http://cocoapods.org) is a dependency manager for Objective-C, which automates and simplifies the process of using 3rd-party libraries like `AMLoadingSpinner` in your projects. First, add the following line to your [Podfile](http://guides.cocoapods.org/using/using-cocoapods.html):

```ruby
pod 'AMLoadingSpinner'
```

Second, install `AMLoadingSpinner` into your project:

```ruby
pod install
```

### Manually

Drag the `AMLoadingSpinner/AMLoadingSpinner` folder into your project.

## Usage

`AMLoadingSpinner` is a singleton, which will always be shown as full-screen subview of application's key window. This spinner has no default animations, so to use it you need to have an image sequence of your animation (array of images).

### Customization

#### Foreground

##### Required

```objective-c
+(void) setAnimationImages:(NSArray <UIImage *>*)images;
```
You can pass a single-object array in this method to get static image without animation.

##### Optional

```objective-c
+(void) setAnimationDuration:(NSTimeInterval)duration;   // Default is 5.0 seconds
+(void)setForegroundImageViewSize:(CGSize)size;          // Default is (100, 100)
```
Note that spinner will always be shown in the middle of the screen.

#### Background 

You can choose the type of spinner's background view. Type of background is enum `AMLoadingSpinnerBackgroundType` and it have 4 values:

```objective-c
AMLoadingSpinnerBackgroundTypeFullScreen    // Full-screen background view                   
AMLoadingSpinnerBackgroundTypeClear         // Background view is not shown
AMLoadingSpinnerBackgroundTypeDefaultView   // Background view is rectangle or square
AMLoadingSpinnerBackgroundTypeCustomView    // Custom background view
```

You can customize background view with these methods:

###### Optional
```objective-c

+(void) setBackgroundType:(AMLoadingSpinnerBackgroundType)type;   // Default is AMLoadingSpinnerBackgroundTypeClear

//Works ONLY when for AMLoadingSpinnerBackgroundTypeCustomView type
+(void) setBackgroundView:(UIView *)view;

//Works ONLY when for AMLoadingSpinnerBackgroundTypeDefaultView type
+(void) setBackgroundViewSize:(CGSize)size;               // Default is (200, 200)
+(void) setBackgroundViewCornerRadius:(CGFloat)radius;    // Default is 10.0

//Works ONLY when for AMLoadingSpinnerBackgroundTypeDefaultView and AMLoadingSpinnerBackgroundTypeFullScreen types
+(void) setBackgroundViewColor:(UIColor *)color;       // Default is (255, 255, 255, 0.7)
```

### Actions

To show/hide spinner, use these methods:

#### Showing

```objective-c
+(void) show;                                
+(void) showWithProgress:(CGFloat)progress;
```

#### Dismissing

```objective-c
+(void) dismiss;                                  
+(void) dismissWithDelay:(NSTimeInterval)delay;
```

Note, that user interaction with app is disabled while spinner is showing.

## License

`AMLoadingSpinner` is distributed under the terms and conditions of the [MIT license](https://github.com/MihaylovArtem/AMLoadingSpinner/blob/master/LICENSE.txt). 

## Credits

`AMLoadingSpinner` is developed by [Artem Mihaylov](http://mihaylovartem.ru). 
If you're using `AMLoadingSpinner` in your project, attribution would be very appreciated.
