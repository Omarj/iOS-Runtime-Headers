/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIButton, UILabel, UIProgressIndicator, UIImage, NSString;

@interface GKParticipantCellContents : GKCollectionCellContents  {
    UIImage *_image;
    int _kind;
    UILabel *_titleLabel;
    UILabel *_statusLabel;
    UIProgressIndicator *_progressIndicator;
    UIButton *_cancelBox;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _imageFrame;
    UIButton *_addButton;
}

@property(retain) UIImage * image;
@property(retain) NSString * title;
@property(retain) NSString * status;
@property BOOL progressIndicatorVisible;
@property BOOL cancelBoxVisible;
@property int kind;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } imageFrame;
@property(retain) UILabel * titleLabel;
@property(retain) UILabel * statusLabel;
@property(retain) UIProgressIndicator * progressIndicator;
@property(retain) UIButton * cancelBox;
@property(retain) UIButton * addButton;


- (id)addButton;
- (void)setImageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageFrame;
- (id)cancelBox;
- (BOOL)cancelBoxVisible;
- (BOOL)progressIndicatorVisible;
- (void)setProgressIndicatorVisible:(BOOL)arg1;
- (void)addButtonPressed;
- (void)setAddButton:(id)arg1;
- (void)cancelPressed;
- (void)setCancelBox:(id)arg1;
- (void)setKind:(int)arg1;
- (void)setCancelBoxVisible:(BOOL)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setProgressIndicator:(id)arg1;
- (id)progressIndicator;
- (void)setStatusLabel:(id)arg1;
- (id)statusLabel;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setStatus:(id)arg1;
- (id)status;
- (int)kind;
- (void)prepareForReuse;
- (id)image;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
