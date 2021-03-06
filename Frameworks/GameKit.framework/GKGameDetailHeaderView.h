/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImageView, GKGameTitleView, GKHeaderSegmentedControl, GKGameRecord;

@interface GKGameDetailHeaderView : GKDetailHeaderView  {
}

@property(retain) UIImageView * iconView;
@property(retain) GKGameTitleView * titleView;
@property GKHeaderSegmentedControl * segmentedControl;
@property(retain) GKGameRecord * gameRecordLocalPlayer;
@property BOOL landscapeStyle;
@property(readonly) int gameIconStyle;

+ (id)ratableHeaderView;
+ (id)headerView;

- (void)applyStoreItem:(id)arg1 toBuyButton:(id)arg2 titleView:(id)arg3;
- (int)gameIconStyle;
- (void)updateFromGameRecord;

@end
