/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGEventAggregator.h>

@class NSMutableDictionary;

@interface IGTimerEvent : IGEventAggregator {

	NSMutableDictionary* _pendingEvents;

}

@property (nonatomic,retain) NSMutableDictionary * pendingEvents;              //@synthesize pendingEvents=_pendingEvents - In the implementation block
-(id)keyForTimer:(id)arg1 uuid:(id)arg2 ;
-(id)processEvent:(id)arg1 ;
-(id)createEventObjectForTimer:(id)arg1 uuid:(id)arg2 ;
-(void)recordEvent:(id)arg1 forTimer:(id)arg2 uuid:(id)arg3 ;
-(void)setPendingEvents:(NSMutableDictionary *)arg1 ;
-(void)startTimer:(id)arg1 uuid:(id)arg2 ;
-(void)save;
-(void)reset;
-(id)initWithDelegate:(id)arg1 ;
-(NSMutableDictionary *)pendingEvents;
@end

