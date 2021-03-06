/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLGroundCoverProgram : VGLProgram  {
    int _uVegetationAlpha;
    float _vegetationAlpha;
    int _uLandSampler;
    int _landSampler;
    int _uVegetationSampler;
    int _vegetationSampler;
}

@property float vegetationAlpha;
@property int landSampler;
@property int vegetationSampler;

+ (id)program;

- (id)init;
- (int)vegetationSampler;
- (int)landSampler;
- (float)vegetationAlpha;
- (void)setVegetationSampler:(int)arg1;
- (void)setLandSampler:(int)arg1;
- (void)setVegetationAlpha:(float)arg1;

@end
