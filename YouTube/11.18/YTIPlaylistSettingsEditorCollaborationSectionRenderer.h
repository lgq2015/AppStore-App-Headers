/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIFormattedString, YTIPlaylistContributionState, YTIPlaylistContributorsList, YTIPlaylistSettingsEditorContributorsSupportedContinuations, YTIPlaylistSettingsEditorCreateInviteLinkSupportedRenderers, YTIPlaylistSettingsEditorButtonSupportedRenderers;

@interface YTIPlaylistSettingsEditorCollaborationSectionRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) YTIFormattedString * title; 
@property (assign,nonatomic) char hasState; 
@property (nonatomic,retain) YTIPlaylistContributionState * state; 
@property (assign,nonatomic) char hasContributorList; 
@property (nonatomic,retain) YTIPlaylistContributorsList * contributorList; 
@property (assign,nonatomic) char hasBlockedList; 
@property (nonatomic,retain) YTIPlaylistContributorsList * blockedList; 
@property (assign,nonatomic) char hasPeopleWithInviteLink; 
@property (nonatomic,retain) YTIFormattedString * peopleWithInviteLink; 
@property (assign,nonatomic) char hasContinuation; 
@property (nonatomic,retain) YTIPlaylistSettingsEditorContributorsSupportedContinuations * continuation; 
@property (assign,nonatomic) char hasCreateInviteLink; 
@property (nonatomic,retain) YTIPlaylistSettingsEditorCreateInviteLinkSupportedRenderers * createInviteLink; 
@property (assign,nonatomic) char hasCreateInviteLinkDescription; 
@property (nonatomic,retain) YTIFormattedString * createInviteLinkDescription; 
@property (assign,nonatomic) char hasCreateInviteLinkButton; 
@property (nonatomic,retain) YTIPlaylistSettingsEditorButtonSupportedRenderers * createInviteLinkButton; 
@property (assign,nonatomic) char hasRevokeInviteLinksDescription; 
@property (nonatomic,retain) YTIFormattedString * revokeInviteLinksDescription; 
@property (assign,nonatomic) char hasRevokeInviteLinksButton; 
@property (nonatomic,retain) YTIPlaylistSettingsEditorButtonSupportedRenderers * revokeInviteLinksButton; 
@property (assign,nonatomic) char hasHasInviteLinks; 
@property (assign,nonatomic) char hasInviteLinks; 
@property (assign,nonatomic) char hasShareInviteLinkButton; 
@property (nonatomic,retain) YTIPlaylistSettingsEditorButtonSupportedRenderers * shareInviteLinkButton; 
@property (assign,nonatomic) char hasShareInviteLinkDescription; 
@property (nonatomic,retain) YTIFormattedString * shareInviteLinkDescription; 
+(id)descriptor;
@end

