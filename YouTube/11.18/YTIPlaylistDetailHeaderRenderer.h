/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class NSString, YTINavigationEndpoint, YTIPlaylistDetailHeaderSupportedAccessibilityDatas, YTIFormattedString, YTIPlaylistThumbnailSupportedRenderers, YTIPlaylistDetailMetrics, PBMutableArray, NSData;

@interface YTIPlaylistDetailHeaderRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasPlaylistId; 
@property (nonatomic,retain) NSString * playlistId; 
@property (assign,nonatomic) char hasEditPlaylistEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * editPlaylistEndpoint; 
@property (assign,nonatomic) char hasSharePlaylistEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * sharePlaylistEndpoint; 
@property (assign,nonatomic) char hasPlayPlaylistEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * playPlaylistEndpoint; 
@property (assign,nonatomic) char hasEditPlaylistAccessibility; 
@property (nonatomic,retain) YTIPlaylistDetailHeaderSupportedAccessibilityDatas * editPlaylistAccessibility; 
@property (assign,nonatomic) char hasSharePlaylistAccessibility; 
@property (nonatomic,retain) YTIPlaylistDetailHeaderSupportedAccessibilityDatas * sharePlaylistAccessibility; 
@property (assign,nonatomic) char hasPlayPlaylistAccessibility; 
@property (nonatomic,retain) YTIPlaylistDetailHeaderSupportedAccessibilityDatas * playPlaylistAccessibility; 
@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) YTIFormattedString * title; 
@property (assign,nonatomic) char hasDescription_p; 
@property (nonatomic,retain) YTIFormattedString * description_p; 
@property (assign,nonatomic) char hasThumbnailRenderer; 
@property (nonatomic,retain) YTIPlaylistThumbnailSupportedRenderers * thumbnailRenderer; 
@property (assign,nonatomic) char hasMetrics; 
@property (nonatomic,retain) YTIPlaylistDetailMetrics * metrics; 
@property (assign,nonatomic) char hasBadgesArray; 
@property (nonatomic,retain) PBMutableArray * badgesArray; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasMetricsAccessibility; 
@property (nonatomic,retain) YTIPlaylistDetailHeaderSupportedAccessibilityDatas * metricsAccessibility; 
+(id)descriptor;
@end

