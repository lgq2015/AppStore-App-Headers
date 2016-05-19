/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GCMPubSubRegistrar, GCMCheckinService, NSString;

@interface GCMRegistrar : NSObject {

	char _stopAllSubscriptions;
	GCMPubSubRegistrar* _pubsubRegistrar;
	GCMCheckinService* _checkinService;

}

@property (nonatomic,retain) GCMPubSubRegistrar * pubsubRegistrar;              //@synthesize pubsubRegistrar=_pubsubRegistrar - In the implementation block
@property (nonatomic,readonly) NSString * deviceAuthID; 
@property (nonatomic,readonly) NSString * secretToken; 
@property (assign,nonatomic) char stopAllSubscriptions;                         //@synthesize stopAllSubscriptions=_stopAllSubscriptions - In the implementation block
@property (nonatomic,retain) GCMCheckinService * checkinService;                //@synthesize checkinService=_checkinService - In the implementation block
-(char)hasValidCheckinInfo;
-(NSString *)secretToken;
-(NSString *)deviceAuthID;
-(id)initWithCheckinStore:(id)arg1 ;
-(char)tryToLoadValidCheckinInfo;
-(GCMCheckinService *)checkinService;
-(void)updateSubscriptionToTopic:(id)arg1 withToken:(id)arg2 options:(id)arg3 shouldDelete:(char)arg4 handler:(/*^block*/id)arg5 ;
-(void)setCheckinService:(GCMCheckinService *)arg1 ;
-(void)doUpdateSubscriptionForTopic:(id)arg1 token:(id)arg2 options:(id)arg3 shouldDelete:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)setStopAllSubscriptions:(char)arg1 ;
-(GCMPubSubRegistrar *)pubsubRegistrar;
-(void)setPubsubRegistrar:(GCMPubSubRegistrar *)arg1 ;
-(char)stopAllSubscriptions;
-(void)cancelAllRequests;
-(id)init;
@end

