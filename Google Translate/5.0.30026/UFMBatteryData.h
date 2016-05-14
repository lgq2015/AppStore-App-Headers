/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/PBGeneratedMessage.h>

@class NSString;

@interface UFMBatteryData : PBGeneratedMessage

@property (assign,nonatomic) char hasUsagePercent; 
@property (assign,nonatomic) int usagePercent; 
@property (assign,nonatomic) char hasDurationMicros; 
@property (assign,nonatomic) long long durationMicros; 
@property (assign,nonatomic) char hasUsageDetails; 
@property (nonatomic,retain) NSString * usageDetails; 
@property (assign,nonatomic) char hasCheckinDetails; 
@property (nonatomic,retain) NSString * checkinDetails; 
@property (assign,nonatomic) char hasBatteryLevel; 
@property (assign,nonatomic) float batteryLevel; 
@property (assign,nonatomic) char hasBatteryState; 
@property (assign,nonatomic) int batteryState; 
+(id)descriptor;
@end

