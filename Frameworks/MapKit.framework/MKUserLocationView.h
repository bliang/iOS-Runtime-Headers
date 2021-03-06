/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CALayer, VKAnnotationMarker;

@interface MKUserLocationView : MKAnnotationView <VKPuckAnimatorTarget> {
    CALayer *_accuracyLayer;
    BOOL _allowsAccuracyRing;
    BOOL _allowsHeadingIndicator;
    BOOL _allowsPulse;
    BOOL _effectsEnabled;
    double _headingAccuracy;
    CALayer *_headingLayer;
    double _locationAccuracy;
    int _locationSource;
    VKAnnotationMarker *_marker;
    double _presentationCourse;
    CALayer *_pulseLayer;
    BOOL _shouldDisplayHeading;
    BOOL _shouldPulse;
    BOOL _stale;
    int _zoomDirection;
}

@property BOOL allowsAccuracyRing;
@property BOOL allowsHeadingIndicator;
@property BOOL allowsPulse;
@property(getter=isEffectsEnabled) BOOL effectsEnabled;
@property double headingAccuracy;
@property(readonly) double locationAccuracy;
@property int locationSource;
@property float opacity;
@property double presentationCourse;
@property BOOL shouldDisplayHeading;
@property(getter=isStale,readonly) BOOL stale;
@property int zoomDirection;

+ (unsigned int)_selectedZIndex;
+ (unsigned int)_zIndex;
+ (float)accuracyDiameter:(float)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (id)_accuracyAnimation:(float)arg1;
- (float)_accuracyRadius:(double)arg1;
- (id)_animationToSynchronizePulse:(id*)arg1;
- (id)_baseLayer;
- (struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 16; unsigned int x_4_1_7 : 2; unsigned int x_4_1_8 : 1; } x4; }*)_headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint { float x1; float x2; }*)arg2;
- (id)_layerToMatchAccuracyRing;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_mapkit_visibleRect;
- (void)_pausePulse;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (id)_pulseTintColor;
- (void)_resetLayerToMatchAccuracyRing;
- (void)_resumePulse;
- (void)_setAnimatingToCoordinate:(BOOL)arg1;
- (void)_setMapPitchRadians:(float)arg1;
- (void)_setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)_setTracking:(BOOL)arg1;
- (BOOL)_tracking;
- (void)_updateFromMap;
- (void)_updateHeadingLayer;
- (void)_updateLayers;
- (void)_updatePulse;
- (id)_vkMarker;
- (BOOL)allowsAccuracyRing;
- (BOOL)allowsHeadingIndicator;
- (BOOL)allowsPulse;
- (void)didMoveToWindow;
- (double)headingAccuracy;
- (id)init;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isEffectsEnabled;
- (BOOL)isStale;
- (void)layoutSubviews;
- (double)locationAccuracy;
- (void)locationManagerFailedToUpdateLocation;
- (int)locationSource;
- (float)opacity;
- (double)presentationCourse;
- (void)setAllowsAccuracyRing:(BOOL)arg1;
- (void)setAllowsHeadingIndicator:(BOOL)arg1;
- (void)setAllowsPulse:(BOOL)arg1;
- (void)setAnimatingToCoordinate:(BOOL)arg1;
- (void)setEffectsEnabled:(BOOL)arg1;
- (void)setHeadingAccuracy:(double)arg1;
- (void)setLocationAccuracy:(double)arg1 duration:(double)arg2;
- (void)setLocationSource:(int)arg1;
- (void)setOpacity:(float)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShouldDisplayHeading:(BOOL)arg1;
- (void)setZoomDirection:(int)arg1 deltaScale:(float)arg2;
- (void)setZoomDirection:(int)arg1;
- (BOOL)shouldDisplayHeading;
- (void)updateStateFromLocation:(id)arg1 duration:(double)arg2;
- (int)zoomDirection;

@end
