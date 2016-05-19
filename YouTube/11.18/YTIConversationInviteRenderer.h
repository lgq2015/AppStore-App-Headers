/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class PBMutableArray, YTIFormattedString, YTINavigationEndpoint, YTICompactConversationParticipantSectionSupportedRenderers, NSData, YTIConversationReplySupportedRenderers, YTIServiceEndpoint;

@interface YTIConversationInviteRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasItemsArray; 
@property (nonatomic,retain) PBMutableArray * itemsArray; 
@property (assign,nonatomic) char hasConversationName; 
@property (nonatomic,retain) YTIFormattedString * conversationName; 
@property (assign,nonatomic) char hasInviteMessage; 
@property (nonatomic,retain) YTIFormattedString * inviteMessage; 
@property (assign,nonatomic) char hasConfirmJoinEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * confirmJoinEndpoint; 
@property (assign,nonatomic) char hasParticipants; 
@property (nonatomic,retain) YTICompactConversationParticipantSectionSupportedRenderers * participants; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasReply; 
@property (nonatomic,retain) YTIConversationReplySupportedRenderers * reply; 
@property (assign,nonatomic) char hasSkipConfirmEndpoint; 
@property (nonatomic,retain) YTIServiceEndpoint * skipConfirmEndpoint; 
+(id)descriptor;
@end

