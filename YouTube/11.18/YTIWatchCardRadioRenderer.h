/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>
#import <YouTube/YTSmallArtistWatchCardListItem.h>

@class NSString, YTIFormattedString, YTIThumbnailDetails, YTINavigationEndpoint, NSData;

@interface YTIWatchCardRadioRenderer : PBGeneratedMessage <YTSmallArtistWatchCardListItem>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) YTIFormattedString * leftText; 
@property (nonatomic,readonly) YTIFormattedString * bylineText; 
@property (nonatomic,readonly) YTIFormattedString * rightText; 
@property (nonatomic,readonly) YTIThumbnailDetails * thumbnail; 
@property (nonatomic,readonly) YTIFormattedString * thumbnailOverlayText; 
@property (nonatomic,readonly) YTINavigationEndpoint * navigationEndpoint; 
@property (nonatomic,readonly) float height; 
@property (assign,nonatomic) char hasPlaylistId; 
@property (nonatomic,retain) NSString * playlistId; 
@property (assign,nonatomic) char hasThumbnail; 
@property (nonatomic,retain) YTIThumbnailDetails * thumbnail; 
@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) YTIFormattedString * title; 
@property (assign,nonatomic) char hasVideoCountText; 
@property (nonatomic,retain) YTIFormattedString * videoCountText; 
@property (assign,nonatomic) char hasNavigationEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * navigationEndpoint; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasLongBylineText; 
@property (nonatomic,retain) YTIFormattedString * longBylineText; 
+(id)descriptor;
-(YTIFormattedString *)thumbnailOverlayText;
-(YTIFormattedString *)bylineText;
-(int)type;
-(float)height;
-(YTIFormattedString *)leftText;
-(YTIFormattedString *)rightText;
@end

