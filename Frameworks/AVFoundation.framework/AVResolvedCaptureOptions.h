/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureDeviceFormat, NSMutableDictionary, NSString;

@interface AVResolvedCaptureOptions : NSObject  {
    NSMutableDictionary *baseCaptureOptions;
    NSMutableDictionary *optionsOverrides;
    struct __CFDictionary { } *outputSettingsOverrides;
    float minFrameRateOverride;
    float maxFrameRateOverride;
    BOOL usePreviewSizedCaptureBuffers;
    BOOL useStabilizationIfAvailable;
    NSString *faceDetectionMode;
    BOOL faceDetectionNotificationsEnabled;
    AVCaptureDeviceFormat *resolvedVideoDeviceFormat;
}

+ (void)initialize;
+ (id)resolvedCaptureOptionsWithCaptureOptionsDictionary:(id)arg1;

- (void)dealloc;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)enableFaceDetectionNotificationsForConnection:(id)arg1;
- (BOOL)hasMaxFrameRateOverrideInResolvedOptions:(id)arg1;
- (BOOL)hasMinFrameRateOverrideInResolvedOptions:(id)arg1;
- (BOOL)hasHeightOverrideInResolvedOptions:(id)arg1;
- (BOOL)hasWidthOverrideInResolvedOptions:(id)arg1;
- (void)validateResolvedOptions:(id)arg1 againstSensorFormat:(id)arg2;
- (id)deviceFormatForCamera:(id)arg1 captureOptions:(id)arg2;
- (void)setBestPreviewResolutionForCaptureOptions:(id)arg1;
- (BOOL)hasOverridesAffectingPreviewFormatInResolvedOptions:(id)arg1 withScalingMode:(id)arg2;
- (void)setBestCaptureResolutionForAVScalingMode:(id)arg1 captureOptions:(id)arg2;
- (BOOL)hasOverridesAffectingCaptureFormatInResolvedOptions:(id)arg1 withScalingMode:(id)arg2;
- (void)setBestSensorResolutionForCamera:(id)arg1 captureOptions:(id)arg2 chosenSensorFormat:(id*)arg3;
- (BOOL)hasOverridesAffectingSensorFormatInResolvedOptions:(id)arg1;
- (id)cameraForCaptureOptions:(id)arg1;
- (void)resolveOutputSettingsToCaptureOptions:(id)arg1 resolvedScalingMode:(id*)arg2;
- (void)resolveFrameRatesToCaptureOptions:(id)arg1;
- (int)rankForFaceDetectionMode:(id)arg1;
- (id)initWithCaptureOptionsDictionary:(id)arg1;
- (void)usePreviewSizedCaptureBuffersForConnection:(id)arg1;
- (void)addOutputSettings:(id)arg1 forConnection:(id)arg2;
- (id)baseCaptureOptions;
- (id)resolvedVideoDeviceFormat;
- (id)resolvedCaptureOptionsDictionary;
- (void)addMaxFrameRate:(float)arg1 forConnection:(id)arg2;
- (void)addMinFrameRate:(float)arg1 forConnection:(id)arg2;
- (void)useStabilizationIfAvailableForConnection:(id)arg1;
- (void)addFaceDetectionMode:(id)arg1 forConnection:(id)arg2;

@end