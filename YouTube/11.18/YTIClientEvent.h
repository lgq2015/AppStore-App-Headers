/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIOfflineTransferStatusChanged, YTISystemHealthMetricCaptured, YTIOfflineTransferStarted;

@interface YTIClientEvent : PBGeneratedMessage

@property (assign,nonatomic) char hasEventTimeMs; 
@property (assign,nonatomic) long long eventTimeMs; 
@property (assign,nonatomic) char hasOfflineTransferStatusChanged; 
@property (nonatomic,retain) YTIOfflineTransferStatusChanged * offlineTransferStatusChanged; 
@property (assign,nonatomic) char hasSystemHealthCaptured; 
@property (nonatomic,retain) YTISystemHealthMetricCaptured * systemHealthCaptured; 
@property (assign,nonatomic) char hasOfflineTransferStarted; 
@property (nonatomic,retain) YTIOfflineTransferStarted * offlineTransferStarted; 
+(id)descriptor;
@end

