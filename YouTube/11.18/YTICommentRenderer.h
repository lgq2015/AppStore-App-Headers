/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIFormattedString, YTIThumbnailDetails, YTINavigationEndpoint, YTIMenuSupportedRenderers, NSString, YTICommentActionButtonsSupportedRenderers, YTIBadgeSupportedRenderers, NSData, YTICommentReplyFormSupportedRenderers, YTIBackstageAttachmentSupportedRenderers;

@interface YTICommentRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasAuthorText; 
@property (nonatomic,retain) YTIFormattedString * authorText; 
@property (assign,nonatomic) char hasAuthorThumbnail; 
@property (nonatomic,retain) YTIThumbnailDetails * authorThumbnail; 
@property (assign,nonatomic) char hasAuthorEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * authorEndpoint; 
@property (assign,nonatomic) char hasContentText; 
@property (nonatomic,retain) YTIFormattedString * contentText; 
@property (assign,nonatomic) char hasPublishedTimeText; 
@property (nonatomic,retain) YTIFormattedString * publishedTimeText; 
@property (assign,nonatomic) char hasIsLiked; 
@property (assign,nonatomic) char isLiked; 
@property (assign,nonatomic) char hasLikeCount; 
@property (assign,nonatomic) int likeCount; 
@property (assign,nonatomic) char hasActionMenu; 
@property (nonatomic,retain) YTIMenuSupportedRenderers * actionMenu; 
@property (assign,nonatomic) char hasCommentId; 
@property (nonatomic,retain) NSString * commentId; 
@property (assign,nonatomic) char hasActionButtons; 
@property (nonatomic,retain) YTICommentActionButtonsSupportedRenderers * actionButtons; 
@property (assign,nonatomic) char hasAuthorIsChannelOwner; 
@property (assign,nonatomic) char authorIsChannelOwner; 
@property (assign,nonatomic) char hasLinkedCommentText; 
@property (nonatomic,retain) YTIFormattedString * linkedCommentText; 
@property (assign,nonatomic) char hasCurrentUserReplyThumbnail; 
@property (nonatomic,retain) YTIThumbnailDetails * currentUserReplyThumbnail; 
@property (assign,nonatomic) char hasEditableContentText; 
@property (nonatomic,retain) YTIFormattedString * editableContentText; 
@property (assign,nonatomic) char hasTipjarSupportedText; 
@property (nonatomic,retain) YTIFormattedString * tipjarSupportedText; 
@property (assign,nonatomic) char hasReplyDisabledNoticeText; 
@property (nonatomic,retain) YTIFormattedString * replyDisabledNoticeText; 
@property (assign,nonatomic) char hasVoteStatus; 
@property (assign,nonatomic) int voteStatus; 
@property (assign,nonatomic) char hasAuthorVerifiedBadge; 
@property (nonatomic,retain) YTIBadgeSupportedRenderers * authorVerifiedBadge; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasAuthorId; 
@property (nonatomic,retain) NSString * authorId; 
@property (assign,nonatomic) char hasReplyForm; 
@property (nonatomic,retain) YTICommentReplyFormSupportedRenderers * replyForm; 
@property (assign,nonatomic) char hasBackstageAttachment; 
@property (nonatomic,retain) YTIBackstageAttachmentSupportedRenderers * backstageAttachment; 
@property (assign,nonatomic) char hasInitialReplyText; 
@property (nonatomic,retain) YTIFormattedString * initialReplyText; 
@property (assign,nonatomic) char hasPrologueText; 
@property (nonatomic,retain) YTIFormattedString * prologueText; 
@property (assign,nonatomic) char hasViewerIsAuthor; 
@property (assign,nonatomic) char viewerIsAuthor; 
@property (assign,nonatomic) char hasVoteCount; 
@property (nonatomic,retain) YTIFormattedString * voteCount; 
@property (assign,nonatomic) char hasAvatarSize; 
@property (assign,nonatomic) int avatarSize; 
@property (assign,nonatomic) char hasBackgroundStyle; 
@property (assign,nonatomic) int backgroundStyle; 
+(id)descriptor;
@end

