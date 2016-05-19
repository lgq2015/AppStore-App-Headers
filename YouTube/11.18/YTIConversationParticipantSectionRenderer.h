/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>
#import <YouTube/YTInnerTubeSectionRenderer.h>

@class NSString, PBMutableArray, YTINavigationEndpoint, YTIFormattedString, NSData;

@interface YTIConversationParticipantSectionRenderer : PBGeneratedMessage <YTInnerTubeSectionRenderer>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasParticipantsArray; 
@property (nonatomic,retain) PBMutableArray * participantsArray; 
@property (assign,nonatomic) char hasConversationEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * conversationEndpoint; 
@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) YTIFormattedString * title; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
+(id)descriptor;
-(id)sectionRendererDataSourceWithService:(id)arg1 params:(id)arg2 ;
@end

