/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIResponseContext, PBMutableArray, NSString;

@interface YTIAutoOfflineResponse : PBGeneratedMessage

@property (assign,nonatomic) char hasResponseContext; 
@property (nonatomic,retain) YTIResponseContext * responseContext; 
@property (assign,nonatomic) char hasCheckInSeconds; 
@property (assign,nonatomic) unsigned checkInSeconds; 
@property (assign,nonatomic) char hasAutoOfflineCommandDatasArray; 
@property (nonatomic,retain) PBMutableArray * autoOfflineCommandDatasArray; 
@property (assign,nonatomic) char hasKind; 
@property (nonatomic,retain) NSString * kind; 
+(id)descriptor;
@end

