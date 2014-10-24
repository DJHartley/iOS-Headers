//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference, NSDictionary, NSMutableArray;

@interface AVCaptureStillImageOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    NSMutableArray *stillImageRequests;
    BOOL squareCropEnabled;
    struct CGSize previewImageSize;
    unsigned long imageDataFormatType;
    float jpegQuality;
    BOOL jpegQualitySpecified;
    int HDRCaptureMode;
    BOOL EV0CaptureEnabled;
    BOOL noiseReductionEnabled;
    BOOL suspendsVideoProcessingDuringCapture;
    NSDictionary *outputSettings;
    BOOL isCapturingPhoto;
    BOOL rawCaptureEnabled;
    BOOL SISSupported;
    BOOL SISEnabled;
    BOOL SISActive;
    BOOL highResStillEnabled;
    unsigned long shutterSoundID;
    struct {
        unsigned int imageCount;
        int outputFormat;
        unsigned int outputWidth;
        unsigned int outputHeight;
    } preparedBracket;
    NSMutableArray *prepareRequests;
    unsigned int maxBracketedCaptureCount;
}

- (void)dealloc;
- (id)init;

@end
