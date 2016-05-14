/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <UIKit/UIViewController.h>
#import <Translate/GOOPanelViewControllerChild.h>
#import <Translate/GOOSideViewProfileDataSource.h>
#import <Translate/GOOSideViewCarouselViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Translate/GOOSideViewProfileContainerDelegate.h>

@protocol GOOSideViewProfileDataSource, GOOSideViewItemDataSource, GOOSideViewControllerDelegate, GOOSideViewProfile;
@class GOOSideViewContentView, GOOSideViewCollectionDataSource, NSIndexPath, NSArray, QTMColorGroup, NSString;

@interface GOOSideViewController : UIViewController <GOOPanelViewControllerChild, GOOSideViewProfileDataSource, GOOSideViewCarouselViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, GOOSideViewProfileContainerDelegate> {

	GOOSideViewContentView* _contentView;
	int _viewMode;
	GOOSideViewCollectionDataSource* _profileCollectionDataSource;
	GOOSideViewCollectionDataSource* _itemCollectionDataSource;
	NSIndexPath* _pendingSelectedItemIndexPath;
	CGPoint _pendingItemsContentOffset;
	char _disableAccountSwitching;
	id<GOOSideViewProfileDataSource> _profileDataSource;
	id<GOOSideViewItemDataSource> _itemDataSource;
	id<GOOSideViewControllerDelegate> _delegate;
	NSArray* _supportedActions;
	id<GOOSideViewProfile> _selectedProfile;
	QTMColorGroup* _colorGroup;

}

@property (assign,nonatomic,__weak) id<GOOSideViewProfileDataSource> profileDataSource;              //@synthesize profileDataSource=_profileDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<GOOSideViewItemDataSource> itemDataSource;                    //@synthesize itemDataSource=_itemDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<GOOSideViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char disableAccountSwitching;                                           //@synthesize disableAccountSwitching=_disableAccountSwitching - In the implementation block
@property (nonatomic,retain) NSArray * supportedActions;                                             //@synthesize supportedActions=_supportedActions - In the implementation block
@property (nonatomic,retain) id<GOOSideViewProfile> selectedProfile;                                 //@synthesize selectedProfile=_selectedProfile - In the implementation block
@property (nonatomic,retain) QTMColorGroup * colorGroup;                                             //@synthesize colorGroup=_colorGroup - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setColorGroup:(QTMColorGroup *)arg1 ;
-(QTMColorGroup *)colorGroup;
-(void)panelViewController:(id)arg1 didHidePanelViewController:(id)arg2 ;
-(id<GOOSideViewProfile>)selectedProfile;
-(void)carouselView:(id)arg1 willChangeViewMode:(int)arg2 ;
-(id)sideViewContainer:(id)arg1 profileAtIndex:(int)arg2 ;
-(void)carouselView:(id)arg1 didSelectProfile:(id)arg2 atIndex:(int)arg3 ;
-(void)carouselViewDidFinishSelectingProfile:(id)arg1 ;
-(int)numberOfProfilesInSideViewContainer:(id)arg1 ;
-(void)setSelectedProfile:(id<GOOSideViewProfile>)arg1 ;
-(void)updateMultipleSelectionState;
-(void)handleHeaderButtonTapped:(id)arg1 ;
-(void)updateContentViewDisplayOptions;
-(char)disableAccountSwitching;
-(void)switchToViewMode:(int)arg1 ;
-(int)carouselViewModeForSideViewMode:(int)arg1 ;
-(id)collectionDataSourceForViewMode:(int)arg1 ;
-(int)appearDirectionForViewMode:(int)arg1 ;
-(void)selectItemAtIndexPath:(id)arg1 ;
-(int)sideViewModeForCarouselViewMode:(int)arg1 ;
-(void)beginSwitchToProfileAtIndex:(int)arg1 notifyDelegateFinished:(char)arg2 ;
-(void)notifyDelegateSwitchingFinished;
-(id)collectionDelegateFlowLayoutForViewMode:(int)arg1 ;
-(void)endSwitchToProfile:(id)arg1 ;
-(id<GOOSideViewItemDataSource>)itemDataSource;
-(void)numberOfProfilesChangedForProfileDataSource:(id)arg1 ;
-(void)profileDataSource:(id)arg1 didChangeProfile:(id)arg2 atIndex:(int)arg3 ;
-(void)deselectItemAtIndexPath:(id)arg1 ;
-(void)setItemDataSource:(id<GOOSideViewItemDataSource>)arg1 ;
-(void)reloadItemData;
-(void)setDisableAccountSwitching:(char)arg1 ;
-(id)actionsForSection:(int)arg1 ;
-(id<GOOSideViewProfileDataSource>)profileDataSource;
-(void)setProfileDataSource:(id<GOOSideViewProfileDataSource>)arg1 ;
-(NSArray *)supportedActions;
-(void)setSupportedActions:(NSArray *)arg1 ;
-(void)setDelegate:(id<GOOSideViewControllerDelegate>)arg1 ;
-(id<GOOSideViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidAppear:(char)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(void)scrollToItemAtIndexPath:(id)arg1 animated:(char)arg2 ;
@end

