/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableArray, NSObject<OS_tcp_listener>;

@interface NSNetServicesInternal : NSObject {
    NSObject<OS_tcp_listener> *_listener;
    NSMutableArray *_monitors;
}

@property(retain) NSMutableArray * monitors;

- (void)dealloc;
- (void)finalize;
- (id)listener;
- (id)monitors;
- (void)setListener:(id)arg1;
- (void)setMonitors:(id)arg1;

@end
