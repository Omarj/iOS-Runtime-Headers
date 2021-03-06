/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLMesh, VKAnimation, VGLRenderState;

@interface VKGridModel : VKModelObject <VKMapLayer> {
    VGLRenderState *_renderState;
    VGLMesh *_mesh;
    double _gridMix;
    struct { 
        double v[4][4]; 
    } _projection;
    struct { 
        double v[4][4]; 
    } _gridView;
    struct { 
        float x; 
        float y; 
    } _invFwidth;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _color;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _lineColor;
    VKAnimation *_colorAnimation;
    BOOL _simpleGridEnabled;
}

@property BOOL simpleGridEnabled;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } color;


- (void)dealloc;
- (id)init;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })color;
- (void)setColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)simpleGridEnabled;
- (void)setSimpleGridEnabled:(BOOL)arg1;
- (void)setColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1 animated:(BOOL)arg2;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)mapLayerPosition;

@end
