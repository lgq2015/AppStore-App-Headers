/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol WAThumbsTableViewCellDelegate;
@class NSMutableArray, NSBlockOperation, NSMutableSet, NSArray;

@interface WAThumbsTableViewCell : UITableViewCell {

	NSMutableArray* _thumbnailViews;
	NSBlockOperation* _thumbnailLoadingOp;
	NSMutableArray* _thumbnails;
	int _loadingID;
	NSMutableSet* _selectedIndexes;
	id<WAThumbsTableViewCellDelegate> _delegate;
	int _thumbnailCount;

}

@property (assign,nonatomic,__weak) id<WAThumbsTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int thumbnailCount;                                           //@synthesize thumbnailCount=_thumbnailCount - In the implementation block
@property (nonatomic,readonly) NSArray * thumbnailViews;                                     //@synthesize thumbnailViews=_thumbnailViews - In the implementation block
+(int)thumbnailCountForRowOfWidth:(float)arg1 ;
-(void)loadThumbnailsForMessages:(id)arg1 inQueue:(id)arg2 ;
-(void)setSelectedIndexes:(id)arg1 ;
-(void)setThumbnailState:(unsigned)arg1 atIndex:(unsigned)arg2 ;
-(void)cancelThumbnailLoading;
-(void)loadThumbnailsForMessages:(id)arg1 loadingID:(int)arg2 inOperation:(id)arg3 ;
-(unsigned)thumbnailStateAtIndex:(unsigned)arg1 ;
-(int)thumbnailCount;
-(NSArray *)thumbnailViews;
-(void)cellTapped:(id)arg1 ;
-(void)setDelegate:(id<WAThumbsTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<WAThumbsTableViewCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)refreshSelectionState;
-(void)setThumbnails:(id)arg1 ;
@end

