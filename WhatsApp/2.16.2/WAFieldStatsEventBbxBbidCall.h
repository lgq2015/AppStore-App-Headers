/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventBbxBbidCall : WAFieldStatsEvent {

	double _bbx_bbid_request;
	double _bbx_bbid_result;
	double _bbx_bbid_failure_reason;

}

@property (assign,nonatomic) double bbx_bbid_request;                     //@synthesize bbx_bbid_request=_bbx_bbid_request - In the implementation block
@property (assign,nonatomic) double bbx_bbid_result;                      //@synthesize bbx_bbid_result=_bbx_bbid_result - In the implementation block
@property (assign,nonatomic) double bbx_bbid_failure_reason;              //@synthesize bbx_bbid_failure_reason=_bbx_bbid_failure_reason - In the implementation block
-(double)bbx_bbid_request;
-(void)setBbx_bbid_request:(double)arg1 ;
-(double)bbx_bbid_result;
-(void)setBbx_bbid_result:(double)arg1 ;
-(double)bbx_bbid_failure_reason;
-(void)setBbx_bbid_failure_reason:(double)arg1 ;
-(id)init;
-(void)submit;
@end

