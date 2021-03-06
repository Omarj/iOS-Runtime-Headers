/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CACGPathCodingSegment : NSObject <NSCoding> {
    int _type;
    struct CGPoint { 
        float x; 
        float y; 
    } _points[3];
}


- (id).cxx_construct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addToCGPath:(struct CGPath { }*)arg1;
- (id)initWithCGPathElement:(const struct CGPathElement { int x1; struct CGPoint {} *x2; }*)arg1;

@end
