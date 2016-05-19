/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>
#import <YouTube/YTInnerTubePlaylist.h>
#import <YouTube/YTInnerTubePlaylist.h>

@class NSString, YTIThumbnailDetails, YTIFormattedString, YTINavigationEndpoint, YTILikeButtonSupportedRenderers, NSData, PBMutableArray, YTICompactPlaylistRenderer_CompactPlaylistOfflineabilitySupportedRenderers, YTIMenuSupportedRenderers, YTIPlaylistThumbnailSupportedRenderers, YTIAssociatedGameSupportedRenderers, YTIPlaylistEndpointSupportedDatas, YTIIosClientOfflineData;

@interface YTICompactPlaylistRenderer : PBGeneratedMessage <YTInnerTubePlaylist, YTInnerTubePlaylist>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * playlistId; 
@property (assign,nonatomic) char hasPlaylistId; 
@property (nonatomic,retain) NSString * playlistId; 
@property (assign,nonatomic) char hasThumbnail; 
@property (nonatomic,retain) YTIThumbnailDetails * thumbnail; 
@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) YTIFormattedString * title; 
@property (assign,nonatomic) char hasShortBylineText; 
@property (nonatomic,retain) YTIFormattedString * shortBylineText; 
@property (assign,nonatomic) char hasVideoCountText; 
@property (nonatomic,retain) YTIFormattedString * videoCountText; 
@property (assign,nonatomic) char hasNavigationEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * navigationEndpoint; 
@property (assign,nonatomic) char hasDebugHtml; 
@property (nonatomic,retain) NSString * debugHtml; 
@property (assign,nonatomic) char hasPublishedTimeText; 
@property (nonatomic,retain) YTIFormattedString * publishedTimeText; 
@property (assign,nonatomic) char hasVideoCountShortText; 
@property (nonatomic,retain) YTIFormattedString * videoCountShortText; 
@property (assign,nonatomic) char hasLikeButton; 
@property (nonatomic,retain) YTILikeButtonSupportedRenderers * likeButton; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasSidebarThumbnailsArray; 
@property (nonatomic,retain) PBMutableArray * sidebarThumbnailsArray; 
@property (assign,nonatomic) char hasServiceEndpointsArray; 
@property (nonatomic,retain) PBMutableArray * serviceEndpointsArray; 
@property (assign,nonatomic) char hasThumbnailText; 
@property (nonatomic,retain) YTIFormattedString * thumbnailText; 
@property (assign,nonatomic) char hasOwnerBadgesArray; 
@property (nonatomic,retain) PBMutableArray * ownerBadgesArray; 
@property (assign,nonatomic) char hasOfflineability; 
@property (nonatomic,retain) YTICompactPlaylistRenderer_CompactPlaylistOfflineabilitySupportedRenderers * offlineability; 
@property (assign,nonatomic) char hasMenu; 
@property (nonatomic,retain) YTIMenuSupportedRenderers * menu; 
@property (assign,nonatomic) char hasShareUrl; 
@property (nonatomic,retain) NSString * shareUrl; 
@property (assign,nonatomic) char hasThumbnailRenderer; 
@property (nonatomic,retain) YTIPlaylistThumbnailSupportedRenderers * thumbnailRenderer; 
@property (assign,nonatomic) char hasLongBylineText; 
@property (nonatomic,retain) YTIFormattedString * longBylineText; 
@property (assign,nonatomic) char hasBadgesArray; 
@property (nonatomic,retain) PBMutableArray * badgesArray; 
@property (assign,nonatomic) char hasAssociatedGame; 
@property (nonatomic,retain) YTIAssociatedGameSupportedRenderers * associatedGame; 
@property (assign,nonatomic) char hasSecondaryEndpoints; 
@property (nonatomic,retain) YTIPlaylistEndpointSupportedDatas * secondaryEndpoints; 
@property (assign,nonatomic) char hasThumbnailOverlaysArray; 
@property (nonatomic,retain) PBMutableArray * thumbnailOverlaysArray; 
@property (assign,nonatomic) char hasIosClientOfflineData; 
@property (nonatomic,retain) YTIIosClientOfflineData * iosClientOfflineData; 
+(id)compactPlaylistRendererWithOfflinePlaylist:(id)arg1 ;
+(id)genericCompactPlaylistRendererWithOfflinePlaylist:(id)arg1 ;
+(id)genericCompactPlaylistRendererWithPlaylist:(id)arg1 ;
+(id)compactPlaylistRendererWithPlaylist:(id)arg1 ;
+(id)descriptor;
@end

