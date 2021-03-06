/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKAnimatedImage, NSArray;

@interface CKAnimatedImageBalloonView : CKImageBalloonView <CKAnimationTimerObserver> {
    CKAnimatedImage *_animatedImage;
    NSArray *_frames;
}

@property(retain) CKAnimatedImage * animatedImage;
@property(copy) NSArray * frames;


- (id)description;
- (void)dealloc;
- (void)prepareForReuse;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)didMoveToWindow;
- (void)animationTimerFired:(unsigned int)arg1;
- (void)setFrames:(id)arg1;
- (id)frames;
- (void)setAnimatedImage:(id)arg1;
- (void)updateAnimationTimerObserving;
- (id)animatedImage;

@end
