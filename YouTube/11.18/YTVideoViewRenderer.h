/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class YTIFormattedString, YTIThumbnailDetails, YTIChannelThumbnailSupportedRenderers, PBMutableArray, YTIStandaloneBadgeSupportedRenderers;


@protocol YTVideoViewRenderer <NSObject>
@property (nonatomic,readonly) YTIFormattedString * title; 
@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,readonly) YTIFormattedString * shortBylineText; 
@property (nonatomic,readonly) char hasShortBylineText; 
@property (nonatomic,readonly) YTIFormattedString * publishedTimeText; 
@property (nonatomic,readonly) char hasPublishedTimeText; 
@property (nonatomic,readonly) YTIFormattedString * viewCountText; 
@property (nonatomic,readonly) char hasViewCountText; 
@property (nonatomic,readonly) YTIFormattedString * shortViewCountText; 
@property (nonatomic,readonly) char hasShortViewCountText; 
@property (nonatomic,readonly) YTIFormattedString * lengthText; 
@property (nonatomic,readonly) char hasLengthText; 
@property (nonatomic,readonly) YTIFormattedString * ownerText; 
@property (nonatomic,readonly) char hasOwnerText; 
@property (nonatomic,readonly) YTIThumbnailDetails * thumbnail; 
@property (nonatomic,readonly) char hasThumbnail; 
@property (nonatomic,readonly) YTIChannelThumbnailSupportedRenderers * channelThumbnailSupportedRenderers; 
@property (nonatomic,readonly) char hasChannelThumbnailSupportedRenderers; 
@property (nonatomic,readonly) PBMutableArray * badgesArray; 
@property (nonatomic,readonly) char hasBadgesArray; 
@property (nonatomic,readonly) char isWatched; 
@property (nonatomic,readonly) char hasIsWatched; 
@property (nonatomic,readonly) PBMutableArray * thumbnailBadgesArray; 
@property (nonatomic,readonly) char hasThumbnailBadgesArray; 
@property (nonatomic,readonly) YTIStandaloneBadgeSupportedRenderers * topStandaloneBadge; 
@property (nonatomic,readonly) char hasTopStandaloneBadge; 
@property (nonatomic,readonly) YTIStandaloneBadgeSupportedRenderers * bottomStandaloneBadge; 
@property (nonatomic,readonly) char hasBottomStandaloneBadge; 
@property (nonatomic,readonly) PBMutableArray * thumbnailOverlaysArray; 
@property (nonatomic,readonly) char hasThumbnailOverlaysArray; 
@property (nonatomic,readonly) YTIFormattedString * recommendationText; 
@property (nonatomic,readonly) char hasRecommendationText; 
@property (nonatomic,readonly) YTIFormattedString * secondaryHeadline; 
@property (nonatomic,readonly) char hasSecondaryHeadline; 
@required
-(YTIFormattedString *)lengthText;
-(YTIFormattedString *)shortBylineText;
-(char)hasShortBylineText;
-(char)hasBottomStandaloneBadge;
-(YTIStandaloneBadgeSupportedRenderers *)bottomStandaloneBadge;
-(PBMutableArray *)thumbnailOverlaysArray;
-(char)hasShortViewCountText;
-(YTIFormattedString *)shortViewCountText;
-(char)hasPublishedTimeText;
-(YTIFormattedString *)publishedTimeText;
-(PBMutableArray *)thumbnailBadgesArray;
-(char)isWatched;
-(PBMutableArray *)badgesArray;
-(char)hasTopStandaloneBadge;
-(YTIStandaloneBadgeSupportedRenderers *)topStandaloneBadge;
-(YTIFormattedString *)ownerText;
-(char)hasViewCountText;
-(YTIFormattedString *)viewCountText;
-(char)hasSecondaryHeadline;
-(YTIFormattedString *)secondaryHeadline;
-(char)hasChannelThumbnailSupportedRenderers;
-(YTIChannelThumbnailSupportedRenderers *)channelThumbnailSupportedRenderers;
-(char)hasOwnerText;
-(char)hasLengthText;
-(char)hasThumbnailBadgesArray;
-(char)hasIsWatched;
-(char)hasRecommendationText;
-(YTIFormattedString *)recommendationText;
-(char)hasBadgesArray;
-(char)hasThumbnailOverlaysArray;
-(YTIFormattedString *)title;
-(char)hasTitle;
-(YTIThumbnailDetails *)thumbnail;
-(char)hasThumbnail;

@end

