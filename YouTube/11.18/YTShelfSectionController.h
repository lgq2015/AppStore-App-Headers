/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTInnerTubeSectionController.h>
#import <YouTube/GOOActionSheetDelegate.h>

@protocol YTServices;
@class YTShelfHeaderView, YTAutonavHeaderView, NSMutableArray, YTVerticalShelfExpandView, YTIShelfRenderer, NSString;

@interface YTShelfSectionController : YTInnerTubeSectionController <GOOActionSheetDelegate> {

	YTShelfHeaderView* _headerView;
	YTAutonavHeaderView* _autonavHeaderView;
	NSMutableArray* _thumbnailControllers;
	YTVerticalShelfExpandView* _expandView;
	char _visibilityUpdated;
	char _removingSpacerCell;
	NSMutableArray* _spacerCellEntries;
	char _forceExpand;
	id<YTServices> _services;
	char _expanded;
	YTIShelfRenderer* _shelfRenderer;

}

@property (nonatomic,retain) YTIShelfRenderer * shelfRenderer;              //@synthesize shelfRenderer=_shelfRenderer - In the implementation block
@property (assign,nonatomic) char expanded;                                 //@synthesize expanded=_expanded - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)sizeForItemAtIndex:(int)arg1 withSize:(CGSize)arg2 ;
-(char)shouldReloadOnBoundsChange;
-(void)restoreWithSelf:(id)arg1 ;
-(void)updateCell:(id)arg1 forIndex:(int)arg2 ;
-(UIEdgeInsets)insetWithInset:(UIEdgeInsets)arg1 ;
-(Class)classForHeader;
-(void)updateHeader:(id)arg1 ;
-(CGSize)sizeForHeaderWithSize:(CGSize)arg1 ;
-(void)didSelectItemAtIndex:(int)arg1 fromView:(id)arg2 ;
-(void)loadWithModel:(id)arg1 ;
-(void)loadThumbnails;
-(char)hasOverflowButton;
-(char)shouldDisplayShowAllButton;
-(char)shouldDisplayMoreButton;
-(int)numberOfGridColumns;
-(void)setupSpacerCells;
-(void)didRemoveEntriesAtIndices:(id)arg1 ;
-(int)numberOfColumnsHorizontal;
-(float)sectionPaddingX;
-(void)navigateToShowAllEndpoint;
-(YTIShelfRenderer *)shelfRenderer;
-(char)handleRemoveEntryEvent:(id)arg1 ;
-(int)numberOfColumnsMaxHorizontal;
-(void)clearSpacerCells;
-(float)columnMinWidth;
-(void)didToggleAutoplay;
-(void)navigateToShelfEndpoint;
-(void)showOverflowMenu:(id)arg1 ;
-(id)initWithServices:(id)arg1 dataServices:(id)arg2 service:(id)arg3 parentResponder:(id)arg4 ;
-(id)paramsForSectionRenderer;
-(void)setShelfRenderer:(YTIShelfRenderer *)arg1 ;
-(id)headerView;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(void)expand;
-(unsigned)maxItemCount;
-(char)isExpandable;
@end

