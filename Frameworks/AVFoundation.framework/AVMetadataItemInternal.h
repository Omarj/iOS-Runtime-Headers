/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSLocale, NSString, NSDictionary;

@interface AVMetadataItemInternal : NSObject  {
    struct OpaqueFigMetadataReader { } *reader;
    long itemIndex;
    NSString *keySpace;
    id key;
    NSString *commonKey;
    NSLocale *locale;
    id value;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } time;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } duration;
    NSDictionary *extras;
}



@end
