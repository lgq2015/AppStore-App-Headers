/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTBaseNetworkService.h>
#import <YouTube/YTPrefetchController.h>

@protocol YTPrefetchControllerConfig, YTLastActionProvider, YTPrefetchRequestProvider;
@class YTPlayerService, YTPlayerRequestFactory, YTReachabilityController, YTIPlayerRequest, YTMonotonicDate, GIMMe, NSString;

@interface YTSimplePrefetchController : YTBaseNetworkService <YTPrefetchController> {

	YTPlayerService* _playerService;
	YTPlayerRequestFactory* _playerRequestFactory;
	id<YTPrefetchControllerConfig> _config;
	YTReachabilityController* _reachabilityController;
	id<YTLastActionProvider> _lastActionProvider;
	char _prefetchAttempted;
	YTIPlayerRequest* _prefetchPlayerRequest;
	YTMonotonicDate* _prewarmExpirationDate;
	id<YTPrefetchRequestProvider> _prefetchRequestProvider;

}

@property (assign,nonatomic,__weak) GIMMe * gimme; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<YTPrefetchRequestProvider> prefetchRequestProvider;              //@synthesize prefetchRequestProvider=_prefetchRequestProvider - In the implementation block
-(id)partialPlayerRequestForURL;
-(void)makePlayerRequest:(id)arg1 responseBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)currentMediaTimeDidChangeToTime:(double)arg1 totalMediaTime:(double)arg2 ;
-(void)makePlayerRequest:(id)arg1 expiredPlaybackData:(id)arg2 responseBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(void)makePrefetchRequest:(id)arg1 ;
-(id<YTPrefetchRequestProvider>)prefetchRequestProvider;
-(void)setPrefetchRequestProvider:(id<YTPrefetchRequestProvider>)arg1 ;
-(id)playerRequestForNavigationEndpoint:(id)arg1 ;
-(void)maybePrefetchNextVideoWithTimeToVideoEnd:(double)arg1 ;
-(void)clearPrefetchData;
-(void)prewarmHTTPConnections;
-(id)currentPrefetchPlayerRequest;
-(id)init;
@end

