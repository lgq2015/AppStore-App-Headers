/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIThumbnailDetails, YTIFormattedString, YTINavigationEndpoint, NSData, YTIGamingSubscribeButtonSupportedRenderers, YTIAssociatedGameSupportedRenderers, PBMutableArray, YTIAccessibilitySupportedDatas;

@interface YTICompactGameRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasThumbnail; 
@property (nonatomic,retain) YTIThumbnailDetails * thumbnail; 
@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) YTIFormattedString * title; 
@property (assign,nonatomic) char hasGenre; 
@property (nonatomic,retain) YTIFormattedString * genre; 
@property (assign,nonatomic) char hasNavigationEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * navigationEndpoint; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasHasOfficialBoxArt; 
@property (assign,nonatomic) char hasOfficialBoxArt; 
@property (assign,nonatomic) char hasSubscriberCountText; 
@property (nonatomic,retain) YTIFormattedString * subscriberCountText; 
@property (assign,nonatomic) char hasSubscribeButton; 
@property (nonatomic,retain) YTIGamingSubscribeButtonSupportedRenderers * subscribeButton; 
@property (assign,nonatomic) char hasGame; 
@property (nonatomic,retain) YTIAssociatedGameSupportedRenderers * game; 
@property (assign,nonatomic) char hasBadgesArray; 
@property (nonatomic,retain) PBMutableArray * badgesArray; 
@property (assign,nonatomic) char hasAccessibility; 
@property (nonatomic,retain) YTIAccessibilitySupportedDatas * accessibility; 
+(id)descriptor;
@end

