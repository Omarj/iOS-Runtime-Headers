/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSOperationQueue, NSString, PFUbiquityLocation, NSURL;

@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter> {
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSURL *_presentedItemURL;
    unsigned long long _lastFSEventIdentifier;
    NSMutableDictionary *_delegates;
}

@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) NSString * localPeerID;
@property(readonly) NSURL * presentedItemURL;
@property(readonly) NSOperationQueue * presentedItemOperationQueue;
@property(readonly) NSURL * primaryPresentedItemURL;

+ (id)sharedPrivateOperationQueue;
+ (void)initialize;

- (id)description;
- (void)dealloc;
- (id)init;
- (unsigned long long)lastPresentedItemEventIdentifier;
- (void)setLastPresentedItemEventIdentifier:(unsigned long long)arg1;
- (id)initWithUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)ubiquityRootLocation;
- (id)localPeerID;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)relinquishPresentedItemToReader:(id)arg1;

@end
