/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSTimer;

@interface SKTelephonyController : NSObject  {
    NSTimer *_hackTimer;
    struct __CTServerConnection { } *_serverCon;
    BOOL _commCenterActive;
    int _stream;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)networkName;
- (struct __CFArray { }*)currentCalls;
- (void)sendUSSDResponse:(id)arg1;
- (id)readATResponse;
- (void)closeBasebandStream;
- (void)openBasebandStream;
- (id)imei;
- (id)basebandVersion;
- (void)enableMux:(BOOL)arg1;
- (BOOL)isCommCenterActive;
- (void)requestNetworkList;
- (void)setManuallySelectNetwork:(id)arg1;
- (void)setAutoSelectNetwork;
- (BOOL)autoSelectsNetwork;
- (void)setActiveBands:(struct __CFArray { }*)arg1;
- (id)activeBands;
- (id)supportedBands;
- (void)setSpeechVolume:(float)arg1;
- (void)setMasterVolume:(float)arg1;
- (void)hangupActiveCall;
- (BOOL)dialNumber:(id)arg1;
- (double)activeCallDuration;
- (BOOL)isCallConnected;
- (void)setActiveCall:(struct __CTCall { }*)arg1;
- (id)myPhoneNumber;
- (void)pulseRTS;
- (void)sendATCommand:(id)arg1;
- (void)setBasebandSpeed:(int)arg1;
- (void)resetModem;
- (void)enableCommCenter:(BOOL)arg1;
- (struct __CTServerConnection { }*)serverConnection;
- (void)updateWithCall:(struct __CTCall { }*)arg1;
- (void)callIsIncoming:(struct __CTCall { }*)arg1;
- (void)ignoreIncomingCall;
- (void)answerIncomingCall;
- (void)mainThreadIgnoreIncomingCall;
- (void)hangupCall:(struct __CTCall { }*)arg1;
- (void)mainThreadAnswerIncomingCall;
- (struct __CTCall { }*)incomingCall;
- (void)routeAudioToCall;
- (struct __CTCall { }*)activeCall;
- (int)countCurrentCalls;
- (void)setDataStatus:(BOOL)arg1;
- (void)registerTelephonyNotification:(struct __CFString { }*)arg1 withCallback:(int (*)())arg2;
- (int)signalStrength;
- (BOOL)dataStatus;

@end
