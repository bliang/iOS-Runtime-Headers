/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureDeviceFormatInternal, NSArray, NSString;

@interface AVCaptureDeviceFormat : NSObject {
    AVCaptureDeviceFormatInternal *_internal;
}

@property(readonly) struct opaqueCMFormatDescription { }* formatDescription;
@property(readonly) NSString * mediaType;
@property(getter=isVideoBinned,readonly) BOOL videoBinned;
@property(readonly) float videoFieldOfView;
@property(readonly) float videoMaxZoomFactor;
@property(getter=isVideoStabilizationSupported,readonly) BOOL videoStabilizationSupported;
@property(readonly) NSArray * videoSupportedFrameRateRanges;
@property(readonly) float videoZoomFactorUpscaleThreshold;

+ (id)deviceFormatWithDictionary:(id)arg1 deviceProperties:(id)arg2 mediaType:(id)arg3;
+ (void)initialize;

- (struct CGSize { float x1; float x2; })_maxVideoDimensions;
- (id)_stringForFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 frameRateRanges:(id)arg2;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMinFrameDuration;
- (id)description;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (id)formatDictionary;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })highestSupportedVideoFrameDuration;
- (id)initWithDictionary:(id)arg1 deviceProperties:(id)arg2 mediaType:(id)arg3;
- (BOOL)isDefaultActiveFormat;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExperimental;
- (BOOL)isHighResPhotoFormat;
- (BOOL)isPhotoFormat;
- (BOOL)isSISSupported;
- (BOOL)isVideoBinned;
- (BOOL)isVideoStabilizationSupported;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lowestSupportedVideoFrameDuration;
- (id)mediaType;
- (BOOL)needsPhotoPreviewDPCC;
- (BOOL)needsPhotoTNR;
- (struct { int x1; int x2; })outputDimensions;
- (int)rawBitDepth;
- (struct { int x1; int x2; })sensorDimensions;
- (int)supportedFormatsArrayIndex;
- (int)supportedStabilizationMethod;
- (BOOL)supportsDynamicCrop;
- (BOOL)supportsHighProfileH264;
- (BOOL)supportsLowLightBoost;
- (BOOL)supportsVideoZoom;
- (BOOL)usesPreviewSizedThumbnail;
- (float)videoFieldOfView;
- (float)videoMaxZoomFactor;
- (id)videoSupportedFrameRateRanges;
- (float)videoZoomFactorUpscaleThreshold;
- (id)videoZoomSupportedDownscaleStages;
- (id)videoZoomSupportedUpscaleStages;
- (int)visCompanionSupportedFormatsArrayIndex;

@end
