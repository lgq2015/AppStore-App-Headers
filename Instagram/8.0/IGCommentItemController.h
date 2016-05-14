/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGCommentCellInteractionDelegate.h>
#import <Instagram/IGCommentContentViewDelegate.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGCommentItemDelegate;
@class IGCommentModel, IGBulkCommentDeleteManager, IGCommentCellRevealManager, NSString;

@interface IGCommentItemController : IGListItemController <IGCommentCellInteractionDelegate, IGCommentContentViewDelegate, IGActionSheetDelegate, IGListItemType> {

	char _isCurrentUser;
	id<IGCommentItemDelegate> _delegate;
	IGCommentModel* _comment;
	int _cellActions;
	IGBulkCommentDeleteManager* _bulkDeleteManager;
	IGCommentCellRevealManager* _cellRevealManager;

}

@property (nonatomic,readonly) IGCommentModel * comment;                                    //@synthesize comment=_comment - In the implementation block
@property (nonatomic,readonly) int cellActions;                                             //@synthesize cellActions=_cellActions - In the implementation block
@property (nonatomic,readonly) IGBulkCommentDeleteManager * bulkDeleteManager;              //@synthesize bulkDeleteManager=_bulkDeleteManager - In the implementation block
@property (nonatomic,readonly) IGCommentCellRevealManager * cellRevealManager;              //@synthesize cellRevealManager=_cellRevealManager - In the implementation block
@property (assign,nonatomic) char isCurrentUser;                                            //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentItemDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)displayDelegate;
-(void)didUpdateToItem:(id)arg1 ;
-(id)supplementaryViewSource;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellClasses;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)didTapReplyForCommentCell:(id)arg1 ;
-(void)didTapReportForCommentCell:(id)arg1 ;
-(void)didTapDeleteForCommentCell:(id)arg1 ;
-(void)contentView:(id)arg1 didTapUser:(id)arg2 ;
-(void)contentView:(id)arg1 didTapText:(id)arg2 withURL:(id)arg3 ;
-(void)contentView:(id)arg1 didLongTapUser:(id)arg2 ;
-(int)actionsForComment:(id)arg1 isCurrentUser:(char)arg2 ;
-(void)prepareSubviewIndexForRemovalOfCell:(id)arg1 ;
-(void)commentDeletionFinished:(id)arg1 ;
-(int)cellActions;
-(IGBulkCommentDeleteManager *)bulkDeleteManager;
-(IGCommentCellRevealManager *)cellRevealManager;
-(id)initWithBulkDeleteManager:(id)arg1 cellRevealManager:(id)arg2 isCurrentUser:(char)arg3 ;
-(char)isCurrentUser;
-(void)setDelegate:(id<IGCommentItemDelegate>)arg1 ;
-(void)dealloc;
-(id<IGCommentItemDelegate>)delegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(void)setIsCurrentUser:(char)arg1 ;
-(IGCommentModel *)comment;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

