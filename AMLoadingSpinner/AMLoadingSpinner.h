//
//  AMLoadingSpinner.h
//  RedWhite
//
//  Created by Artem Mihaylov on 02.08.17.
//  Copyright © 2017 Mihaylov Artem. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 Type of background view
 */
typedef enum : NSUInteger {
    /** Background view is showing on full screen, you can set only it's color */
    AMLoadingSpinnerBackgroundTypeFullScreen,
    /** Background view is not showing */
    AMLoadingSpinnerBackgroundTypeClear,
    /** Background view is UIView, you can set it's size, color and cornerRadius */
    AMLoadingSpinnerBackgroundTypeDefaultView,
    /** Background view is custom UIView, you need to customize it before you called setBackgroundView method */
    AMLoadingSpinnerBackgroundTypeCustomView
} AMLoadingSpinnerBackgroundType;

@interface AMLoadingSpinner : UIView

/**
 * Setting array of images to animate spinner (Image Sequence)
 
 * To use static image without animation, just set use this method with single object array.
 
 @param images Array of images to animate spinner
 */
+(void) setAnimationImages:(NSArray <UIImage *>*)images;

/**
 * Setting how fast your all images from your array will be showed.
 
 * The default value is 5.0 seconds
 
 @param duration Duration of animation
 */
+(void) setAnimationDuration:(NSTimeInterval)duration;

/**
 * Setting size of spinner container (where images will be shown) frame
 
 * Note, that spinner will be always shown in the middle of the screen
 
 * The default value is (100, 100)
 
 @param size Size of spinner container frame
 */
+(void)setForegroundImageViewSize:(CGSize)size;

/**
 * Setting type of background view of spinner
 
 * The default value is AMLoadingSpinnerBackgroundTypeClear
 
 @param type type of background view
 */
+(void) setBackgroundType:(AMLoadingSpinnerBackgroundType)type;

/**
 * Setting custom background view
 
 * Note, that this method works ONLY when the type of spinner is AMLoadingSpinnerBackgroundTypeCustomView
 
 @param view custom background view
 */
+(void) setBackgroundView:(UIView *)view;

/**
 * Setting default background view size
 
 * Note, that this method works ONLY when the type of spinner is AMLoadingSpinnerBackgroundTypeDefaultView
 
 * The default value is (200, 200)
 
 @param size default background view size
 */
+(void) setBackgroundViewSize:(CGSize)size;

/**
 * Setting default background view color
 
 * Note, that this method works ONLY when the type of spinner is AMLoadingSpinnerBackgroundTypeDefaultView
 
 * The default value is (255, 255, 255, 0.7)
 
 @param color default background view color
 */
+(void) setBackgroundViewColor:(UIColor *)color;

/**
 * Setting default background view corner radius
 
 * Note, that this method works ONLY when the type of spinner is AMLoadingSpinnerBackgroundTypeDefaultView
 
 * The default value is 10.0
 
 @param radius default background view radius
 */
+(void) setBackgroundViewCornerRadius:(CGFloat)radius;

/**
 * Show spinner on screen
 
 * When spinner is showing, user interaction is disabled
 
 * This method will do nothing, if spinner is showing now
 */
+(void) show;

/**
 * Dismiss spinner from screen
 
 * This method will do nothing, if spinner is not showing now
 */
+(void) dismiss;


@end
