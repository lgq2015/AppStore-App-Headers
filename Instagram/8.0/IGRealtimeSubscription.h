/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGRealtimeSubscriptionDelegate;
@class NSString, IGSequence;

@interface IGRealtimeSubscription : NSObject {

	id<IGRealtimeSubscriptionDelegate> _delegate;
	NSString* _topic;
	IGSequence* _sequence;
	NSString* _authToken;
	unsigned _status;

}

@property (assign,nonatomic) unsigned status;                                                 //@synthesize status=_status - In the implementation block
@property (assign,nonatomic,__weak) id<IGRealtimeSubscriptionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * topic;                                         //@synthesize topic=_topic - In the implementation block
@property (nonatomic,copy,readonly) IGSequence * sequence;                                    //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,copy,readonly) NSString * authToken;                                     //@synthesize authToken=_authToken - In the implementation block
-(void)updateWithSubscription:(id)arg1 ;
-(void)updateSequence:(id)arg1 ;
-(IGSequence *)sequence;
-(void)setDelegate:(id<IGRealtimeSubscriptionDelegate>)arg1 ;
-(id)description;
-(id<IGRealtimeSubscriptionDelegate>)delegate;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(void)updateStatus:(unsigned)arg1 ;
-(NSString *)authToken;
-(NSString *)topic;
@end

