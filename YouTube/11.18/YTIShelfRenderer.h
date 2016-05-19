/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>
#import <YouTube/YTInnerTubeSectionRenderer.h>

@class NSString, YTIFormattedString, YTIThumbnailDetails, YTINavigationEndpoint, YTIShelfSupportedRenderers, YTISubscribeButtonRenderer, YTIShelfContextualItemsSupportedRenderers, NSData, PBMutableArray, YTIServiceEndpoint, YTIShelfMenuSupportedRenderers, YTIFeedbackElicitationSingleQuestionSupportedRenderers, YTIIcon, YTIShelfPrivacySupportedRenderers, YTIAssociatedGameSupportedRenderers, YTIShelfHeaderStyle, YTIShelfSubscribeButtonSupportedRenderers, YTIShelfAutoNavToggleSupportedRenderers, YTIShelfPlayAllButtonSupportedRenderers;

@interface YTIShelfRenderer : PBGeneratedMessage <YTInnerTubeSectionRenderer>

@property (nonatomic,readonly) int type; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) YTIFormattedString * title; 
@property (assign,nonatomic) char hasThumbnail; 
@property (nonatomic,retain) YTIThumbnailDetails * thumbnail; 
@property (assign,nonatomic) char hasEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * endpoint; 
@property (assign,nonatomic) char hasPlayEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * playEndpoint; 
@property (assign,nonatomic) char hasContent; 
@property (nonatomic,retain) YTIShelfSupportedRenderers * content; 
@property (assign,nonatomic) char hasSubscribeButtonRenderer; 
@property (nonatomic,retain) YTISubscribeButtonRenderer * subscribeButtonRenderer; 
@property (assign,nonatomic) char hasDismissal; 
@property (nonatomic,retain) NSString * dismissal; 
@property (assign,nonatomic) char hasContextualItems; 
@property (nonatomic,retain) YTIShelfContextualItemsSupportedRenderers * contextualItems; 
@property (assign,nonatomic) char hasSubtitle; 
@property (nonatomic,retain) YTIFormattedString * subtitle; 
@property (assign,nonatomic) char hasTitleAnnotation; 
@property (nonatomic,retain) YTIFormattedString * titleAnnotation; 
@property (assign,nonatomic) char hasDebugHtml; 
@property (nonatomic,retain) NSString * debugHtml; 
@property (assign,nonatomic) char hasActionAnnotation; 
@property (nonatomic,retain) YTIFormattedString * actionAnnotation; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasServiceEndpointsArray; 
@property (nonatomic,retain) PBMutableArray * serviceEndpointsArray; 
@property (assign,nonatomic) char hasShelfFeedbackEndpoint; 
@property (nonatomic,retain) YTIServiceEndpoint * shelfFeedbackEndpoint; 
@property (assign,nonatomic) char hasMenu; 
@property (nonatomic,retain) YTIShelfMenuSupportedRenderers * menu; 
@property (assign,nonatomic) char hasGuidedHelpShelfType; 
@property (assign,nonatomic) int guidedHelpShelfType; 
@property (assign,nonatomic) char hasDismissalFollowUpQuestion; 
@property (nonatomic,retain) YTIFeedbackElicitationSingleQuestionSupportedRenderers * dismissalFollowUpQuestion; 
@property (assign,nonatomic) char hasIcon; 
@property (nonatomic,retain) YTIIcon * icon; 
@property (assign,nonatomic) char hasHideHeader; 
@property (assign,nonatomic) char hideHeader; 
@property (assign,nonatomic) char hasPrivacySetting; 
@property (nonatomic,retain) YTIShelfPrivacySupportedRenderers * privacySetting; 
@property (assign,nonatomic) char hasAssociatedGame; 
@property (nonatomic,retain) YTIAssociatedGameSupportedRenderers * associatedGame; 
@property (assign,nonatomic) char hasBadgesArray; 
@property (nonatomic,retain) PBMutableArray * badgesArray; 
@property (assign,nonatomic) char hasHeaderStyle; 
@property (nonatomic,retain) YTIShelfHeaderStyle * headerStyle; 
@property (assign,nonatomic) char hasImpressionEndpointsArray; 
@property (nonatomic,retain) PBMutableArray * impressionEndpointsArray; 
@property (assign,nonatomic) char hasSubscribeButton; 
@property (nonatomic,retain) YTIShelfSubscribeButtonSupportedRenderers * subscribeButton; 
@property (assign,nonatomic) char hasAutonavToggle; 
@property (nonatomic,retain) YTIShelfAutoNavToggleSupportedRenderers * autonavToggle; 
@property (assign,nonatomic) char hasPlayAllButton; 
@property (nonatomic,retain) YTIShelfPlayAllButtonSupportedRenderers * playAllButton; 
+(id)descriptor;
-(id)sectionRendererDataSourceWithService:(id)arg1 params:(id)arg2 ;
-(char)shouldTrimWithMaxItemCount:(unsigned)arg1 ;
-(int)type;
@end

