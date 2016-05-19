/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIFormattedString, YTIShowThumbnailSupportedRenderers, YTINavigationEndpoint, YTIStandaloneBadgeSupportedRenderers, YTIMenuSupportedRenderers, NSData, PBMutableArray;

@interface YTIGridShowRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) YTIFormattedString * title; 
@property (assign,nonatomic) char hasThumbnailRenderer; 
@property (nonatomic,retain) YTIShowThumbnailSupportedRenderers * thumbnailRenderer; 
@property (assign,nonatomic) char hasNavigationEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * navigationEndpoint; 
@property (assign,nonatomic) char hasShortBylineText; 
@property (nonatomic,retain) YTIFormattedString * shortBylineText; 
@property (assign,nonatomic) char hasLongBylineText; 
@property (nonatomic,retain) YTIFormattedString * longBylineText; 
@property (assign,nonatomic) char hasBottomStandaloneBadge; 
@property (nonatomic,retain) YTIStandaloneBadgeSupportedRenderers * bottomStandaloneBadge; 
@property (assign,nonatomic) char hasMenu; 
@property (nonatomic,retain) YTIMenuSupportedRenderers * menu; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasThumbnailOverlaysArray; 
@property (nonatomic,retain) PBMutableArray * thumbnailOverlaysArray; 
+(id)descriptor;
@end

