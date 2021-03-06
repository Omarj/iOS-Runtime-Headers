/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPTrafficStyle, NSString;

@interface VKPStyleProperties : PBCodable  {
    struct { 
        float *list; 
        unsigned int count; 
        unsigned int size; 
    } _dropShadowOffsets;
    struct { 
        float *list; 
        unsigned int count; 
        unsigned int size; 
    } _fillDashPatterns;
    struct { 
        float *list; 
        unsigned int count; 
        unsigned int size; 
    } _genericShieldDropShadowOffsets;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _labelIconGradients;
    struct { 
        float *list; 
        unsigned int count; 
        unsigned int size; 
    } _strokeDashPatterns;
    float _arrowHeight;
    float _arrowHeightLarge;
    float _arrowHeightMedium;
    float _arrowHeightSmall;
    float _arrowSpacing;
    unsigned int _buildingFacadeColor;
    unsigned int _buildingFlatColor;
    unsigned int _buildingLandmarkColor;
    unsigned int _buildingOutlineColor;
    int _buildingRoofStyle;
    unsigned int _buildingTopColor;
    unsigned int _casingsColor;
    float _casingsHeight;
    float _casingsShadowRamp;
    float _casingsShadowWidth;
    float _casingsStrokeColor;
    float _casingsStrokeWidth;
    float _casingsWidth;
    unsigned int _dropShadowColor;
    unsigned int _fancyCasingsColor;
    unsigned int _fancyCasingsStrokeColor;
    float _fancyCasingsStrokeWidth;
    float _fancyCasingsWidth;
    unsigned int _fillColor;
    NSString *_fillTexture;
    int _fillTextureBlendMode;
    float _fillTextureOpacity;
    unsigned int _fillZIndex;
    unsigned int _genericShieldBackgroundColor;
    unsigned int _genericShieldBorderColor;
    unsigned int _genericShieldDropShadowColor;
    float _genericShieldDropShadowSize;
    unsigned int _genericShieldHaloColor;
    float _genericShieldHaloSize;
    int _genericShieldStyle;
    unsigned int _genericShieldTextColor;
    float _insetShadowAngle;
    unsigned int _insetShadowColor;
    float _insetShadowHeight;
    unsigned int _labelColor;
    unsigned int _labelDedupeRank;
    float _labelFontExpansion;
    float _labelFontExpansionLarge;
    float _labelFontExpansionMedium;
    float _labelFontExpansionSmall;
    NSString *_labelFontFamily;
    unsigned int _labelHaloColor;
    float _labelHaloSize;
    float _labelHaloSizeLarge;
    float _labelHaloSizeMedium;
    float _labelHaloSizeSmall;
    float _labelHeight;
    int _labelHeightCurve;
    float _labelHeightCurveLimit;
    float _labelHeightLarge;
    int _labelHeightLargeCurve;
    float _labelHeightLargeCurveLimit;
    float _labelHeightMedium;
    int _labelHeightMediumCurve;
    float _labelHeightMediumCurveLimit;
    float _labelHeightSmall;
    int _labelHeightSmallCurve;
    float _labelHeightSmallCurveLimit;
    NSString *_labelIcon;
    unsigned int _labelIconBadgeColor;
    unsigned int _labelIconGlyphColor;
    unsigned int _labelIconHaloColor;
    int _labelIconStyle;
    unsigned int _labelLineWrap;
    float _labelRoadRank;
    NSString *_labelShield;
    float _labelShieldRank;
    float _labelSpacing;
    float _labelSpacingLarge;
    float _labelSpacingMedium;
    float _labelSpacingSmall;
    int _labelTextVisibility;
    float _labelTiltLimit;
    float _layerShadowsRamp;
    float _layerShadowsTaper;
    float _layerShadowsWidth;
    int _lineDrawStyle;
    unsigned int _outerStrokeColor;
    float _outerStrokeWidth;
    int _polygonType;
    NSString *_secondFillTexture;
    int _secondFillTextureBlendMode;
    float _secondFillTextureOpacity;
    float _shieldTiltLimit;
    unsigned int _strokeColor;
    float _strokeWidth;
    int _strokeWidthCurve;
    float _strokeWidthCurveLimit;
    NSString *_thirdFillTexture;
    int _thirdFillTextureBlendMode;
    float _thirdFillTextureOpacity;
    VKPTrafficStyle *_trafficClosed;
    VKPTrafficStyle *_trafficFast;
    VKPTrafficStyle *_trafficMedium;
    VKPTrafficStyle *_trafficSlow;
    float _width;
    int _widthCurve;
    float _widthCurveLimit;
    float _widthDropoff;
    unsigned int _zIndex;
    BOOL _arrowVisible;
    BOOL _buildingOutlineVisible;
    BOOL _casingsVisible;
    BOOL _fancyCasingsVisible;
    BOOL _fillColorInterpolate;
    BOOL _labelRaisedInitial;
    BOOL _labelSmallCaps;
    BOOL _labelUpcase;
    BOOL _layerShadowsVisible;
    BOOL _onlyShowIfTappable;
    BOOL _shieldVisible;
    BOOL _simpleLine;
    BOOL _strokeColorInterpolate;
    BOOL _trafficVisible;
    BOOL _visible;
    BOOL _yieldsToOnscreenLabels;
    struct { 
        unsigned int arrowHeight : 1; 
        unsigned int arrowHeightLarge : 1; 
        unsigned int arrowHeightMedium : 1; 
        unsigned int arrowHeightSmall : 1; 
        unsigned int arrowSpacing : 1; 
        unsigned int buildingFacadeColor : 1; 
        unsigned int buildingFlatColor : 1; 
        unsigned int buildingLandmarkColor : 1; 
        unsigned int buildingOutlineColor : 1; 
        unsigned int buildingRoofStyle : 1; 
        unsigned int buildingTopColor : 1; 
        unsigned int casingsColor : 1; 
        unsigned int casingsHeight : 1; 
        unsigned int casingsShadowRamp : 1; 
        unsigned int casingsShadowWidth : 1; 
        unsigned int casingsStrokeColor : 1; 
        unsigned int casingsStrokeWidth : 1; 
        unsigned int casingsWidth : 1; 
        unsigned int dropShadowColor : 1; 
        unsigned int fancyCasingsColor : 1; 
        unsigned int fancyCasingsStrokeColor : 1; 
        unsigned int fancyCasingsStrokeWidth : 1; 
        unsigned int fancyCasingsWidth : 1; 
        unsigned int fillColor : 1; 
        unsigned int fillTextureBlendMode : 1; 
        unsigned int fillTextureOpacity : 1; 
        unsigned int fillZIndex : 1; 
        unsigned int genericShieldBackgroundColor : 1; 
        unsigned int genericShieldBorderColor : 1; 
        unsigned int genericShieldDropShadowColor : 1; 
        unsigned int genericShieldDropShadowSize : 1; 
        unsigned int genericShieldHaloColor : 1; 
        unsigned int genericShieldHaloSize : 1; 
        unsigned int genericShieldStyle : 1; 
        unsigned int genericShieldTextColor : 1; 
        unsigned int insetShadowAngle : 1; 
        unsigned int insetShadowColor : 1; 
        unsigned int insetShadowHeight : 1; 
        unsigned int labelColor : 1; 
        unsigned int labelDedupeRank : 1; 
        unsigned int labelFontExpansion : 1; 
        unsigned int labelFontExpansionLarge : 1; 
        unsigned int labelFontExpansionMedium : 1; 
        unsigned int labelFontExpansionSmall : 1; 
        unsigned int labelHaloColor : 1; 
        unsigned int labelHaloSize : 1; 
        unsigned int labelHaloSizeLarge : 1; 
        unsigned int labelHaloSizeMedium : 1; 
        unsigned int labelHaloSizeSmall : 1; 
        unsigned int labelHeight : 1; 
        unsigned int labelHeightCurve : 1; 
        unsigned int labelHeightCurveLimit : 1; 
        unsigned int labelHeightLarge : 1; 
        unsigned int labelHeightLargeCurve : 1; 
        unsigned int labelHeightLargeCurveLimit : 1; 
        unsigned int labelHeightMedium : 1; 
        unsigned int labelHeightMediumCurve : 1; 
        unsigned int labelHeightMediumCurveLimit : 1; 
        unsigned int labelHeightSmall : 1; 
        unsigned int labelHeightSmallCurve : 1; 
        unsigned int labelHeightSmallCurveLimit : 1; 
        unsigned int labelIconBadgeColor : 1; 
        unsigned int labelIconGlyphColor : 1; 
        unsigned int labelIconHaloColor : 1; 
        unsigned int labelIconStyle : 1; 
        unsigned int labelLineWrap : 1; 
        unsigned int labelRoadRank : 1; 
        unsigned int labelShieldRank : 1; 
        unsigned int labelSpacing : 1; 
        unsigned int labelSpacingLarge : 1; 
        unsigned int labelSpacingMedium : 1; 
        unsigned int labelSpacingSmall : 1; 
        unsigned int labelTextVisibility : 1; 
        unsigned int labelTiltLimit : 1; 
        unsigned int layerShadowsRamp : 1; 
        unsigned int layerShadowsTaper : 1; 
        unsigned int layerShadowsWidth : 1; 
        unsigned int lineDrawStyle : 1; 
        unsigned int outerStrokeColor : 1; 
        unsigned int outerStrokeWidth : 1; 
        unsigned int polygonType : 1; 
        unsigned int secondFillTextureBlendMode : 1; 
        unsigned int secondFillTextureOpacity : 1; 
        unsigned int shieldTiltLimit : 1; 
        unsigned int strokeColor : 1; 
        unsigned int strokeWidth : 1; 
        unsigned int strokeWidthCurve : 1; 
        unsigned int strokeWidthCurveLimit : 1; 
        unsigned int thirdFillTextureBlendMode : 1; 
        unsigned int thirdFillTextureOpacity : 1; 
        unsigned int width : 1; 
        unsigned int widthCurve : 1; 
        unsigned int widthCurveLimit : 1; 
        unsigned int widthDropoff : 1; 
        unsigned int zIndex : 1; 
        unsigned int arrowVisible : 1; 
        unsigned int buildingOutlineVisible : 1; 
        unsigned int casingsVisible : 1; 
        unsigned int fancyCasingsVisible : 1; 
        unsigned int fillColorInterpolate : 1; 
        unsigned int labelRaisedInitial : 1; 
        unsigned int labelSmallCaps : 1; 
        unsigned int labelUpcase : 1; 
        unsigned int layerShadowsVisible : 1; 
        unsigned int onlyShowIfTappable : 1; 
        unsigned int shieldVisible : 1; 
        unsigned int simpleLine : 1; 
        unsigned int strokeColorInterpolate : 1; 
        unsigned int trafficVisible : 1; 
        unsigned int visible : 1; 
        unsigned int yieldsToOnscreenLabels : 1; 
    } _has;
}

