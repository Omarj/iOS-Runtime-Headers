/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISLinearExpression : NSObject <NSCopying, NSISRowBody> {
    float _constant;
    struct __CFArray { } *_sortedVarPointers;
    struct __CFArray { } *_sortedVarCoeffs;
    float _termScalar;
}

@property float constant;


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)scaleBy:(float)arg1;
- (float)incrementConstant:(float)arg1;
- (void)addExpression:(id)arg1 times:(float)arg2;
- (void)addVariable:(id)arg1 coefficient:(float)arg2;
- (float)constant;
- (void)setConstant:(float)arg1;
- (id)allVariables;
- (void)_setPreScaledCoefficient:(float)arg1 forVariable:(id)arg2;
- (float)_preScaledCoefficientForVariable:(id)arg1;
- (id)initWithSortedVarPointers:(struct __CFArray { }*)arg1 sortedVarCoefficients:(struct __CFArray { }*)arg2 constant:(float)arg3 termScalar:(float)arg4;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(float)arg2;
- (BOOL)isConstant;
- (void)enumerateVariablesAndCoefficients:(id)arg1;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(float)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(id)arg4 processVariableDroppedFromReceiver:(id)arg5;
- (void)setCoefficient:(float)arg1 forVariable:(id)arg2;
- (float)coefficientForVariable:(id)arg1;
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(id)arg3 processVariableDroppedFromReceiver:(id)arg4;
- (void)addExpression:(id)arg1 times:(float)arg2 processVariableNewToReceiver:(id)arg3 processVariableDroppedFromReceiver:(id)arg4;
- (void)addVariable:(id)arg1 coefficient:(float)arg2 processVariableNewToReceiver:(id)arg3 processVariableDroppedFromReceiver:(id)arg4;
- (void)removeVariable:(id)arg1;
- (void)enumerateVariables:(id)arg1;

@end
