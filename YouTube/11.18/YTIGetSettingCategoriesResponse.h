/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIResponseContext, PBMutableArray, NSString;

@interface YTIGetSettingCategoriesResponse : PBGeneratedMessage

@property (assign,nonatomic) char hasResponseContext; 
@property (nonatomic,retain) YTIResponseContext * responseContext; 
@property (assign,nonatomic) char hasItemsArray; 
@property (nonatomic,retain) PBMutableArray * itemsArray; 
@property (assign,nonatomic) char hasOfflineItemsArray; 
@property (nonatomic,retain) PBMutableArray * offlineItemsArray; 
@property (assign,nonatomic) char hasKind; 
@property (nonatomic,retain) NSString * kind; 
@property (assign,nonatomic) char hasActionsArray; 
@property (nonatomic,retain) PBMutableArray * actionsArray; 
+(id)descriptor;
@end

