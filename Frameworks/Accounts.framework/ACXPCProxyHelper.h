/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@class NSXPCConnection, Protocol;

@interface ACXPCProxyHelper : NSObject {
    NSXPCConnection *_connection;
    Protocol *_protocol;
}

- (void).cxx_destruct;
- (void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(id)arg3;
- (id)_copyReplyBlockFromInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithXPCConnection:(id)arg1 protocol:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
