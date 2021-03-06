/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKTileKeyList, <VKMapLayer>, VKTileSelection, <VKTileProviderClient>, VKStylesheet, NSMutableSet, VKTileCache, VKTileSource, NSArray, NSSet, _VKTileProviderTimerTarget, GEOTileKeyList, VKMapRasterizer, NSTimer;

@interface VKTileProvider : NSObject <VKTileSourceClient> {
    <VKTileProviderClient> *_client;
    int _mode;
    VKTileSelection *_tileSelection;
    VKTileKeyList *_keysInView;
    NSTimer *_evaluationTimer;
    NSMutableSet *_tilesToRender;
    NSArray *_holes;
    NSMutableSet *_lostTiles;
    BOOL _fallbackEnabled;
    VKTileCache *_tilePool;
    VKTileSource *_tilesSources[26];
    VKTileSource *_optionalTileSources[26];
    VKStylesheet *_stylesheet;
    float _loadingProgress;
    struct VKCameraState { 
        struct { 
            double x; 
            double y; 
            double z; 
        } position; 
        struct { 
            double v[4][4]; 
        } orientation; 
        float aspectRatio; 
        float verticalFieldOfView; 
    } _lastCameraState;
    struct CGSize { 
        float width; 
        float height; 
    } _lastCanvasSize;
    BOOL _tilesChanged;
    VKMapRasterizer *_rasterizer;
    <VKMapLayer> *_debugLayer;
    GEOTileKeyList *_debugLayerKeys;
    NSMutableSet *_geoTileSources;
    int _tileReserveLimit;
    int _tileMaximumLimit;
    BOOL _useSmallTileCache;
    _VKTileProviderTimerTarget *_timerTarget;
}

@property int mode;
@property(getter=isFallbackEnabled) BOOL fallbackEnabled;
@property BOOL useSmallTileCache;
@property <VKTileProviderClient> * client;
@property(retain) VKStylesheet * stylesheet;
@property(readonly) VKTileKeyList * keysInView;
@property(readonly) NSSet * tilesToRender;
@property(readonly) float loadingProgress;
@property(readonly) NSArray * visibleTileSets;
@property(retain) <VKMapLayer> * debugLayer;
@property(readonly) GEOTileKeyList * debugLayerKeys;


- (void)setClient:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)dealloc;
- (id)stylesheet;
- (int)mode;
- (void)setMode:(int)arg1;
- (id)initWithClient:(id)arg1;
- (id)client;
- (BOOL)isFallbackEnabled;
- (id)debugLayer;
- (BOOL)useSmallTileCache;
- (void)retireTile:(id)arg1;
- (void)rasterizer:(id)arg1 didMakeRasterTile:(id)arg2 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (BOOL)tileSource:(id)arg1 keyIsNeeded:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(id)arg1 invalidateKeys:(id)arg2;
- (void)tileSource:(id)arg1 invalidateKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(id)arg1 didFailToLoadTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2 error:(id)arg3;
- (void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (BOOL)tileSourceMayUseNetwork:(id)arg1;
- (void)changeTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 toState:(unsigned int)arg2 withMetadata:(id)arg3 withTile:(id)arg4 forLayer:(unsigned int)arg5;
- (unsigned int)layerForSource:(id)arg1;
- (void)_pushEvaluationTimer;
- (id)selectTiles:(int*)arg1 needRasterization:(BOOL*)arg2;
- (void)_fillHoles:(id)arg1 context:(id)arg2;
- (void)retireTiles:(id)arg1;
- (void)_ensureEvaluationTimer;
- (BOOL)evaluateSelectedTileForRendering:(id)arg1;
- (id)tileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)releaseChildrenFallbackTilesForTile:(id)arg1 context:(id)arg2;
- (BOOL)releaseParentFallbackTileForTile:(id)arg1;
- (void)releaseFallbackTileForRendering:(id)arg1;
- (void)_fetchAvailableTiles:(BOOL)arg1;
- (void)invalidateTilesFromTileSource:(id)arg1;
- (void)tileSourcesDidChange;
- (void)configureTileSelection;
- (void)releaseTileForRendering:(id)arg1;
- (BOOL)hasRequiredTileData:(id)arg1;
- (void)prepareTileForRendering:(id)arg1;
- (void)foreachOptionalLayer:(id)arg1;
- (BOOL)canRenderTile:(id)arg1;
- (void)tileSource:(id)arg1 invalidateTilesWithState:(unsigned int)arg2;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)willStartLoadingTiles;
- (void)setDebugLayer:(id)arg1;
- (id)sourceForLayer:(id)arg1;
- (id)debugLayerKeys;
- (id)keysInView;
- (void)quiesce;
- (float)loadingProgress;
- (void)foreachActiveLayer:(id)arg1;
- (id)tilesToRender;
- (void)requireRasterization:(id)arg1;
- (void)setUseSmallTileCache:(BOOL)arg1;
- (void)setFallbackEnabled:(BOOL)arg1;
- (void)updateWithContext:(id)arg1;
- (void)removeTileSourceForMapLayer:(unsigned int)arg1;
- (void)setTileSource:(id)arg1 forMapLayer:(unsigned int)arg2 optional:(BOOL)arg3;
- (void)flushCaches;
- (id)detailedDescription;
- (void)clearScene;
- (id)visibleTileSets;

@end
