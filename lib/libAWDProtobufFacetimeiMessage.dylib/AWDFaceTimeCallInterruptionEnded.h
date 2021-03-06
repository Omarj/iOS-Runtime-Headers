/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
 */

@class NSString;

@interface AWDFaceTimeCallInterruptionEnded : PBCodable  {
    unsigned long long _timestamp;
    NSString *_guid;
    unsigned int _interruptionDuration;
    unsigned int _isAudioResumed;
    unsigned int _isVideoResumed;
    int _linkQuality;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int interruptionDuration : 1; 
        unsigned int isAudioResumed : 1; 
        unsigned int isVideoResumed : 1; 
        unsigned int linkQuality : 1; 
    } _has;
}

@property(readonly) BOOL hasGuid;
@property(retain) NSString * guid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasInterruptionDuration;
@property unsigned int interruptionDuration;
@property BOOL hasIsVideoResumed;
@property unsigned int isVideoResumed;
@property BOOL hasIsAudioResumed;
@property unsigned int isAudioResumed;
@property BOOL hasLinkQuality;
@property int linkQuality;


- (id)guid;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIsAudioResumed:(BOOL)arg1;
- (void)setHasIsVideoResumed:(BOOL)arg1;
- (void)setHasInterruptionDuration:(BOOL)arg1;
- (void)setIsAudioResumed:(unsigned int)arg1;
- (unsigned int)isAudioResumed;
- (BOOL)hasIsAudioResumed;
- (void)setIsVideoResumed:(unsigned int)arg1;
- (unsigned int)isVideoResumed;
- (BOOL)hasIsVideoResumed;
- (void)setInterruptionDuration:(unsigned int)arg1;
- (unsigned int)interruptionDuration;
- (BOOL)hasInterruptionDuration;
- (void)setHasLinkQuality:(BOOL)arg1;
- (void)setLinkQuality:(int)arg1;
- (int)linkQuality;
- (BOOL)hasLinkQuality;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (BOOL)hasGuid;
- (void)setGuid:(id)arg1;

@end
