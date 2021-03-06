/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UINavigationButton, UIView, MPViewController, MPAVItem, MPPlaybackTitlesView, MPTransitionController;

@interface IUPlaybackViewController : IUiPodViewController  {
    MPViewController *_activeViewController;
    UINavigationButton *_backButton;
    UIView *_backstop;
    BOOL _exited;
    struct __CFBag { } *_ignoredChangeTypes;
    MPAVItem *_item;
    int _interfaceOrientation;
    MPAVItem *_pendingItem;
    MPAVItem *_pendingItemWithDifferentType;
    int _pendingInterfaceOrientation;
    MPPlaybackTitlesView *_titlesView;
    MPTransitionController *_transitionController;
    unsigned int _usingVideoOut : 1;
    unsigned int _wantsVideoLayer : 1;
}

@property(retain) MPAVItem * item;
@property int orientation;
@property BOOL usingVideoOut;
@property BOOL wantsVideoLayer;


- (void)setActiveViewController:(id)arg1;
- (id)activeViewController;
- (void)setItem:(id)arg1;
- (void)_backButtonAction:(id)arg1;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)viewControllerRequestsExit:(id)arg1;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)performTransition:(id)arg1;
- (void)viewController:(id)arg1 endIgnoringChangeType:(unsigned int)arg2;
- (void)viewController:(id)arg1 beginIgnoringChangeTypes:(unsigned int)arg2;
- (void)_tvOutCapabilityChanged:(id)arg1;
- (void)_reloadForTransitionFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 animated:(BOOL)arg3;
- (void)_setActiveViewController:(id)arg1 forTransition:(BOOL)arg2;
- (id)newViewControllerForItem:(id)arg1 interfaceOrientation:(int)arg2 reusingController:(id)arg3;
- (void)_transitionFinished:(id)arg1;
- (void)beginIgnoringChangeTypes:(unsigned int)arg1;
- (void)endIgnoringChangeTypes:(unsigned int)arg1;
- (void)setItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_noteStoppedIgnoringChangeType:(unsigned int)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setOrientation:(int)arg1;
- (id)item;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (int)statusBarStyle;
- (BOOL)isStatusBarHidden;
- (int)interfaceOrientation;
- (int)orientation;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)reloadData;
- (BOOL)wantsVideoLayer;
- (void)_performTransition:(id)arg1 toController:(id)arg2;
- (void)updateArtworkToImageAtTimeMarker:(id)arg1;
- (void)_reloadForTransitionFromItem:(id)arg1 toItem:(id)arg2 animated:(BOOL)arg3;
- (BOOL)shouldIgnoreChangeType:(unsigned int)arg1;
- (BOOL)_reloadFeederForDataSource:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (id)newTransitionControllerForChangeToInterfaceOrientation:(int)arg1 fromInterfaceOrientation:(int)arg2;
- (void)setUsingVideoOut:(BOOL)arg1;
- (void)setWantsVideoLayer:(BOOL)arg1;
- (void)setWantsVideoLayer:(BOOL)arg1 item:(id)arg2;
- (void)exitPlayerForAccessorySplash;
- (void)setExited:(BOOL)arg1;
- (BOOL)exited;
- (BOOL)usingVideoOut;
- (id)newTransitionControllerForChangeToItem:(id)arg1 fromItem:(id)arg2;
- (void)_accessorySplashViewWillAppearNotification:(id)arg1;
- (void)deviceOrientationChanged:(int)arg1;
- (BOOL)shouldShowNowPlayingButton;
- (void)exitPlayerAnimated:(BOOL)arg1;

@end
