/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLProtocolInternal;

@interface NSURLProtocol : NSObject  {
    NSURLProtocolInternal *_internal;
}

+ (void)_removePropertyForKey:(id)arg1 inRequest:(id)arg2;
+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1;
+ (void)removePropertyForKey:(id)arg1 inRequest:(id)arg2;
+ (void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3;
+ (id)propertyForKey:(id)arg1 inRequest:(id)arg2;
+ (id)_protocolWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 allowCF:(BOOL)arg4;
+ (void)unregisterClass:(Class)arg1;
+ (BOOL)registerClass:(Class)arg1;
+ (id)_registeredClasses;
+ (Class)_protocolClassForRequest:(id)arg1;
+ (id)_canonicalRequestForRequest:(id)arg1 allowCF:(BOOL)arg2;
+ (BOOL)_requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 allowCF:(BOOL)arg3;
+ (Class)_protocolClassForRequest:(id)arg1 allowCF:(BOOL)arg2;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;

- (void)startLoading;
- (void)dealloc;
- (void)stopLoading;
- (id)request;
- (id)client;
- (void)_releaseProtocolClientReference;
- (id)cachedResponse;
- (void)_resumeLoading;
- (void)_suspendLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end
