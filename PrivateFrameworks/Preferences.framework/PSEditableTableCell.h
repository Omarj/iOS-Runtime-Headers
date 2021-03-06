/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIColor;

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate> {
    UIColor *_textColor;
    id _delegate;
    BOOL _forceFirstResponder;
    BOOL _delaySpecifierRelease;
    SEL _targetSetter;
    id _realTarget;
    BOOL _valueChanged;
    BOOL _isEditing;
}

@property(readonly) BOOL isEditing;

+ (int)cellStyle;

- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (BOOL)canReload;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)endEditingAndSave;
- (void)_saveForExit;
- (void)_setValueChanged;
- (void)cellRemovedFromView;
- (void)setPlaceholderText:(id)arg1;
- (void)controlChanged:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)textField;
- (id)value;
- (void)setValue:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)canResignFirstResponder;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)isFirstResponder;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)prepareForReuse;
- (BOOL)isEditing;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)setCellEnabled:(BOOL)arg1;

@end