@property BOOL hasVisible;
@property BOOL visible;
@property BOOL hasFillColor;
@property unsigned int fillColor;
@property BOOL hasStrokeColor;
@property unsigned int strokeColor;
@property BOOL hasWidth;
@property float width;
@property BOOL hasWidthCurve;
@property int widthCurve;
@property BOOL hasWidthCurveLimit;
@property float widthCurveLimit;
@property BOOL hasStrokeWidth;
@property float strokeWidth;
@property BOOL hasStrokeWidthCurve;
@property int strokeWidthCurve;
@property BOOL hasStrokeWidthCurveLimit;
@property float strokeWidthCurveLimit;
@property BOOL hasLabelHeight;
@property float labelHeight;
@property BOOL hasLabelHeightCurve;
@property int labelHeightCurve;
@property BOOL hasLabelHeightCurveLimit;
@property float labelHeightCurveLimit;
@property BOOL hasWidthDropoff;
@property float widthDropoff;
@property BOOL hasZIndex;
@property unsigned int zIndex;
@property BOOL hasSimpleLine;
@property BOOL simpleLine;
@property BOOL hasFillZIndex;
@property unsigned int fillZIndex;
@property BOOL hasStrokeColorInterpolate;
@property BOOL strokeColorInterpolate;
@property BOOL hasFillColorInterpolate;
@property BOOL fillColorInterpolate;
@property BOOL hasLabelHaloSize;
@property float labelHaloSize;
@property BOOL hasLabelRaisedInitial;
@property BOOL labelRaisedInitial;
@property BOOL hasLabelUpcase;
@property BOOL labelUpcase;
@property BOOL hasLabelLineWrap;
@property unsigned int labelLineWrap;
@property(readonly) BOOL hasLabelIcon;
@property(retain) NSString * labelIcon;
@property(readonly) BOOL hasLabelFontFamily;
@property(retain) NSString * labelFontFamily;
@property BOOL hasLabelColor;
@property unsigned int labelColor;
@property BOOL hasLabelHaloColor;
@property unsigned int labelHaloColor;
@property(readonly) BOOL hasLabelShield;
@property(retain) NSString * labelShield;
@property BOOL hasLabelSmallCaps;
@property BOOL labelSmallCaps;
@property BOOL hasLabelTiltLimit;
@property float labelTiltLimit;
@property BOOL hasLabelFontExpansion;
@property float labelFontExpansion;
@property BOOL hasLabelRoadRank;
@property float labelRoadRank;
@property BOOL hasLabelShieldRank;
@property float labelShieldRank;
@property BOOL hasLabelSpacing;
@property float labelSpacing;
@property BOOL hasLabelTextVisibility;
@property int labelTextVisibility;
@property BOOL hasOnlyShowIfTappable;
@property BOOL onlyShowIfTappable;
@property BOOL hasLabelDedupeRank;
@property unsigned int labelDedupeRank;
@property BOOL hasYieldsToOnscreenLabels;
@property BOOL yieldsToOnscreenLabels;
@property BOOL hasShieldVisible;
@property BOOL shieldVisible;
@property BOOL hasShieldTiltLimit;
@property float shieldTiltLimit;
@property BOOL hasArrowVisible;
@property BOOL arrowVisible;
@property BOOL hasArrowHeight;
@property float arrowHeight;
@property BOOL hasArrowSpacing;
@property float arrowSpacing;
@property(readonly) BOOL hasFillTexture;
@property(retain) NSString * fillTexture;
@property BOOL hasPolygonType;
@property int polygonType;
@property BOOL hasInsetShadowHeight;
@property float insetShadowHeight;
@property BOOL hasInsetShadowAngle;
@property float insetShadowAngle;
@property BOOL hasInsetShadowColor;
@property unsigned int insetShadowColor;
@property(readonly) unsigned int dropShadowOffsetsCount;
@property(readonly) float* dropShadowOffsets;
@property BOOL hasDropShadowColor;
@property unsigned int dropShadowColor;
@property(readonly) unsigned int fillDashPatternsCount;
@property(readonly) float* fillDashPatterns;
@property(readonly) unsigned int strokeDashPatternsCount;
@property(readonly) float* strokeDashPatterns;
@property BOOL hasBuildingTopColor;
@property unsigned int buildingTopColor;
@property BOOL hasBuildingFacadeColor;
@property unsigned int buildingFacadeColor;
@property BOOL hasBuildingOutlineColor;
@property unsigned int buildingOutlineColor;
@property BOOL hasBuildingOutlineVisible;
@property BOOL buildingOutlineVisible;
@property BOOL hasBuildingRoofStyle;
@property int buildingRoofStyle;
@property BOOL hasBuildingLandmarkColor;
@property unsigned int buildingLandmarkColor;
@property BOOL hasBuildingFlatColor;
@property unsigned int buildingFlatColor;
@property BOOL hasTrafficVisible;
@property BOOL trafficVisible;
@property(readonly) BOOL hasTrafficClosed;
@property(retain) VKPTrafficStyle * trafficClosed;
@property(readonly) BOOL hasTrafficSlow;
@property(retain) VKPTrafficStyle * trafficSlow;
@property(readonly) BOOL hasTrafficMedium;
@property(retain) VKPTrafficStyle * trafficMedium;
@property(readonly) BOOL hasTrafficFast;
@property(retain) VKPTrafficStyle * trafficFast;
@property BOOL hasLineDrawStyle;
@property int lineDrawStyle;
@property BOOL hasLabelIconStyle;
@property int labelIconStyle;
@property BOOL hasLabelIconBadgeColor;
@property unsigned int labelIconBadgeColor;
@property(readonly) unsigned int labelIconGradientsCount;
@property(readonly) unsigned int* labelIconGradients;
@property BOOL hasLabelIconGlyphColor;
@property unsigned int labelIconGlyphColor;
@property BOOL hasLabelIconHaloColor;
@property unsigned int labelIconHaloColor;
@property BOOL hasOuterStrokeColor;
@property unsigned int outerStrokeColor;
@property BOOL hasOuterStrokeWidth;
@property float outerStrokeWidth;
@property BOOL hasFillTextureOpacity;
@property float fillTextureOpacity;
@property BOOL hasFillTextureBlendMode;
@property int fillTextureBlendMode;
@property(readonly) BOOL hasSecondFillTexture;
@property(retain) NSString * secondFillTexture;
@property BOOL hasSecondFillTextureOpacity;
@property float secondFillTextureOpacity;
@property BOOL hasSecondFillTextureBlendMode;
@property int secondFillTextureBlendMode;
@property(readonly) BOOL hasThirdFillTexture;
@property(retain) NSString * thirdFillTexture;
@property BOOL hasThirdFillTextureOpacity;
@property float thirdFillTextureOpacity;
@property BOOL hasThirdFillTextureBlendMode;
@property int thirdFillTextureBlendMode;
@property BOOL hasCasingsVisible;
@property BOOL casingsVisible;
@property BOOL hasCasingsColor;
@property unsigned int casingsColor;
@property BOOL hasCasingsWidth;
@property float casingsWidth;
@property BOOL hasCasingsHeight;
@property float casingsHeight;
@property BOOL hasCasingsStrokeColor;
@property float casingsStrokeColor;
@property BOOL hasCasingsStrokeWidth;
@property float casingsStrokeWidth;
@property BOOL hasCasingsShadowRamp;
@property float casingsShadowRamp;
@property BOOL hasCasingsShadowWidth;
@property float casingsShadowWidth;
@property BOOL hasFancyCasingsVisible;
@property BOOL fancyCasingsVisible;
@property BOOL hasFancyCasingsColor;
@property unsigned int fancyCasingsColor;
@property BOOL hasFancyCasingsWidth;
@property float fancyCasingsWidth;
@property BOOL hasFancyCasingsStrokeColor;
@property unsigned int fancyCasingsStrokeColor;
@property BOOL hasFancyCasingsStrokeWidth;
@property float fancyCasingsStrokeWidth;
@property BOOL hasLayerShadowsVisible;
@property BOOL layerShadowsVisible;
@property BOOL hasLayerShadowsWidth;
@property float layerShadowsWidth;
@property BOOL hasLayerShadowsRamp;
@property float layerShadowsRamp;
@property BOOL hasLayerShadowsTaper;
@property float layerShadowsTaper;
@property BOOL hasGenericShieldStyle;
@property int genericShieldStyle;
@property BOOL hasGenericShieldBackgroundColor;
@property unsigned int genericShieldBackgroundColor;
@property BOOL hasGenericShieldBorderColor;
@property unsigned int genericShieldBorderColor;
@property BOOL hasGenericShieldTextColor;
@property unsigned int genericShieldTextColor;
@property BOOL hasGenericShieldHaloSize;
@property float genericShieldHaloSize;
@property BOOL hasGenericShieldHaloColor;
@property unsigned int genericShieldHaloColor;
@property(readonly) unsigned int genericShieldDropShadowOffsetsCount;
@property(readonly) float* genericShieldDropShadowOffsets;
@property BOOL hasGenericShieldDropShadowSize;
@property float genericShieldDropShadowSize;
@property BOOL hasGenericShieldDropShadowColor;
@property unsigned int genericShieldDropShadowColor;
@property BOOL hasLabelHeightSmall;
@property float labelHeightSmall;
@property BOOL hasLabelHeightSmallCurve;
@property int labelHeightSmallCurve;
@property BOOL hasLabelHeightSmallCurveLimit;
@property float labelHeightSmallCurveLimit;
@property BOOL hasLabelHeightMedium;
@property float labelHeightMedium;
@property BOOL hasLabelHeightMediumCurve;
@property int labelHeightMediumCurve;
@property BOOL hasLabelHeightMediumCurveLimit;
@property float labelHeightMediumCurveLimit;
@property BOOL hasLabelHeightLarge;
@property float labelHeightLarge;
@property BOOL hasLabelHeightLargeCurve;
@property int labelHeightLargeCurve;
@property BOOL hasLabelHeightLargeCurveLimit;
@property float labelHeightLargeCurveLimit;
@property BOOL hasLabelHaloSizeSmall;
@property float labelHaloSizeSmall;
@property BOOL hasLabelHaloSizeMedium;
@property float labelHaloSizeMedium;
@property BOOL hasLabelHaloSizeLarge;
@property float labelHaloSizeLarge;
@property BOOL hasLabelFontExpansionSmall;
@property float labelFontExpansionSmall;
@property BOOL hasLabelFontExpansionMedium;
@property float labelFontExpansionMedium;
@property BOOL hasLabelFontExpansionLarge;
@property float labelFontExpansionLarge;
@property BOOL hasLabelSpacingSmall;
@property float labelSpacingSmall;
@property BOOL hasLabelSpacingMedium;
@property float labelSpacingMedium;
@property BOOL hasLabelSpacingLarge;
@property float labelSpacingLarge;
@property BOOL hasArrowHeightSmall;
@property float arrowHeightSmall;
@property BOOL hasArrowHeightMedium;
@property float arrowHeightMedium;
@property BOOL hasArrowHeightLarge;
@property float arrowHeightLarge;


