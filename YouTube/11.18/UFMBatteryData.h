/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

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

