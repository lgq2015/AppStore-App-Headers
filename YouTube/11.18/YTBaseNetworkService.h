/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTBaseService.h>

@protocol YTFetcherService, YTNetworkServiceDelegate;
@class GIMMe, NSMutableDictionary;

@interface YTBaseNetworkService : YTBaseService {

	char _loggingEnabled;
	id<YTFetcherService> _fetcherService;
	GIMMe* _gimme;
	NSMutableDictionary* _pendingRequests;
	id<YTNetworkServiceDelegate> _networkServiceDelegate;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                                                      //@synthesize gimme=_gimme - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingRequests;                                   //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,__weak,readonly) id<YTNetworkServiceDelegate> networkServiceDelegate;              //@synthesize networkServiceDelegate=_networkServiceDelegate - In the implementation block
+(void)setForceAllNetworkRequestsToFail:(char)arg1 ;
-(GIMMe *)gimme;
-(void)setGimme:(GIMMe *)arg1 ;
-(void)setNetworkServiceDelegate:(id<YTNetworkServiceDelegate>)arg1 ;
-(id)initWithOperationQueue:(id)arg1 fetcherService:(id)arg2 ;
-(void)performHTTPRequest:(id)arg1 dataBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)performHTTPRequest:(id)arg1 parser:(id)arg2 responseBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(void)performHTTPRequest:(id)arg1 withAuthorizer:(id)arg2 parser:(id)arg3 responseBlock:(/*^block*/id)arg4 errorBlock:(/*^block*/id)arg5 ;
-(id<YTNetworkServiceDelegate>)networkServiceDelegate;
-(void)performHTTPRequest:(id)arg1 withAuthorizer:(id)arg2 parser:(id)arg3 responseBlock:(/*^block*/id)arg4 errorBlock:(/*^block*/id)arg5 retryConfig:(id)arg6 ;
-(void)performHTTPRequest:(id)arg1 withAuthorizer:(id)arg2 dataBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 retryConfig:(id)arg5 ;
-(id)defaultRetryConfig;
-(void)performHTTPRequest:(id)arg1 withAuthorizer:(id)arg2 dataBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(void)logHTTPRequest:(id)arg1 withStartTime:(id)arg2 data:(id)arg3 error:(id)arg4 ;
-(void)performHTTPRequest:(id)arg1 withAuthorizer:(id)arg2 backgroundCompletionBlock:(/*^block*/id)arg3 retryConfig:(id)arg4 ;
-(void)performHTTPRequest:(id)arg1 dataBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 retryConfig:(id)arg4 ;
-(void)performHTTPRequest:(id)arg1 parser:(id)arg2 responseBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 retryConfig:(id)arg5 ;
-(void)validateRequest:(id)arg1 ;
-(char)isLoggingEnabled;
-(NSMutableDictionary *)pendingRequests;
-(id)initWithOperationQueue:(id)arg1 ;
-(void)setLoggingEnabled:(char)arg1 ;
@end

