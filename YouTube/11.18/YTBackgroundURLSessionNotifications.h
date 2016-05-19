/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTBackgroundURLSessionNotificationHandler.h>

@class NSHashTable, NSString;

@interface YTBackgroundURLSessionNotifications : NSObject <YTBackgroundURLSessionNotificationHandler> {

	NSHashTable* _notificationHandlers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addNotificationHandler:(id)arg1 ;
-(id)init;
-(void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

