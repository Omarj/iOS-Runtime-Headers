/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKIdentityProtocol>;

@interface EKUnknownIdentityViewController : ABUnknownPersonViewController <ABUnknownPersonViewControllerDelegate> {
    <EKIdentityProtocol> *_identity;
}


- (void)dealloc;
- (void)setIdentity:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)initWithIdentity:(id)arg1;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;

@end
