/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>
#import <YouTube/YTShareSectionRenderer.h>
#import <YouTube/YTInnerTubeSectionRenderers.h>

@class NSString, PBMutableArray, NSData, YTIButtonSupportedRenderers, YTIConnectionsOverflowMenuSupportedRenderers, YTIFormattedString, YTIAddConnectionButtonSupportedRenderers, YTIConnectionsPromoSupportedRenderers;

@interface YTIConnectionSectionRenderer : PBGeneratedMessage <YTShareSectionRenderer, YTInnerTubeSectionRenderers>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasContactsArray; 
@property (nonatomic,retain) PBMutableArray * contactsArray; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasSendButton; 
@property (nonatomic,retain) YTIButtonSupportedRenderers * sendButton; 
@property (assign,nonatomic) char hasConnectionsOverflowMenu; 
@property (nonatomic,retain) YTIConnectionsOverflowMenuSupportedRenderers * connectionsOverflowMenu; 
@property (assign,nonatomic) char hasContentsArray; 
@property (nonatomic,retain) PBMutableArray * contentsArray; 
@property (assign,nonatomic) char hasMaxSelectableContacts; 
@property (assign,nonatomic) int maxSelectableContacts; 
@property (assign,nonatomic) char hasMaxContactsError; 
@property (nonatomic,retain) YTIFormattedString * maxContactsError; 
@property (assign,nonatomic) char hasMaxContactsErrorConfirm; 
@property (nonatomic,retain) YTIFormattedString * maxContactsErrorConfirm; 
@property (assign,nonatomic) char hasWaitTimeForSendShareResponseMs; 
@property (assign,nonatomic) long long waitTimeForSendShareResponseMs; 
@property (assign,nonatomic) char hasUseWaitTimeForSendShareResponse; 
@property (assign,nonatomic) char useWaitTimeForSendShareResponse; 
@property (assign,nonatomic) char hasAddConnectionButton; 
@property (nonatomic,retain) YTIAddConnectionButtonSupportedRenderers * addConnectionButton; 
@property (assign,nonatomic) char hasPromoRenderer; 
@property (nonatomic,retain) YTIConnectionsPromoSupportedRenderers * promoRenderer; 
+(id)descriptor;
-(id)buttonRenderer;
-(id)sectionRendererDataSourceWithService:(id)arg1 params:(id)arg2 ;
-(id)sectionRenderers;
@end

