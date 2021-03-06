/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, UILabel, UIActivityIndicatorView, UIView, NSDate;

@interface PLPhotoTilePlaceholderView : UIView  {
    UIImageView *_placeholderImageView;
    UIActivityIndicatorView *_loadingIndicatorView;
    UILabel *_loadingLabel;
    UIView *_loadingContainerView;
    NSDate *_lastViewPhaseChangeDate;
    BOOL _indicatorIsVisible;
    int _interfaceIdiom;
    int _placeholderState;
}

@property(readonly) int interfaceIdiom;
@property int placeholderState;


- (void)transitionToState:(int)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setPlaceholderState:(int)arg1;
- (id)_newLoadingLabel;
- (void)_setUpLoadingContainerView;
- (double)_timeSinceLastPlaceholderPhaseChange;
- (void)_removeLoadingContainerView;
- (void)_transitionToNewStateAnimated:(BOOL)arg1;
- (void)_setupInitialUI;
- (void)_layoutSubviews;
- (int)placeholderState;
- (void)showLoadingIndicatorWhenReady;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withState:(int)arg2 interfaceIdiom:(int)arg3;
- (int)interfaceIdiom;

@end
