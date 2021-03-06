/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, CIColor, NSNumber;

@interface CISwipeTransition : CIFilter  {
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIVector *inputExtent;
    CIColor *inputColor;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
    NSNumber *inputOpacity;
}

@property(retain) CIImage * inputImage;
@property(retain) CIImage * inputTargetImage;
@property(copy) CIVector * inputExtent;
@property(copy) CIColor * inputColor;
@property(copy) NSNumber * inputTime;
@property(copy) NSNumber * inputAngle;
@property(copy) NSNumber * inputWidth;
@property(copy) NSNumber * inputOpacity;

+ (id)customAttributes;

- (id)inputOpacity;
- (id)inputExtent;
- (void)setInputExtent:(id)arg1;
- (void)setInputOpacity:(id)arg1;
- (id)inputTime;
- (void)setInputTargetImage:(id)arg1;
- (id)inputTargetImage;
- (void)setInputTime:(id)arg1;
- (id)inputWidth;
- (void)setInputWidth:(id)arg1;
- (id)inputColor;
- (void)setInputColor:(id)arg1;
- (void)setInputAngle:(id)arg1;
- (id)inputAngle;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
