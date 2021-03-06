/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSThread, NSTimer, GEOVoltaireSimpleTileRequester, NSMutableArray;

@interface GEOVoltaireTileRequester : GEOTileRequester <GEOVoltaireMultiTileDownloaderDelegate, GEOTileRequesterDelegate> {
    NSMutableArray *_activeDownloads;
    NSThread *_startThread;
    NSTimer *_activeTileGroupTimeoutTimer;
    NSMutableArray *_errors;
    GEOVoltaireSimpleTileRequester *_simpleRequester;
}

+ (unsigned char)tileProviderIdentifier;
+ (Class)simpleRequesterClass;
+ (Class)multiDownloaderClass;
+ (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
+ (struct { unsigned int x1; double x2; }*)expiringTilesets;
+ (unsigned int)expiringTilesetsCount;

- (void)cancel;
- (void)dealloc;
- (void)cleanup;
- (void)start;
- (void)tileRequesterFinished:(id)arg1;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg5 userInfo:(id)arg6;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2;
- (void)tileDownload:(id)arg1 didFailWithError:(id)arg2;
- (void)tileDownload:(id)arg1 didReceiveData:(id)arg2 edition:(unsigned int)arg3 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg4;
- (void)tileDownloadFinished:(id)arg1;
- (void)tryFinish;
- (id)multiTileURLStringForTileKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 useStatusCodes:(BOOL*)arg2;
- (void)_didReceiveActiveTileGroup:(id)arg1;
- (void)_failedToReceiveActiveTileGroup:(id)arg1;
- (void)_startWithTileKeys:(id)arg1;

@end
