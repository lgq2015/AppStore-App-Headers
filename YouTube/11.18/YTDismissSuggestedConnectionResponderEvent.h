/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTResponderEvent.h>

@class NSString, YTIServiceEndpoint;

@interface YTDismissSuggestedConnectionResponderEvent : YTResponderEvent {

	NSString* _contactId;
	YTIServiceEndpoint* _dismissEndpoint;

}

@property (nonatomic,readonly) NSString * contactId;                              //@synthesize contactId=_contactId - In the implementation block
@property (nonatomic,readonly) YTIServiceEndpoint * dismissEndpoint;              //@synthesize dismissEndpoint=_dismissEndpoint - In the implementation block
+(id)eventWithContactId:(id)arg1 dismissEndpoint:(id)arg2 firstResponder:(id)arg3 ;
-(YTIServiceEndpoint *)dismissEndpoint;
-(id)initWithContactId:(id)arg1 dismissEndpoint:(id)arg2 firstResponder:(id)arg3 ;
-(NSString *)contactId;
@end

