/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>
#import <YouTube/YTConversationItemRenderer.h>

@class NSString, YTIFormattedString, YTIThumbnailDetails, YTIConversationUserBadge, YTIConversationItemHeartSupportedRenderers, PBMutableArray, YTIMenuSupportedRenderers, NSData, YTINavigationEndpoint;

@interface YTIConversationTextItemRenderer : PBGeneratedMessage <YTConversationItemRenderer>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long timestamp; 
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) long long timestamp; 
@property (assign,nonatomic) char hasReferenceUserText; 
@property (nonatomic,retain) YTIFormattedString * referenceUserText; 
@property (assign,nonatomic) char hasReferenceUserThumbnail; 
@property (nonatomic,retain) YTIThumbnailDetails * referenceUserThumbnail; 
@property (assign,nonatomic) char hasPostText; 
@property (nonatomic,retain) YTIFormattedString * postText; 
@property (assign,nonatomic) char hasReferenceUserBadge; 
@property (nonatomic,retain) YTIConversationUserBadge * referenceUserBadge; 
@property (assign,nonatomic) char hasHeartRenderer; 
@property (nonatomic,retain) YTIConversationItemHeartSupportedRenderers * heartRenderer; 
@property (assign,nonatomic) char hasReferenceUserBadgesArray; 
@property (nonatomic,retain) PBMutableArray * referenceUserBadgesArray; 
@property (assign,nonatomic) char hasReferenceUserConnectionMenu; 
@property (nonatomic,retain) YTIMenuSupportedRenderers * referenceUserConnectionMenu; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasContactMenuEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * contactMenuEndpoint; 
@property (assign,nonatomic) char hasEventMenuEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * eventMenuEndpoint; 
@property (assign,nonatomic) char hasIsHighlighted; 
@property (assign,nonatomic) char isHighlighted; 
@property (assign,nonatomic) char hasShowChatBubble; 
@property (assign,nonatomic) char showChatBubble; 
@property (assign,nonatomic) char hasUniqueId; 
@property (nonatomic,retain) NSString * uniqueId; 
@property (assign,nonatomic) char hasProtoCreationTimestamp; 
@property (assign,nonatomic) long long protoCreationTimestamp; 
+(id)descriptor;
@end

