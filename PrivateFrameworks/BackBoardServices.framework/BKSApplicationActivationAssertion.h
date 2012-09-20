/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class BKSWorkspace, NSString;

@interface BKSApplicationActivationAssertion : NSObject  {
    BKSWorkspace *_workspace;
    NSString *_uniqueID;
    NSString *_name;
    BOOL _released;
}

@property(readonly) NSString * name;


- (id)_initWithWorkspace:(id)arg1 application:(id)arg2 name:(id)arg3;
- (void)releaseAssertion;
- (id)name;
- (void)dealloc;
- (id)init;

@end