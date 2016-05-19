/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIFormattedString, YTIThumbnailDetails;

@interface YTIMdeMonetizationSettingRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasSettingType; 
@property (assign,nonatomic) int settingType; 
@property (assign,nonatomic) char hasSettingLabel; 
@property (nonatomic,retain) YTIFormattedString * settingLabel; 
@property (assign,nonatomic) char hasSettingSubLabel; 
@property (nonatomic,retain) YTIFormattedString * settingSubLabel; 
@property (assign,nonatomic) char hasIsSelected; 
@property (assign,nonatomic) char isSelected; 
@property (assign,nonatomic) char hasIsSelectable; 
@property (assign,nonatomic) char isSelectable; 
@property (assign,nonatomic) char hasThumbnail; 
@property (nonatomic,retain) YTIThumbnailDetails * thumbnail; 
@property (assign,nonatomic) char hasDisabledThumbnail; 
@property (nonatomic,retain) YTIThumbnailDetails * disabledThumbnail; 
+(id)descriptor;
@end

