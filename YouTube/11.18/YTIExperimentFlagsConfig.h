/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class PBMutableArray;

@interface YTIExperimentFlagsConfig : PBGeneratedMessage

@property (assign,nonatomic) char hasFlagsArray; 
@property (nonatomic,retain) PBMutableArray * flagsArray; 
@property (assign,nonatomic) char hasEnablePivotBar; 
@property (assign,nonatomic) char enablePivotBar; 
@property (assign,nonatomic) char hasIosEnableQuickActions; 
@property (assign,nonatomic) char iosEnableQuickActions; 
+(id)descriptor;
-(PBMutableArray *)flagsArray;
@end

