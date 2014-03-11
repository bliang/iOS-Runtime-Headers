/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@class GEOGeocodeRequest;

@interface RTGeocoder : NSObject {
    GEOGeocodeRequest *_geocodeRequest;
}

@property(retain) GEOGeocodeRequest * geocodeRequest;

- (void).cxx_destruct;
- (void)_cancelRequest:(id)arg1;
- (void)dealloc;
- (void)geocodeAddressDictionary:(id)arg1 withHandler:(id)arg2;
- (id)geocodeAddressDictionary:(id)arg1;
- (void)geocodeLatitude:(double)arg1 longitude:(double)arg2 handler:(id)arg3;
- (id)geocodeLatitude:(double)arg1 longitude:(double)arg2;
- (id)geocodeRequest;
- (id)init;
- (void)setGeocodeRequest:(id)arg1;

@end