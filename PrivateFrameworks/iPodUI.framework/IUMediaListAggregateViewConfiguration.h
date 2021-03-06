/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUPropertyLayoutStorage, UIImage, IUMediaListAggregateView, MPMediaItem, IUMediaListDataSource;

@interface IUMediaListAggregateViewConfiguration : NSObject  {
    MPMediaItem *_aggregateItem;
    IUMediaListDataSource *_dataSource;
    IUPropertyLayoutStorage *_labelStorage;
    IUPropertyLayoutStorage *_buttonStorage;
    BOOL _showsShuffleButton;
    BOOL _shuffleButtonEnabled;
    struct CGSize { 
        float width; 
        float height; 
    } _layoutSize;
    IUMediaListAggregateView *_aggregateView;
}

@property struct CGSize { float x1; float x2; } layoutSize;
@property(retain) IUMediaListDataSource * dataSource;
@property(retain) MPMediaItem * aggregateItem;
@property(readonly) UIImage * backgroundImage;
@property BOOL showsShuffleButton;
@property BOOL shuffleButtonEnabled;
@property(readonly) BOOL canDisplayShuffleButton;
@property(retain) IUPropertyLayoutStorage * labelStorage;
@property(readonly) unsigned int numberOfLabels;
@property(retain) IUPropertyLayoutStorage * buttonStorage;
@property(readonly) unsigned int numberOfButtons;
@property IUMediaListAggregateView * aggregateView;

+ (id)newConfigurationForDataSource:(id)arg1;

- (void)reloadLayoutInformation;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (BOOL)getShadowColor:(id*)arg1 offset:(struct CGSize { float x1; float x2; }*)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (int)textAlignmentForLabelAtIndex:(unsigned int)arg1;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLabelAtIndex:(unsigned int)arg1;
- (id)stringForLabelAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfLabels;
- (void)setLayoutSize:(struct CGSize { float x1; float x2; })arg1;
- (id)itemsQuery;
- (void)dealloc;
- (Class)viewClass;
- (struct CGSize { float x1; float x2; })layoutSize;
- (unsigned int)numberOfButtons;
- (id)backgroundImage;
- (id)dataSource;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (void)setShuffleButtonEnabled:(BOOL)arg1;
- (BOOL)shuffleButtonEnabled;
- (BOOL)showsShuffleButton;
- (void)setButtonStorage:(id)arg1;
- (void)setLabelStorage:(id)arg1;
- (void)setAggregateView:(id)arg1;
- (id)aggregateItem;
- (void)setShowsShuffleButton:(BOOL)arg1;
- (id)artworkImageWithLoadingCompletionHandler:(id)arg1;
- (id)viewForButtonAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForButtonAtIndex:(unsigned int)arg1;
- (id)backgroundColorWithModifiers:(unsigned int)arg1;
- (BOOL)useLabelStorage;
- (id)newViewWithDelegate:(id)arg1;
- (BOOL)canDisplayShuffleButton;
- (id)buttonStorage;
- (id)labelStorage;
- (id)aggregateView;
- (void)reloadDisplayValues;
- (void)reloadAggregateItem;
- (void)setAggregateItem:(id)arg1;
- (void)initStorage;

@end
