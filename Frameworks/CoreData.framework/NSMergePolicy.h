/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMergePolicy : NSObject  {
    unsigned int _type;
    void *_reserved2;
    void *_reserved3;
}

@property(readonly) unsigned int mergeType;

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)load;

- (unsigned int)type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)resolveConflict:(id)arg1;
- (void)_mergeDeletionWithStoreChangesForObject:(id)arg1 withRecord:(id)arg2;
- (void)mergeToManyRelationshipForSourceObject:(id)arg1 withOldSnapshot:(id)arg2 newSnapshot:(id)arg3 andAncestor:(id)arg4 andLegacyPath:(BOOL)arg5;
- (void)_mergeChangesObjectUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2;
- (void)_mergeChangesStoreUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2;
- (unsigned int)mergeType;
- (id)initWithMergeType:(unsigned int)arg1;
- (BOOL)resolveConflicts:(id)arg1 error:(id*)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithType:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
