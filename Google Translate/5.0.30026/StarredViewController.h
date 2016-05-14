/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <Translate/QTMCollectionViewController.h>
#import <Translate/GOONavigationCustomization.h>
#import <Translate/QTMCollectionViewModelDelegate.h>
#import <Translate/GTRTranslationHistoryContentViewDelegate.h>

@protocol GTRResultViewControllerDelegate;
@class NSMutableArray, GTRStarredHintView, NSString, GOONavigationStyle, UIScrollView, NSSet, UIView;

@interface StarredViewController : QTMCollectionViewController <GOONavigationCustomization, QTMCollectionViewModelDelegate, GTRTranslationHistoryContentViewDelegate> {

	NSMutableArray* unstarredItems_;
	char _reloadStarTable;
	id<GTRResultViewControllerDelegate> _delegate;
	int _itemCount;
	GTRStarredHintView* _hintView;

}

@property (assign,nonatomic,__weak) id<GTRResultViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int itemCount;                                                    //@synthesize itemCount=_itemCount - In the implementation block
@property (nonatomic,retain) GTRStarredHintView * hintView;                                    //@synthesize hintView=_hintView - In the implementation block
@property (assign,nonatomic) char reloadStarTable;                                             //@synthesize reloadStarTable=_reloadStarTable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GOONavigationStyle * navigationStyle; 
@property (nonatomic,readonly) UIScrollView * navigationPrimaryScrollView; 
@property (nonatomic,readonly) UIEdgeInsets navigationPrimaryScrollInsets; 
@property (nonatomic,readonly) NSSet * navigationSecondaryScrollViews; 
@property (nonatomic,readonly) UIView * navigationCustomHeaderBackgroundView; 
@property (nonatomic,readonly) UIView * navigationBannerView; 
-(char)didTapStarButtonOfTranslatedItem:(id)arg1 previouslyStarred:(char)arg2 ;
-(GOONavigationStyle *)navigationStyle;
-(void)starredDidChange:(id)arg1 ;
-(void)setHintView:(GTRStarredHintView *)arg1 ;
-(GTRStarredHintView *)hintView;
-(char)reloadStarTable;
-(void)reloadStarredItems;
-(void)deleteUnstarredItems;
-(void)setReloadStarTable:(char)arg1 ;
-(char)didTapTranslationHistoryObject:(id)arg1 ;
-(char)doesHaveDictionaryResults:(id)arg1 ;
-(int)itemCount;
-(void)setDelegate:(id<GTRResultViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<GTRResultViewControllerDelegate>)delegate;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setItemCount:(int)arg1 ;
@end