- (unsigned int)labelColor;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)setZIndex:(unsigned int)arg1;
- (unsigned int)zIndex;
- (void)setArrowVisible:(BOOL)arg1;
- (float)arrowHeight;
- (void)setArrowHeight:(float)arg1;
- (void)setFillColor:(unsigned int)arg1;
- (unsigned int)fillColor;
- (id)dictionaryRepresentation;
- (BOOL)visible;
- (void)setVisible:(BOOL)arg1;
- (void)setWidth:(float)arg1;
- (float)width;
- (void)setHasArrowHeightLarge:(BOOL)arg1;
- (void)setHasArrowHeightMedium:(BOOL)arg1;
- (void)setHasArrowHeightSmall:(BOOL)arg1;
- (void)setHasLabelSpacingLarge:(BOOL)arg1;
- (void)setHasLabelSpacingMedium:(BOOL)arg1;
- (void)setHasLabelSpacingSmall:(BOOL)arg1;
- (void)setHasLabelFontExpansionLarge:(BOOL)arg1;
- (void)setHasLabelFontExpansionMedium:(BOOL)arg1;
- (void)setHasLabelFontExpansionSmall:(BOOL)arg1;
- (void)setHasLabelHaloSizeLarge:(BOOL)arg1;
- (void)setHasLabelHaloSizeMedium:(BOOL)arg1;
- (void)setHasLabelHaloSizeSmall:(BOOL)arg1;
- (void)setHasLabelHeightLargeCurveLimit:(BOOL)arg1;
- (void)setHasLabelHeightLargeCurve:(BOOL)arg1;
- (void)setHasLabelHeightLarge:(BOOL)arg1;
- (void)setHasLabelHeightMediumCurveLimit:(BOOL)arg1;
- (void)setHasLabelHeightMediumCurve:(BOOL)arg1;
- (void)setHasLabelHeightMedium:(BOOL)arg1;
- (void)setHasLabelHeightSmallCurveLimit:(BOOL)arg1;
- (void)setHasLabelHeightSmallCurve:(BOOL)arg1;
- (void)setHasLabelHeightSmall:(BOOL)arg1;
- (void)setHasGenericShieldDropShadowColor:(BOOL)arg1;
- (void)setHasGenericShieldDropShadowSize:(BOOL)arg1;
- (void)setGenericShieldDropShadowOffsets:(float*)arg1 count:(unsigned int)arg2;
- (float*)genericShieldDropShadowOffsets;
- (void)setHasGenericShieldHaloColor:(BOOL)arg1;
- (void)setHasGenericShieldHaloSize:(BOOL)arg1;
- (void)setHasGenericShieldTextColor:(BOOL)arg1;
- (void)setHasGenericShieldBorderColor:(BOOL)arg1;
- (void)setHasGenericShieldBackgroundColor:(BOOL)arg1;
- (void)setHasGenericShieldStyle:(BOOL)arg1;
- (void)setHasLayerShadowsTaper:(BOOL)arg1;
- (void)setHasLayerShadowsRamp:(BOOL)arg1;
- (void)setHasLayerShadowsWidth:(BOOL)arg1;
- (void)setHasLayerShadowsVisible:(BOOL)arg1;
- (void)setHasFancyCasingsStrokeWidth:(BOOL)arg1;
- (void)setHasFancyCasingsStrokeColor:(BOOL)arg1;
- (void)setHasFancyCasingsWidth:(BOOL)arg1;
- (void)setHasFancyCasingsColor:(BOOL)arg1;
- (void)setHasFancyCasingsVisible:(BOOL)arg1;
- (void)setHasCasingsShadowWidth:(BOOL)arg1;
- (void)setHasCasingsShadowRamp:(BOOL)arg1;
- (void)setHasCasingsStrokeWidth:(BOOL)arg1;
- (void)setHasCasingsStrokeColor:(BOOL)arg1;
- (void)setHasCasingsHeight:(BOOL)arg1;
- (void)setHasCasingsWidth:(BOOL)arg1;
- (void)setHasCasingsColor:(BOOL)arg1;
- (void)setHasCasingsVisible:(BOOL)arg1;
- (void)setHasThirdFillTextureBlendMode:(BOOL)arg1;
- (void)setHasThirdFillTextureOpacity:(BOOL)arg1;
- (void)setHasSecondFillTextureBlendMode:(BOOL)arg1;
- (void)setHasSecondFillTextureOpacity:(BOOL)arg1;
- (void)setHasFillTextureBlendMode:(BOOL)arg1;
- (void)setHasFillTextureOpacity:(BOOL)arg1;
- (void)setHasOuterStrokeWidth:(BOOL)arg1;
- (void)setHasOuterStrokeColor:(BOOL)arg1;
- (void)setHasLabelIconHaloColor:(BOOL)arg1;
- (void)setHasLabelIconGlyphColor:(BOOL)arg1;
- (void)setLabelIconGradients:(unsigned int*)arg1 count:(unsigned int)arg2;
- (unsigned int*)labelIconGradients;
- (void)setHasLabelIconBadgeColor:(BOOL)arg1;
- (void)setHasLabelIconStyle:(BOOL)arg1;
- (void)setHasLineDrawStyle:(BOOL)arg1;
- (void)setHasTrafficVisible:(BOOL)arg1;
- (void)setHasBuildingFlatColor:(BOOL)arg1;
- (void)setHasBuildingLandmarkColor:(BOOL)arg1;
- (void)setHasBuildingRoofStyle:(BOOL)arg1;
- (void)setHasBuildingOutlineVisible:(BOOL)arg1;
- (void)setHasBuildingOutlineColor:(BOOL)arg1;
- (void)setHasBuildingFacadeColor:(BOOL)arg1;
- (void)setHasBuildingTopColor:(BOOL)arg1;
- (void)setStrokeDashPatterns:(float*)arg1 count:(unsigned int)arg2;
- (float*)strokeDashPatterns;
- (void)setFillDashPatterns:(float*)arg1 count:(unsigned int)arg2;
- (float*)fillDashPatterns;
- (void)setHasDropShadowColor:(BOOL)arg1;
- (void)setDropShadowOffsets:(float*)arg1 count:(unsigned int)arg2;
- (float*)dropShadowOffsets;
- (void)setHasInsetShadowColor:(BOOL)arg1;
- (void)setHasInsetShadowAngle:(BOOL)arg1;
- (void)setHasInsetShadowHeight:(BOOL)arg1;
- (void)setHasPolygonType:(BOOL)arg1;
- (void)setHasArrowSpacing:(BOOL)arg1;
- (void)setHasArrowHeight:(BOOL)arg1;
- (void)setHasArrowVisible:(BOOL)arg1;
- (void)setHasShieldTiltLimit:(BOOL)arg1;
- (void)setHasShieldVisible:(BOOL)arg1;
- (void)setHasYieldsToOnscreenLabels:(BOOL)arg1;
- (void)setHasLabelDedupeRank:(BOOL)arg1;
- (void)setHasOnlyShowIfTappable:(BOOL)arg1;
- (void)setHasLabelTextVisibility:(BOOL)arg1;
- (void)setHasLabelSpacing:(BOOL)arg1;
- (void)setHasLabelShieldRank:(BOOL)arg1;
- (void)setHasLabelRoadRank:(BOOL)arg1;
- (void)setHasLabelFontExpansion:(BOOL)arg1;
- (void)setHasLabelTiltLimit:(BOOL)arg1;
- (void)setHasLabelSmallCaps:(BOOL)arg1;
- (void)setHasLabelHaloColor:(BOOL)arg1;
- (void)setHasLabelColor:(BOOL)arg1;
- (void)setHasLabelLineWrap:(BOOL)arg1;
- (void)setHasLabelUpcase:(BOOL)arg1;
- (void)setHasLabelRaisedInitial:(BOOL)arg1;
- (void)setHasLabelHaloSize:(BOOL)arg1;
- (void)setHasFillColorInterpolate:(BOOL)arg1;
- (void)setHasStrokeColorInterpolate:(BOOL)arg1;
- (void)setHasFillZIndex:(BOOL)arg1;
- (void)setHasSimpleLine:(BOOL)arg1;
- (void)setHasZIndex:(BOOL)arg1;
- (void)setHasWidthDropoff:(BOOL)arg1;
- (void)setHasLabelHeightCurveLimit:(BOOL)arg1;
- (void)setHasLabelHeightCurve:(BOOL)arg1;
- (void)setHasLabelHeight:(BOOL)arg1;
- (void)setHasStrokeWidthCurveLimit:(BOOL)arg1;
- (void)setHasStrokeWidthCurve:(BOOL)arg1;
- (void)setHasStrokeWidth:(BOOL)arg1;
- (void)setHasWidthCurveLimit:(BOOL)arg1;
- (void)setHasWidthCurve:(BOOL)arg1;
- (void)setHasWidth:(BOOL)arg1;
- (void)setHasStrokeColor:(BOOL)arg1;
- (void)setHasFillColor:(BOOL)arg1;
- (void)setHasVisible:(BOOL)arg1;
- (void)setArrowHeightLarge:(float)arg1;
- (float)arrowHeightLarge;
- (BOOL)hasArrowHeightLarge;
- (void)setArrowHeightMedium:(float)arg1;
- (float)arrowHeightMedium;
- (BOOL)hasArrowHeightMedium;
- (void)setArrowHeightSmall:(float)arg1;
- (float)arrowHeightSmall;
- (BOOL)hasArrowHeightSmall;
- (void)setLabelSpacingLarge:(float)arg1;
- (float)labelSpacingLarge;
- (BOOL)hasLabelSpacingLarge;
- (void)setLabelSpacingMedium:(float)arg1;
- (float)labelSpacingMedium;
- (BOOL)hasLabelSpacingMedium;
- (void)setLabelSpacingSmall:(float)arg1;
- (float)labelSpacingSmall;
- (BOOL)hasLabelSpacingSmall;
- (void)setLabelFontExpansionLarge:(float)arg1;
- (float)labelFontExpansionLarge;
- (BOOL)hasLabelFontExpansionLarge;
- (void)setLabelFontExpansionMedium:(float)arg1;
- (float)labelFontExpansionMedium;
- (BOOL)hasLabelFontExpansionMedium;
- (void)setLabelFontExpansionSmall:(float)arg1;
- (float)labelFontExpansionSmall;
- (BOOL)hasLabelFontExpansionSmall;
- (void)setLabelHaloSizeLarge:(float)arg1;
- (float)labelHaloSizeLarge;
- (BOOL)hasLabelHaloSizeLarge;
- (void)setLabelHaloSizeMedium:(float)arg1;
- (float)labelHaloSizeMedium;
- (BOOL)hasLabelHaloSizeMedium;
- (void)setLabelHaloSizeSmall:(float)arg1;
- (float)labelHaloSizeSmall;
- (BOOL)hasLabelHaloSizeSmall;
- (void)setLabelHeightLargeCurveLimit:(float)arg1;
- (float)labelHeightLargeCurveLimit;
- (BOOL)hasLabelHeightLargeCurveLimit;
- (void)setLabelHeightLargeCurve:(int)arg1;
- (int)labelHeightLargeCurve;
- (BOOL)hasLabelHeightLargeCurve;
- (void)setLabelHeightLarge:(float)arg1;
- (float)labelHeightLarge;
- (BOOL)hasLabelHeightLarge;
- (void)setLabelHeightMediumCurveLimit:(float)arg1;
- (float)labelHeightMediumCurveLimit;
- (BOOL)hasLabelHeightMediumCurveLimit;
- (void)setLabelHeightMediumCurve:(int)arg1;
- (int)labelHeightMediumCurve;
- (BOOL)hasLabelHeightMediumCurve;
- (void)setLabelHeightMedium:(float)arg1;
- (float)labelHeightMedium;
- (BOOL)hasLabelHeightMedium;
- (void)setLabelHeightSmallCurveLimit:(float)arg1;
- (float)labelHeightSmallCurveLimit;
- (BOOL)hasLabelHeightSmallCurveLimit;
- (void)setLabelHeightSmallCurve:(int)arg1;
- (int)labelHeightSmallCurve;
- (BOOL)hasLabelHeightSmallCurve;
- (void)setLabelHeightSmall:(float)arg1;
- (float)labelHeightSmall;
- (BOOL)hasLabelHeightSmall;
- (void)setGenericShieldDropShadowColor:(unsigned int)arg1;
- (unsigned int)genericShieldDropShadowColor;
- (BOOL)hasGenericShieldDropShadowColor;
- (void)setGenericShieldDropShadowSize:(float)arg1;
- (float)genericShieldDropShadowSize;
- (BOOL)hasGenericShieldDropShadowSize;
- (void)addGenericShieldDropShadowOffset:(float)arg1;
- (float)genericShieldDropShadowOffsetAtIndex:(unsigned int)arg1;
- (void)clearGenericShieldDropShadowOffsets;
- (unsigned int)genericShieldDropShadowOffsetsCount;
- (void)setGenericShieldHaloColor:(unsigned int)arg1;
- (unsigned int)genericShieldHaloColor;
- (BOOL)hasGenericShieldHaloColor;
- (void)setGenericShieldHaloSize:(float)arg1;
- (float)genericShieldHaloSize;
- (BOOL)hasGenericShieldHaloSize;
- (void)setGenericShieldTextColor:(unsigned int)arg1;
- (unsigned int)genericShieldTextColor;
- (BOOL)hasGenericShieldTextColor;
- (void)setGenericShieldBorderColor:(unsigned int)arg1;
- (unsigned int)genericShieldBorderColor;
- (BOOL)hasGenericShieldBorderColor;
- (void)setGenericShieldBackgroundColor:(unsigned int)arg1;
- (unsigned int)genericShieldBackgroundColor;
- (BOOL)hasGenericShieldBackgroundColor;
- (void)setGenericShieldStyle:(int)arg1;
- (int)genericShieldStyle;
- (BOOL)hasGenericShieldStyle;
- (void)setLayerShadowsTaper:(float)arg1;
- (float)layerShadowsTaper;
- (BOOL)hasLayerShadowsTaper;
- (void)setLayerShadowsRamp:(float)arg1;
- (float)layerShadowsRamp;
- (BOOL)hasLayerShadowsRamp;
- (void)setLayerShadowsWidth:(float)arg1;
- (float)layerShadowsWidth;
- (BOOL)hasLayerShadowsWidth;
- (void)setLayerShadowsVisible:(BOOL)arg1;
- (BOOL)layerShadowsVisible;
- (BOOL)hasLayerShadowsVisible;
- (void)setFancyCasingsStrokeWidth:(float)arg1;
- (float)fancyCasingsStrokeWidth;
- (BOOL)hasFancyCasingsStrokeWidth;
- (void)setFancyCasingsStrokeColor:(unsigned int)arg1;
- (unsigned int)fancyCasingsStrokeColor;
- (BOOL)hasFancyCasingsStrokeColor;
- (void)setFancyCasingsWidth:(float)arg1;
- (float)fancyCasingsWidth;
- (BOOL)hasFancyCasingsWidth;
- (void)setFancyCasingsColor:(unsigned int)arg1;
- (unsigned int)fancyCasingsColor;
- (BOOL)hasFancyCasingsColor;
- (void)setFancyCasingsVisible:(BOOL)arg1;
- (BOOL)fancyCasingsVisible;
- (BOOL)hasFancyCasingsVisible;
- (void)setCasingsShadowWidth:(float)arg1;
- (float)casingsShadowWidth;
- (BOOL)hasCasingsShadowWidth;
- (void)setCasingsShadowRamp:(float)arg1;
- (float)casingsShadowRamp;
- (BOOL)hasCasingsShadowRamp;
- (void)setCasingsStrokeWidth:(float)arg1;
- (float)casingsStrokeWidth;
- (BOOL)hasCasingsStrokeWidth;
- (void)setCasingsStrokeColor:(float)arg1;
- (float)casingsStrokeColor;
- (BOOL)hasCasingsStrokeColor;
- (void)setCasingsHeight:(float)arg1;
- (float)casingsHeight;
- (BOOL)hasCasingsHeight;
- (void)setCasingsWidth:(float)arg1;
- (float)casingsWidth;
- (BOOL)hasCasingsWidth;
- (void)setCasingsColor:(unsigned int)arg1;
- (unsigned int)casingsColor;
- (BOOL)hasCasingsColor;
- (void)setCasingsVisible:(BOOL)arg1;
- (BOOL)casingsVisible;
- (BOOL)hasCasingsVisible;
- (void)setThirdFillTextureBlendMode:(int)arg1;
- (int)thirdFillTextureBlendMode;
- (BOOL)hasThirdFillTextureBlendMode;
- (void)setThirdFillTextureOpacity:(float)arg1;
- (float)thirdFillTextureOpacity;
- (BOOL)hasThirdFillTextureOpacity;
- (id)thirdFillTexture;
- (BOOL)hasThirdFillTexture;
- (void)setSecondFillTextureBlendMode:(int)arg1;
- (int)secondFillTextureBlendMode;
- (BOOL)hasSecondFillTextureBlendMode;
- (void)setSecondFillTextureOpacity:(float)arg1;
- (float)secondFillTextureOpacity;
- (BOOL)hasSecondFillTextureOpacity;
- (id)secondFillTexture;
- (BOOL)hasSecondFillTexture;
- (void)setFillTextureBlendMode:(int)arg1;
- (int)fillTextureBlendMode;
- (BOOL)hasFillTextureBlendMode;
- (void)setFillTextureOpacity:(float)arg1;
- (float)fillTextureOpacity;
- (BOOL)hasFillTextureOpacity;
- (void)setOuterStrokeWidth:(float)arg1;
- (float)outerStrokeWidth;
- (BOOL)hasOuterStrokeWidth;
- (void)setOuterStrokeColor:(unsigned int)arg1;
- (unsigned int)outerStrokeColor;
- (BOOL)hasOuterStrokeColor;
- (void)setLabelIconHaloColor:(unsigned int)arg1;
- (unsigned int)labelIconHaloColor;
- (BOOL)hasLabelIconHaloColor;
- (void)setLabelIconGlyphColor:(unsigned int)arg1;
- (unsigned int)labelIconGlyphColor;
- (BOOL)hasLabelIconGlyphColor;
- (void)addLabelIconGradient:(unsigned int)arg1;
- (unsigned int)labelIconGradientAtIndex:(unsigned int)arg1;
- (void)clearLabelIconGradients;
- (unsigned int)labelIconGradientsCount;
- (void)setLabelIconBadgeColor:(unsigned int)arg1;
- (unsigned int)labelIconBadgeColor;
- (BOOL)hasLabelIconBadgeColor;
- (void)setLabelIconStyle:(int)arg1;
- (int)labelIconStyle;
- (BOOL)hasLabelIconStyle;
- (void)setLineDrawStyle:(int)arg1;
- (int)lineDrawStyle;
- (BOOL)hasLineDrawStyle;
- (id)trafficFast;
- (BOOL)hasTrafficFast;
- (id)trafficMedium;
- (BOOL)hasTrafficMedium;
- (id)trafficSlow;
- (BOOL)hasTrafficSlow;
- (id)trafficClosed;
- (BOOL)hasTrafficClosed;
- (void)setTrafficVisible:(BOOL)arg1;
- (BOOL)trafficVisible;
- (BOOL)hasTrafficVisible;
- (void)setBuildingFlatColor:(unsigned int)arg1;
- (unsigned int)buildingFlatColor;
- (BOOL)hasBuildingFlatColor;
- (void)setBuildingLandmarkColor:(unsigned int)arg1;
- (unsigned int)buildingLandmarkColor;
- (BOOL)hasBuildingLandmarkColor;
- (void)setBuildingRoofStyle:(int)arg1;
- (int)buildingRoofStyle;
- (BOOL)hasBuildingRoofStyle;
- (void)setBuildingOutlineVisible:(BOOL)arg1;
- (BOOL)buildingOutlineVisible;
- (BOOL)hasBuildingOutlineVisible;
- (void)setBuildingOutlineColor:(unsigned int)arg1;
- (unsigned int)buildingOutlineColor;
- (BOOL)hasBuildingOutlineColor;
- (void)setBuildingFacadeColor:(unsigned int)arg1;
- (unsigned int)buildingFacadeColor;
- (BOOL)hasBuildingFacadeColor;
- (void)setBuildingTopColor:(unsigned int)arg1;
- (unsigned int)buildingTopColor;
- (BOOL)hasBuildingTopColor;
- (void)addStrokeDashPattern:(float)arg1;
- (float)strokeDashPatternAtIndex:(unsigned int)arg1;
- (void)clearStrokeDashPatterns;
- (unsigned int)strokeDashPatternsCount;
- (void)addFillDashPattern:(float)arg1;
- (float)fillDashPatternAtIndex:(unsigned int)arg1;
- (void)clearFillDashPatterns;
- (unsigned int)fillDashPatternsCount;
- (void)setDropShadowColor:(unsigned int)arg1;
- (unsigned int)dropShadowColor;
- (BOOL)hasDropShadowColor;
- (void)addDropShadowOffset:(float)arg1;
- (float)dropShadowOffsetAtIndex:(unsigned int)arg1;
- (void)clearDropShadowOffsets;
- (unsigned int)dropShadowOffsetsCount;
- (void)setInsetShadowColor:(unsigned int)arg1;
- (unsigned int)insetShadowColor;
- (BOOL)hasInsetShadowColor;
- (void)setInsetShadowAngle:(float)arg1;
- (float)insetShadowAngle;
- (BOOL)hasInsetShadowAngle;
- (void)setInsetShadowHeight:(float)arg1;
- (float)insetShadowHeight;
- (BOOL)hasInsetShadowHeight;
- (void)setPolygonType:(int)arg1;
- (int)polygonType;
- (BOOL)hasPolygonType;
- (id)fillTexture;
- (BOOL)hasFillTexture;
- (void)setArrowSpacing:(float)arg1;
- (float)arrowSpacing;
- (BOOL)hasArrowSpacing;
- (BOOL)hasArrowHeight;
- (BOOL)arrowVisible;
- (BOOL)hasArrowVisible;
- (void)setShieldTiltLimit:(float)arg1;
- (float)shieldTiltLimit;
- (BOOL)hasShieldTiltLimit;
- (void)setShieldVisible:(BOOL)arg1;
- (BOOL)shieldVisible;
- (BOOL)hasShieldVisible;
- (void)setYieldsToOnscreenLabels:(BOOL)arg1;
- (BOOL)yieldsToOnscreenLabels;
- (BOOL)hasYieldsToOnscreenLabels;
- (void)setLabelDedupeRank:(unsigned int)arg1;
- (unsigned int)labelDedupeRank;
- (BOOL)hasLabelDedupeRank;
- (void)setOnlyShowIfTappable:(BOOL)arg1;
- (BOOL)onlyShowIfTappable;
- (BOOL)hasOnlyShowIfTappable;
- (void)setLabelTextVisibility:(int)arg1;
- (int)labelTextVisibility;
- (BOOL)hasLabelTextVisibility;
- (void)setLabelSpacing:(float)arg1;
- (float)labelSpacing;
- (BOOL)hasLabelSpacing;
- (void)setLabelShieldRank:(float)arg1;
- (float)labelShieldRank;
- (BOOL)hasLabelShieldRank;
- (void)setLabelRoadRank:(float)arg1;
- (float)labelRoadRank;
- (BOOL)hasLabelRoadRank;
- (void)setLabelFontExpansion:(float)arg1;
- (float)labelFontExpansion;
- (BOOL)hasLabelFontExpansion;
- (void)setLabelTiltLimit:(float)arg1;
- (float)labelTiltLimit;
- (BOOL)hasLabelTiltLimit;
- (void)setLabelSmallCaps:(BOOL)arg1;
- (BOOL)labelSmallCaps;
- (BOOL)hasLabelSmallCaps;
- (id)labelShield;
- (BOOL)hasLabelShield;
- (void)setLabelHaloColor:(unsigned int)arg1;
- (unsigned int)labelHaloColor;
- (BOOL)hasLabelHaloColor;
- (void)setLabelColor:(unsigned int)arg1;
- (BOOL)hasLabelColor;
- (id)labelFontFamily;
- (BOOL)hasLabelFontFamily;
- (id)labelIcon;
- (BOOL)hasLabelIcon;
- (void)setLabelLineWrap:(unsigned int)arg1;
- (unsigned int)labelLineWrap;
- (BOOL)hasLabelLineWrap;
- (void)setLabelUpcase:(BOOL)arg1;
- (BOOL)labelUpcase;
- (BOOL)hasLabelUpcase;
- (void)setLabelRaisedInitial:(BOOL)arg1;
- (BOOL)labelRaisedInitial;
- (BOOL)hasLabelRaisedInitial;
- (void)setLabelHaloSize:(float)arg1;
- (float)labelHaloSize;
- (BOOL)hasLabelHaloSize;
- (void)setFillColorInterpolate:(BOOL)arg1;
- (BOOL)fillColorInterpolate;
- (BOOL)hasFillColorInterpolate;
- (void)setStrokeColorInterpolate:(BOOL)arg1;
- (BOOL)strokeColorInterpolate;
- (BOOL)hasStrokeColorInterpolate;
- (void)setFillZIndex:(unsigned int)arg1;
- (unsigned int)fillZIndex;
- (BOOL)hasFillZIndex;
- (void)setSimpleLine:(BOOL)arg1;
- (BOOL)simpleLine;
- (BOOL)hasSimpleLine;
- (BOOL)hasZIndex;
- (void)setWidthDropoff:(float)arg1;
- (float)widthDropoff;
- (BOOL)hasWidthDropoff;
- (void)setLabelHeightCurveLimit:(float)arg1;
- (float)labelHeightCurveLimit;
- (BOOL)hasLabelHeightCurveLimit;
- (void)setLabelHeightCurve:(int)arg1;
- (int)labelHeightCurve;
- (BOOL)hasLabelHeightCurve;
- (void)setLabelHeight:(float)arg1;
- (float)labelHeight;
- (BOOL)hasLabelHeight;
- (void)setStrokeWidthCurveLimit:(float)arg1;
- (float)strokeWidthCurveLimit;
- (BOOL)hasStrokeWidthCurveLimit;
- (void)setStrokeWidthCurve:(int)arg1;
- (int)strokeWidthCurve;
- (BOOL)hasStrokeWidthCurve;
- (BOOL)hasStrokeWidth;
- (void)setWidthCurveLimit:(float)arg1;
- (float)widthCurveLimit;
- (BOOL)hasWidthCurveLimit;
- (void)setWidthCurve:(int)arg1;
- (int)widthCurve;
- (BOOL)hasWidthCurve;
- (BOOL)hasWidth;
- (BOOL)hasStrokeColor;
- (BOOL)hasFillColor;
- (BOOL)hasVisible;
- (void)setThirdFillTexture:(id)arg1;
- (void)setSecondFillTexture:(id)arg1;
- (void)setTrafficFast:(id)arg1;
- (void)setTrafficMedium:(id)arg1;
- (void)setTrafficSlow:(id)arg1;
- (void)setTrafficClosed:(id)arg1;
- (void)setFillTexture:(id)arg1;
- (void)setLabelShield:(id)arg1;
- (void)setLabelFontFamily:(id)arg1;
- (void)setLabelIcon:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setStrokeWidth:(float)arg1;
- (BOOL)readFrom:(id)arg1;
- (float)strokeWidth;
- (unsigned int)strokeColor;
- (void)setStrokeColor:(unsigned int)arg1;

@end
