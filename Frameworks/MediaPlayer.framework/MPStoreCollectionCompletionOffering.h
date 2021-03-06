/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, MPMediaQuery, MPStoreOfferMediaItemCollection;

@interface MPStoreCollectionCompletionOffering : NSObject  {
    MPMediaQuery *_localItemsQuery;
    MPStoreOfferMediaItemCollection *_mergedCollection;
    MPStoreOfferMediaItemCollection *_offeredCollection;
    int _preferredStoreOfferVariant;
}

@property(readonly) MPStoreOfferMediaItemCollection * itemsWithCompletionsCollection;
@property(readonly) NSArray * localItems;
@property(readonly) int preferredStoreOfferVariant;
@property(readonly) MPStoreOfferMediaItemCollection * offeredCollection;
@property(readonly) MPStoreOfferMediaItemCollection * mergedCollection;


- (id)offeredCollection;
- (id)localItems;
- (id)itemsWithCompletionsCollection;
- (int)preferredStoreOfferVariant;
- (id)mergedCollection;
- (id)initWithOfferedCollection:(id)arg1 localItemsQuery:(id)arg2 preferredStoreOfferVariant:(int)arg3;
- (void)dealloc;

@end
