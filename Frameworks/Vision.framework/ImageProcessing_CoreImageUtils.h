/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface ImageProcessing_CoreImageUtils : NSObject

+ (struct CGImage { }*)newCGImageFromCIImage:(id)arg1 error:(id*)arg2;
+ (id)newCIImageFromVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 withType:(int)arg2 error:(id*)arg3;
+ (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })newVImageBufferFromCIImage:(id)arg1 error:(id*)arg2;

@end
