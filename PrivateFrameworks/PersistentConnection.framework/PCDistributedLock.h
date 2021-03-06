/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {
    NSString *_path;
    int _fd;
}


- (void)dealloc;
- (BOOL)tryLock;
- (id)initWithPath:(id)arg1;
- (void)unlock;
- (void)lock;
- (BOOL)_lockBlocking:(BOOL)arg1;
- (id)initWithName:(id)arg1;

@end
