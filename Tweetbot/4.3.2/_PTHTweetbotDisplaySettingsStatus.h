/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotStatus.h>

@class NSDate, PTHTweetbotUser, NSString;

@interface _PTHTweetbotDisplaySettingsStatus : PTHTweetbotStatus {

	NSDate* createdAt;
	PTHTweetbotUser* user;

}

@property (nonatomic,retain) NSDate * createdAt; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) PTHTweetbotUser * user; 
-(PTHTweetbotUser *)user;
-(void)setUser:(PTHTweetbotUser *)arg1 ;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(NSDate *)createdAt;
@end

