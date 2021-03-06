/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAReminderLocationTrigger, SAReminderDateTimeTrigger;

@interface SAReminderCompositeTrigger : SAReminderTrigger  {
}

@property(retain) SAReminderDateTimeTrigger * dateTimeTrigger;
@property(retain) SAReminderLocationTrigger * locationTrigger;

+ (id)compositeTriggerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)compositeTrigger;

- (id)groupIdentifier;
- (void)setLocationTrigger:(id)arg1;
- (void)setDateTimeTrigger:(id)arg1;
- (id)locationTrigger;
- (id)dateTimeTrigger;
- (id)encodedClassName;

@end
