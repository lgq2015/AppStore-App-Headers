/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableSet;

@interface IGExploreCollectionViewLayout : UICollectionViewFlowLayout {

	NSMutableSet* _removedIndexPaths;

}

@property (nonatomic,retain) NSMutableSet * removedIndexPaths;              //@synthesize removedIndexPaths=_removedIndexPaths - In the implementation block
-(void)setRemovedIndexPaths:(NSMutableSet *)arg1 ;
-(NSMutableSet *)removedIndexPaths;
-(id)init;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
@end

