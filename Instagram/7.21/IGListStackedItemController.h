/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListCollectionContext.h>
#import <Instagram/IGListDisplayDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGListSupplementaryViewSource;
@class NSOrderedSet, NSArray, NSCountedSet, NSString;

@interface IGListStackedItemController : IGListItemController <IGListCollectionContext, IGListDisplayDelegate, IGListItemType> {

	NSOrderedSet* _itemControllers;
	id<IGListSupplementaryViewSource> _supplementaryViewSource;
	NSArray* _itemControllersForItems;
	NSArray* _itemControllerOffsets;
	unsigned _flattenedNumberOfItems;
	NSCountedSet* _visibleItemControllers;

}

@property (nonatomic,readonly) NSOrderedSet * itemControllers;                                         //@synthesize itemControllers=_itemControllers - In the implementation block
@property (nonatomic,readonly) id<IGListSupplementaryViewSource> supplementaryViewSource;              //@synthesize supplementaryViewSource=_supplementaryViewSource - In the implementation block
@property (nonatomic,copy) NSArray * itemControllersForItems;                                          //@synthesize itemControllersForItems=_itemControllersForItems - In the implementation block
@property (nonatomic,copy) NSArray * itemControllerOffsets;                                            //@synthesize itemControllerOffsets=_itemControllerOffsets - In the implementation block
@property (assign,nonatomic) unsigned flattenedNumberOfItems;                                          //@synthesize flattenedNumberOfItems=_flattenedNumberOfItems - In the implementation block
@property (nonatomic,readonly) NSCountedSet * visibleItemControllers;                                  //@synthesize visibleItemControllers=_visibleItemControllers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize containerSize; 
-(id)displayDelegate;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 ;
-(unsigned)sectionForListItemController:(id)arg1 ;
-(id<IGListSupplementaryViewSource>)supplementaryViewSource;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id)cellClasses;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)listAdapter:(id)arg1 didScrollListItemController:(id)arg2 ;
-(unsigned)indexForCell:(id)arg1 listItemController:(id)arg2 ;
-(id)cellForItemAtIndex:(int)arg1 listItemController:(id)arg2 ;
-(id)visibleCellsForListItemController:(id)arg1 ;
-(void)deselectItemAtIndex:(int)arg1 listItemController:(id)arg2 animated:(char)arg3 ;
-(id)dequeReusableCellOfClass:(Class)arg1 forListItemController:(id)arg2 atIndex:(int)arg3 ;
-(id)dequeReusableSupplementaryViewOfKind:(id)arg1 forListItemController:(id)arg2 class:(Class)arg3 atIndex:(int)arg4 ;
-(void)reloadItemsInListItemController:(id)arg1 atIndexes:(id)arg2 ;
-(void)insertItemsInListItemController:(id)arg1 atIndexes:(id)arg2 ;
-(void)deleteItemsInListItemController:(id)arg1 atIndexes:(id)arg2 ;
-(void)reloadListItemController:(id)arg1 ;
-(void)performBatchAnimated:(char)arg1 updates:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setNavigationContext:(id)arg1 ;
-(void)setPresentationContext:(id)arg1 ;
-(NSOrderedSet *)itemControllers;
-(void)setItemControllerOffsets:(NSArray *)arg1 ;
-(void)setFlattenedNumberOfItems:(unsigned)arg1 ;
-(void)setItemControllersForItems:(NSArray *)arg1 ;
-(NSArray *)itemControllersForItems;
-(NSArray *)itemControllerOffsets;
-(unsigned)offsetForItemController:(id)arg1 ;
-(unsigned)flattenedNumberOfItems;
-(id)itemControllerForItemIndex:(unsigned)arg1 ;
-(unsigned)localIndexForItemController:(id)arg1 index:(unsigned)arg2 ;
-(id)itemIndexesForItemController:(id)arg1 indexes:(id)arg2 ;
-(NSCountedSet *)visibleItemControllers;
-(id)initWithItemControllers:(id)arg1 ;
-(void)reloadData;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
-(CGSize)containerSize;
@end

