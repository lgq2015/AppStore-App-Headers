/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTFeedSectionController.h>
#import <YouTube/GOOAlertViewDelegate.h>
#import <YouTube/YTAvatarImageObserverDelegate.h>
#import <YouTube/YTDistillerAddCommentCellDelegate.h>
#import <YouTube/YTDistillerCommentCellControllerDelegate.h>
#import <YouTube/YTDistillerCommentCellDelegate.h>
#import <YouTube/YTInnerTubeController.h>

@protocol YTOfflineModeProvider, YTDistillerConfig, YTResponder;
@class NSString, YTInnerTubeRequestFactory, YTCommentService, YTDistillerService, YTSystemNotifications, NSMutableDictionary, GOOActionSheet, YTIdentityController, YTUserInfoController, GOOAlertView, YTDistillerComment, YTIPrepareAccountRenderer, YTDistillerHeaderCell, YTDistillerAddCommentCell;

@interface YTDistillerCommentsFeedSectionController : YTFeedSectionController <GOOAlertViewDelegate, YTAvatarImageObserverDelegate, YTDistillerAddCommentCellDelegate, YTDistillerCommentCellControllerDelegate, YTDistillerCommentCellDelegate, YTInnerTubeController> {

	NSString* _videoID;
	NSString* _channelID;
	NSString* _linkedCommentID;
	NSString* _createCommentParams;
	int _privacyStatus;
	YTInnerTubeRequestFactory* _requestFactory;
	YTCommentService* _commentService;
	YTDistillerService* _distillerService;
	YTSystemNotifications* _systemNotifications;
	id<YTOfflineModeProvider> _offlineModeProvider;
	id<YTDistillerConfig> _config;
	NSString* _clientID;
	NSString* _clientSecret;
	NSMutableDictionary* _replyDataSources;
	char _didReceiveCommentResponse;
	int _sortOrder;
	GOOActionSheet* _sortOrderPicker;
	YTIdentityController* _identityController;
	YTUserInfoController* _userInfoController;
	GOOAlertView* _alertView;
	GOOActionSheet* _actionSheet;
	YTDistillerComment* _tappedComment;
	YTIPrepareAccountRenderer* _prepareAccountRenderer;
	char _tappedCommentIsReply;
	char _likeActionInProgress;
	char _canAddComment;
	char _hasComments;
	char _headerCellHasDisclosureArrow;
	char _canModerateComment;
	YTDistillerHeaderCell* _headerCell;
	YTDistillerAddCommentCell* _addCommentCell;
	char _expandable;
	char _expanded;
	id<YTResponder> _parentResponder;
	unsigned _headerCellCommentsCount;

}

@property (assign,nonatomic) char expandable;                                       //@synthesize expandable=_expandable - In the implementation block
@property (nonatomic,readonly) char expanded;                                       //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) unsigned headerCellCommentsCount;                      //@synthesize headerCellCommentsCount=_headerCellCommentsCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;              //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(Class)cellClassForItemAtIndex:(int)arg1 ;
-(id)cellClassesToRegister;
-(CGSize)sizeForItemAtIndex:(int)arg1 withSize:(CGSize)arg2 ;
-(void)updateCell:(id)arg1 forIndex:(int)arg2 ;
-(char)shouldHighlightItemAtIndex:(int)arg1 ;
-(char)shouldSelectItemAtIndex:(unsigned)arg1 ;
-(void)didSelectItemAtIndex:(int)arg1 fromView:(id)arg2 ;
-(void)collectionViewControllerWillAskForRefresh;
-(void)alertViewDidDisappear:(id)arg1 cancelAction:(char)arg2 ;
-(void)updateCell:(id)arg1 forEntry:(id)arg2 ;
-(void)loadWithModel:(id)arg1 ;
-(id)initWithRequestFactory:(id)arg1 commentService:(id)arg2 systemNotifications:(id)arg3 distillerService:(id)arg4 imageService:(id)arg5 offlineModeProvider:(id)arg6 config:(id)arg7 identityController:(id)arg8 userInfoController:(id)arg9 parentResponder:(id)arg10 clientID:(id)arg11 clientSecret:(id)arg12 ;
-(void)didRemoveEntriesAtIndices:(id)arg1 ;
-(void)handleEntries:(id)arg1 ;
-(char)scrollToModelMatchingBlock:(/*^block*/id)arg1 animated:(char)arg2 ;
-(void)showSortOrderPickerFromRect:(CGRect)arg1 inView:(id)arg2 ;
-(void)requestRepliesWithCommentID:(id)arg1 fromCell:(id)arg2 ;
-(void)cellDidExpand;
-(void)addComment;
-(void)setExpandable:(char)arg1 ;
-(void)setHeaderCellCommentsCount:(unsigned)arg1 ;
-(void)onError:(id)arg1 onRefresh:(char)arg2 ;
-(void)loadAvatarThumbnailForEntry:(id)arg1 inCell:(id)arg2 ;
-(void)clearReplyDataSources;
-(char)shouldFetchMoreEntries;
-(id)headerAccessibilityLabel;
-(void)updateAddCommentCell;
-(void)showCommentActionSheetInView:(id)arg1 comment:(id)arg2 isReply:(char)arg3 ;
-(void)forceUpdateOfCellAtIndex:(unsigned)arg1 ;
-(void)addCommentWithIdentity:(id)arg1 ;
-(void)checkAccountStatusForPublicActionWithIdentityBlock:(/*^block*/id)arg1 ;
-(void)didSelectCommentSortOrder:(int)arg1 ;
-(void)handleReplies:(id)arg1 forIndex:(unsigned)arg2 ;
-(id)topLevelCommentWithComment:(id)arg1 ;
-(void)replyAction;
-(void)unlikeAction;
-(void)likeAction;
-(void)showAlertViewWithType:(int)arg1 ;
-(void)removeCommentWithID:(id)arg1 isReply:(char)arg2 ;
-(void)requestComments;
-(void)removeCommentAndReplies:(id)arg1 ;
-(unsigned)headerCellCommentsCount;
-(/*^block*/id)errorLoggingBlockWithToast;
-(void)toastSuccess;
-(void)likeCommentWithID:(id)arg1 isReply:(char)arg2 ;
-(void)likeCommentWithID:(id)arg1 isReply:(char)arg2 identity:(id)arg3 ;
-(void)unlikeCommentWithID:(id)arg1 isReply:(char)arg2 ;
-(void)replyToComment:(id)arg1 ;
-(void)replyToComment:(id)arg1 identity:(id)arg2 ;
-(unsigned)replyInsertionIndexWithTopCommentIndex:(unsigned)arg1 ;
-(void)toastSuccessWithMessage:(id)arg1 ;
-(void)toastFailureWithError:(id)arg1 ;
-(void)nativeReplyToComment:(id)arg1 identity:(id)arg2 ;
-(void)nativePostCommentWithIdentity:(id)arg1 ;
-(void)deleteComment;
-(void)flagComment;
-(void)redirectToMergeIDHelpPage;
-(void)deleteCommentWithID:(id)arg1 isReply:(char)arg2 ;
-(void)flagCommentWithID:(id)arg1 isReply:(char)arg2 ;
-(id)expandedCommentRows;
-(void)avatarDidChange;
-(void)didInsertEntriesAtIndices:(id)arg1 ;
-(void)didAddEntries:(id)arg1 ;
-(void)distillerCommentsFeed:(id)arg1 didFailWithError:(id)arg2 message:(id)arg3 ;
-(char)expandable;
-(void)createChannel;
-(void)dealloc;
-(void)openURL:(id)arg1 ;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(int)numberOfItems;
-(void)refresh;
@end

