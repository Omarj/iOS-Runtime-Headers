/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, NSString, NSData, NSObject<OS_dispatch_group>, GKMatchRequestInternal, NSDictionary;

@interface GKMatchResponse : GKResponse  {
    NSData *_sessionToken;
    NSArray *_matches;
    int _state;
    NSData *_cdxTicket;
    NSArray *_relayPushes;
    NSString *_rid;
    NSObject<OS_dispatch_group> *_matchingGroup;
    GKMatchRequestInternal *_matchRequest;
    int _sequence;
    NSDictionary *_serverRequest;
}

@property(retain) NSString * rid;
@property(retain) NSArray * matches;
@property(retain) NSData * sessionToken;
@property(retain) NSArray * relayPushes;
@property(retain) NSData * cdxTicket;
@property NSObject<OS_dispatch_group> * matchingGroup;
@property(retain) GKMatchRequestInternal * matchRequest;
@property(retain) NSDictionary * serverRequest;
@property(readonly) int sequence;
@property int state;

+ (id)codedPropertyKeys;

- (void)setServerRequest:(id)arg1;
- (id)serverRequest;
- (int)sequence;
- (void)setMatchingGroup:(id)arg1;
- (id)matchingGroup;
- (void)setRelayPushes:(id)arg1;
- (void)setCdxTicket:(id)arg1;
- (BOOL)transitionToState:(int)arg1;
- (int)_incrementSequence;
- (void)setMatchRequest:(id)arg1;
- (void)setMatches:(id)arg1;
- (id)relayPushes;
- (id)cdxTicket;
- (id)matches;
- (void)setSessionToken:(id)arg1;
- (id)sessionToken;
- (void)setRid:(id)arg1;
- (id)rid;
- (id)matchRequest;
- (int)state;
- (BOOL)isCancelled;
- (void)dealloc;
- (BOOL)isFinished;
- (void)setState:(int)arg1;

@end
