/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserLocationMarker : VKRouteMatchedAnnotationMarker <VKPuckAnimatorTarget> {
    BOOL _stale;
    BOOL _shouldDisplayHeading;
    BOOL _effectsEnabled;
    int _locationSource;
    float _opacity;
    double _presentationCourse;
    double _headingAccuracy;
    double _locationAccuracy;
}

@property(getter=isStale) BOOL stale;
@property BOOL shouldDisplayHeading;
@property double headingAccuracy;
@property double locationAccuracy;
@property int locationSource;
@property float opacity;
@property(getter=isEffectsEnabled) BOOL effectsEnabled;
@property double presentationCourse;


- (float)opacity;
- (void)setOpacity:(float)arg1;
- (BOOL)isEffectsEnabled;
- (double)locationAccuracy;
- (void)setLocationAccuracy:(double)arg1;
- (void)locationManagerFailedToUpdateLocation;
- (void)updateStateFromLocation:(id)arg1;
- (void)setEffectsEnabled:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })maximumBoundingRectWithCanvasSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)shouldDisplayHeading;
- (void)setHeadingAccuracy:(double)arg1;
- (void)setShouldDisplayHeading:(BOOL)arg1;
- (void)setLocationSource:(int)arg1;
- (int)locationSource;
- (double)headingAccuracy;
- (BOOL)isStale;
- (void)setStale:(BOOL)arg1;
- (void)setPresentationCourse:(double)arg1;
- (double)presentationCourse;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end
