/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

// Not exported
@interface CIPixellate : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputScale;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;
- (_Bool)_isIdentity;
- (void)setDefaults;

@end

