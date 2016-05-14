/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAHTTPFetcher.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSURLResponse, NSMutableData, NSURLConnection, NSString;

@interface _WAHTTPFetcherNSURLConnection : WAHTTPFetcher <NSURLSessionTaskDelegate> {

	NSURLResponse* _response;
	NSMutableData* _receivedData;
	NSURLConnection* _connection;
	unsigned _backgroundTaskIdentifier;
	char _isCancellingChallenge;
	char _connectionHasEnded;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopFetching;
-(void)beginFetchOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)failToBeginFetchWithError:(id)arg1 ;
-(void)invokeCompletionHandlerWithData:(id)arg1 error:(id)arg2 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(void)endBackgroundTask;
@end

