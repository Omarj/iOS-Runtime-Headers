/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKEditItemViewControllerDelegate>, EKEvent, EKAttendeesListView;

@interface EKAttendeesListViewController : UIViewController <EKEditItemViewControllerProtocol> {
    EKEvent *_event;
    EKAttendeesListView *_contentView;
}

@property <EKEditItemViewControllerDelegate> * editDelegate;


- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)title;
- (void)attendeeSelected:(id)arg1;
- (id)initWithEvent:(id)arg1;

@end
