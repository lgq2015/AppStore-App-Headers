/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/BCHTTPHangingRequestHandlerDelegate.h>

@protocol BCProxyTesterDelegate;
@class BCHTTPHandler;

@interface BCProxyTester : NSObject <BCHTTPHangingRequestHandlerDelegate> {

	int _testRetriesDone;
	int _statusCode;
	double _firstTestResponseSeconds;
	BCHTTPHandler* _hangingHttpHandler;
	char _isCloseImmediately;
	id<BCProxyTesterDelegate> _delegate;

}
+(id)testForCloseImmediately:(id)arg1 withDelegate:(id)arg2 ;
-(void)onHTTPHangingRequest:(id)arg1 receivedContent:(id)arg2 ;
-(void)onHTTPHangingRequestComplete:(id)arg1 ;
-(void)onHTTPHangingRequest:(id)arg1 error:(id)arg2 ;
-(char)checkProxiedConnection;
-(id)hangingHttpHandler;
-(void)setHangingHttpHandler:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithRequest:(id)arg1 ;
@end

