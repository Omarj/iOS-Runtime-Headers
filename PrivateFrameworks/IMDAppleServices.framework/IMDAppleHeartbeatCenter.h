/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

@class NSDate, NSMutableArray, IMTimer;

@interface IMDAppleHeartbeatCenter : NSObject <IMSystemMonitorListener> {
    NSMutableArray *_registrations;
    NSDate *_registrationHeartbeatDate;
    IMTimer *_registrationHeartbeatTimer;
    double _baseRegistrationHBI;
}

@property(readonly) double registrationHBI;

+ (id)sharedInstance;

- (void)removeRegistrationInfo:(id)arg1;
- (void)addRegistrationInfo:(id)arg1;
- (double)registrationHBI;
- (void)_stopRegistrationHeartbeat;
- (void)_updateRegistrationHeartbeat;
- (void)_serverHeartBeatTimerHit:(id)arg1;
- (void)_registrationStateChangedNotification:(id)arg1;
- (void)_bagReloaded:(id)arg1;
- (double)_nextRegistrationHeartbeatTime;
- (void)_startRegistrationHeartbeat;
- (BOOL)_registration:(id)arg1 needsRenewal:(double*)arg2;
- (void)_serverHeartBeat:(id)arg1;
- (void)updateHeartbeat;
- (id)_registrationsPendingHeartbeat;
- (id)init;
- (void)systemDidWake;

@end
