/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@class <TTSSpeechConnectionDelegate>, TTSSpeechClient, TTSSpeechConnectionDelegateWrapper, TTSSpeechRequest;

@interface TTSSpeechConnection : NSObject {
    TTSSpeechClient *_client;
    TTSSpeechConnectionDelegateWrapper *_delegateWrapper;
    TTSSpeechRequest *_request;
}

@property <TTSSpeechConnectionDelegate> * delegate;
@property(readonly) TTSSpeechRequest * request;

- (void).cxx_destruct;
- (void)_setRequest:(id)arg1;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
- (id)availableVoicesForLanguageCode:(id)arg1;
- (void)continueCurrentSpeechRequest;
- (void)dealloc;
- (id)delegate;
- (BOOL)isSystemSpeaking;
- (BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
- (void)pauseCurrentSpeechRequestAtMark:(int)arg1 waitUntilPaused:(BOOL)arg2;
- (id)request;
- (void)setDelegate:(id)arg1;
- (id)speechClient;
- (void)startSpeechRequest:(id)arg1;
- (void)stopCurrentSpeechRequestAtMark:(int)arg1 waitUntilStopped:(BOOL)arg2;

@end
