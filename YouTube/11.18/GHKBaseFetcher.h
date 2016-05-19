/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GHKConfig, GHKConnectivity, GHKSessionDataManager, GHKFetcherUtils;

@interface GHKBaseFetcher : NSObject {

	unsigned _retryCount;
	GHKConfig* _config;
	GHKConnectivity* _connectivity;
	GHKSessionDataManager* _sessionDataManager;
	GHKFetcherUtils* _utils;

}

@property (nonatomic,retain) GHKConfig * config;                                      //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) GHKConnectivity * connectivity;                          //@synthesize connectivity=_connectivity - In the implementation block
@property (nonatomic,retain) GHKSessionDataManager * sessionDataManager;              //@synthesize sessionDataManager=_sessionDataManager - In the implementation block
@property (nonatomic,retain) GHKFetcherUtils * utils;                                 //@synthesize utils=_utils - In the implementation block
+(id)objectionRequires;
+(id)objectionInitializer;
-(id)fetcherWithRequest:(id)arg1 ;
-(GHKSessionDataManager *)sessionDataManager;
-(void)setSessionDataManager:(GHKSessionDataManager *)arg1 ;
-(void)setUtils:(GHKFetcherUtils *)arg1 ;
-(GHKFetcherUtils *)utils;
-(id)URLForReceiverPath:(id)arg1 ;
-(id)initWithRetryCount:(id)arg1 ;
-(id)URLRequestWithReceiverPath:(id)arg1 requestData:(id)arg2 ;
-(id)URLRequestWithReceiverPath:(id)arg1 requestProto:(id)arg2 ;
-(GHKConfig *)config;
-(void)setConfig:(GHKConfig *)arg1 ;
-(id)requestData;
-(void)setConnectivity:(GHKConnectivity *)arg1 ;
-(GHKConnectivity *)connectivity;
@end

