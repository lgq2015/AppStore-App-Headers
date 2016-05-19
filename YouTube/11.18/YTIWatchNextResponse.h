/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>
#import <YouTube/YTContinuableInnerTubeObject.h>
#import <YouTube/YTInnerTubeSectionRenderers.h>

@class NSString, YTIResponseContext, YTIWatchNextSupportedRenderers, YTIContinuationSupportedRenderers, YTINavigationEndpoint, YTIEditOnWatchSupportedRenderers, PBMutableArray, NSData, YTIPlayerOverlaySupportedRenderers, YTICompanionAdSupportedRenderers, YTIVideoReportingSupportedRenderers, YTIWatchNextSurveyTriggerSupportedRenderers, YTIWatchNextOverlaySupportedRenderers;

@interface YTIWatchNextResponse : PBGeneratedMessage <YTContinuableInnerTubeObject, YTInnerTubeSectionRenderers>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasResponseContext; 
@property (nonatomic,retain) YTIResponseContext * responseContext; 
@property (assign,nonatomic) char hasKind; 
@property (nonatomic,retain) NSString * kind; 
@property (assign,nonatomic) char hasContents; 
@property (nonatomic,retain) YTIWatchNextSupportedRenderers * contents; 
@property (assign,nonatomic) char hasContinuationContents; 
@property (nonatomic,retain) YTIContinuationSupportedRenderers * continuationContents; 
@property (assign,nonatomic) char hasCurrentVideoEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * currentVideoEndpoint; 
@property (assign,nonatomic) char hasEditContents; 
@property (nonatomic,retain) YTIEditOnWatchSupportedRenderers * editContents; 
@property (assign,nonatomic) char hasAlertsArray; 
@property (nonatomic,retain) PBMutableArray * alertsArray; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasPlayerOverlays; 
@property (nonatomic,retain) YTIPlayerOverlaySupportedRenderers * playerOverlays; 
@property (assign,nonatomic) char hasCompanionAds; 
@property (nonatomic,retain) YTICompanionAdSupportedRenderers * companionAds; 
@property (assign,nonatomic) char hasVideoReporting; 
@property (nonatomic,retain) YTIVideoReportingSupportedRenderers * videoReporting; 
@property (assign,nonatomic) char hasSurvey; 
@property (nonatomic,retain) YTIWatchNextSurveyTriggerSupportedRenderers * survey; 
@property (assign,nonatomic) char hasOverlay; 
@property (nonatomic,retain) YTIWatchNextOverlaySupportedRenderers * overlay; 
@property (assign,nonatomic) char hasOnResponseReceivedEndpointsArray; 
@property (nonatomic,retain) PBMutableArray * onResponseReceivedEndpointsArray; 
+(id)watchNextResponseWithAutoPlayRenderer:(id)arg1 videoMetadataRenderer:(id)arg2 videoOwnerRenderer:(id)arg3 musicMetadataRenderer:(id)arg4 playlistPanelRenderer:(id)arg5 commentsRenderer:(id)arg6 suggestedShelfRenderer:(id)arg7 companionAdRenderer:(id)arg8 lockScreenRenderer:(id)arg9 compactMessageRenderer:(id)arg10 offline:(char)arg11 videoID:(id)arg12 playlistID:(id)arg13 playlistIndex:(unsigned)arg14 ;
+(id)watchNextResponseWithVideo:(id)arg1 ;
+(id)watchNextResponseWithReturnToPlayAppMessageForVideo:(id)arg1 ;
+(id)watchNextResponseWithVideo:(id)arg1 suggestedVideo:(id)arg2 loadMoreText:(id)arg3 playlist:(id)arg4 channel:(id)arg5 artist:(id)arg6 moreByArtistText:(id)arg7 playlistIndex:(unsigned)arg8 commentsSection:(char)arg9 companionAdSection:(char)arg10 ;
+(id)descriptor;
-(id)singleColumnPlaylistPanelRenderer;
-(id)singleColumnAutoPlayRenderer;
-(id)singleColumnWatchNextResultsRenderer;
-(id)playerOverlayAutoplayRenderer;
-(id)singleColumnWatchNextLockScreenRenderer;
-(char)hasSingleColumnConversationBarRenderer;
-(id)singleColumnConversationBarRenderer;
-(char)hasSingleColumnPlaylistPanelRenderer;
-(id)companionAdRenderer;
-(id)sectionRenderers;
-(id)feedNodeForDataSource;
-(id)contentsKeyForDataSource;
-(char)hasSingleColumnWatchNextResultsRenderer;
@end

