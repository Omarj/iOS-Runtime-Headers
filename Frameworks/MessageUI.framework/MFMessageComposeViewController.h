/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMessageComposeViewControllerDelegate>, NSString, NSArray;

@interface MFMessageComposeViewController : UINavigationController  {
    <MFMessageComposeViewControllerDelegate> *_messageComposeDelegate;
    NSArray *_recipients;
    NSString *_body;
}

@property <MFMessageComposeViewControllerDelegate> * messageComposeDelegate;
@property(copy) NSArray * recipients;
@property(copy) NSString * body;

+ (BOOL)canSendText;
+ (void)initialize;
+ (void)_startListeningForAvailabilityNotifications;
+ (void)_serviceAvailabilityChanged:(id)arg1;
+ (void)_updateServiceAvailability;
+ (BOOL)_canSendText;
+ (void)_setupAccountMonitor;

- (void)dealloc;
- (void)setBody:(id)arg1;
- (void)setMessageComposeDelegate:(id)arg1;
- (id)body;
- (void)setModalPresentationStyle:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)messageComposeDelegate;
- (void)setRecipients:(id)arg1;
- (id)recipients;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;

@end
