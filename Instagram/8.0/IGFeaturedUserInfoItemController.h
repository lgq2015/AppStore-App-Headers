/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGExploreCellDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGRaindropAnalyticsDelegate;
@class IGFeaturedUserInfo, NSString;

@interface IGFeaturedUserInfoItemController : IGListItemController <IGExploreCellDelegate, IGListItemType> {

	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;
	IGFeaturedUserInfo* _featuredUserInfo;
	unsigned _maxThumbnails;

}

@property (nonatomic,readonly) IGFeaturedUserInfo * featuredUserInfo;                               //@synthesize featuredUserInfo=_featuredUserInfo - In the implementation block
@property (nonatomic,readonly) unsigned maxThumbnails;                                              //@synthesize maxThumbnails=_maxThumbnails - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
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
-(void)updateCellVisibility:(id)arg1 imageView:(id)arg2 mediaIndex:(unsigned)arg3 ;
-(void)exploreCellDidTapFollow:(id)arg1 ;
-(void)exploreCellDidTapFollowing:(id)arg1 ;
-(void)exploreCell:(id)arg1 didTapMediaAtIndex:(unsigned)arg2 ;
-(void)friendStatusChanged:(id)arg1 ;
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(IGFeaturedUserInfo *)featuredUserInfo;
-(id)exploreViewModelInWidth:(float)arg1 ;
-(unsigned)maxThumbnails;
-(id)initWithMaxThumbnails:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

