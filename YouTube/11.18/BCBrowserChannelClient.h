/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/BCChunkStreamDelegate.h>
#import <YouTube/BCProxyTesterDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@protocol BCBrowserChannelClientDelegate, GTMFetcherAuthorizationProtocol;
@class NSURL, NSMutableArray, NSString, NSDictionary, BCProxyTester, BCChunkStream, BCHTTPHandler;

@interface BCBrowserChannelClient : NSObject <BCChunkStreamDelegate, BCProxyTesterDelegate, NSURLConnectionDelegate> {

	NSURL* _baseURL;
	id<BCBrowserChannelClientDelegate> _delegate;
	int _requestId;
	int _messageId;
	int _lastMapId;
	NSMutableArray* _forwardChannelActionQueue;
	NSString* _sessionCookie;
	NSString* _sessionId;
	NSDictionary* _defaultParamsForPost;
	NSDictionary* _defaultParamsForHangingGet;
	char _closeImmediately;
	BCProxyTester* _testChannel;
	BCChunkStream* _chunkStream;
	id<GTMFetcherAuthorizationProtocol> _requestAuthorizer;
	NSString* _delegatedChannelID;
	int _channelState;
	NSDictionary* _extraQueryParams;
	BCHTTPHandler* _backChannel;
	BCHTTPHandler* _forwardChannel;
	int _reconnectTries;

}

@property (assign,nonatomic) int channelState;                                                //@synthesize channelState=_channelState - In the implementation block
@property (assign,nonatomic,__weak) id<BCBrowserChannelClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * extraQueryParams;                                   //@synthesize extraQueryParams=_extraQueryParams - In the implementation block
@property (nonatomic,readonly) char hasOutstandingRequests; 
@property (nonatomic,retain) BCHTTPHandler * backChannel;                                     //@synthesize backChannel=_backChannel - In the implementation block
@property (nonatomic,retain) BCHTTPHandler * forwardChannel;                                  //@synthesize forwardChannel=_forwardChannel - In the implementation block
@property (assign,nonatomic) int reconnectTries;                                              //@synthesize reconnectTries=_reconnectTries - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDefaults:(id)arg1 queryParams:(id)arg2 handlerDelegate:(id)arg3 ;
-(void)setExtraQueryParams:(NSDictionary *)arg1 ;
-(void)setRequestAuthorier:(id)arg1 withDelegatedChannelID:(id)arg2 ;
-(void)testForCloseImmediately;
-(void)addActionToQueue:(id)arg1 inTheBeginning:(char)arg2 ;
-(int)channelState;
-(void)cancelPendingRequests;
-(id)payloadToPostParams:(id)arg1 ;
-(void)cancelAndReleaseTestChannel;
-(void)sendForwardChannelPost:(id)arg1 ;
-(void)sendForwardChannelTerminate;
-(void)processNextAction;
-(NSDictionary *)extraQueryParams;
-(void)sendHangingGetRequest:(id)arg1 ;
-(id)connectWithRequest:(id)arg1 backChannel:(char)arg2 ;
-(void)setBackChannel:(BCHTTPHandler *)arg1 ;
-(void)setChannelState:(int)arg1 ;
-(void)setReconnectTries:(int)arg1 ;
-(void)authorizeAndSendRequest:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)sendHangingGet;
-(id)postQueryParams:(id)arg1 ;
-(void)sendPostRequest:(id)arg1 postParams:(id)arg2 ;
-(void)setForwardChannel:(BCHTTPHandler *)arg1 ;
-(void)resetSessionData;
-(void)handleChunk:(id)arg1 ;
-(void)proxyTesterDidCloseImmediately:(char)arg1 ;
-(char)hasOutstandingRequests;
-(void)setCloseImmediately:(char)arg1 ;
-(BCHTTPHandler *)backChannel;
-(BCHTTPHandler *)forwardChannel;
-(void)onHTTPHangingRequest:(id)arg1 receivedContent:(id)arg2 ;
-(void)onHTTPHangingRequestComplete:(id)arg1 ;
-(void)onHTTPHangingRequest:(id)arg1 error:(id)arg2 ;
-(void)onHTTPRequest:(id)arg1 complete:(id)arg2 ;
-(void)onHTTPRequest:(id)arg1 error:(id)arg2 ;
-(int)reconnectTries;
-(void)reconnect;
-(void)setDelegate:(id<BCBrowserChannelClientDelegate>)arg1 ;
-(id)init;
-(id<BCBrowserChannelClientDelegate>)delegate;
-(void)connect;
-(void)disconnect;
-(void)sendData:(id)arg1 ;
@end

