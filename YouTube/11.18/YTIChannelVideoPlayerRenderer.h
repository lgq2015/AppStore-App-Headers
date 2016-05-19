/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class NSString, YTIFormattedString, PBMutableArray, YTIStandaloneBadgeSupportedRenderers;

@interface YTIChannelVideoPlayerRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasVideoId; 
@property (nonatomic,retain) NSString * videoId; 
@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) YTIFormattedString * title; 
@property (assign,nonatomic) char hasDescription_p; 
@property (nonatomic,retain) YTIFormattedString * description_p; 
@property (assign,nonatomic) char hasViewCountText; 
@property (nonatomic,retain) YTIFormattedString * viewCountText; 
@property (assign,nonatomic) char hasPublishedTimeText; 
@property (nonatomic,retain) YTIFormattedString * publishedTimeText; 
@property (assign,nonatomic) char hasReadMoreText; 
@property (nonatomic,retain) YTIFormattedString * readMoreText; 
@property (assign,nonatomic) char hasBadgesArray; 
@property (nonatomic,retain) PBMutableArray * badgesArray; 
@property (assign,nonatomic) char hasStandaloneBadge; 
@property (nonatomic,retain) YTIStandaloneBadgeSupportedRenderers * standaloneBadge; 
+(id)descriptor;
@end

