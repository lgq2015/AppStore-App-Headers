/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GOOAlertViewDelegate.h>
#import <YouTube/YTServiceEndpointCommand.h>

@class YTNotificationService, GOOAlertView, NSString;

@interface YTNotificationOptOutEndpointCommand : NSObject <GOOAlertViewDelegate, YTServiceEndpointCommand> {

	YTNotificationService* _notificationService;
	GOOAlertView* _alertView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)alertViewDidDisappear:(id)arg1 ;
-(id)initWithNotificationService:(id)arg1 ;
-(void)executeWithEndpoint:(id)arg1 entry:(id)arg2 sender:(id)arg3 ;
-(void)dealloc;
@end

