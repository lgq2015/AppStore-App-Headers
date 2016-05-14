/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGMarqueeAttributionViewDelegate.h>

@class IGExploreMarqueeItem, NSMutableSet, NSString;

@interface IGExploreEventViewController : IGFeedViewController_DEPRECATED <IGMarqueeAttributionViewDelegate> {

	IGExploreMarqueeItem* _marqueeItem;
	NSMutableSet* _loggedImpressions;

}

@property (nonatomic,readonly) IGExploreMarqueeItem * marqueeItem;              //@synthesize marqueeItem=_marqueeItem - In the implementation block
@property (nonatomic,retain) NSMutableSet * loggedImpressions;                  //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateScrollFromContextualFeed;
-(void)logMediaClick:(id)arg1 atIndex:(int)arg2 ;
-(void)handleLoadedContentDidChange;
-(void)logMediaImpression:(id)arg1 viewed:(char)arg2 atIndex:(int)arg3 ;
-(NSMutableSet *)loggedImpressions;
-(void)setLoggedImpressions:(NSMutableSet *)arg1 ;
-(void)marqueeAttributionView:(id)arg1 didTapUsername:(id)arg2 ;
-(void)configureMarqueeContextView;
-(void)configureMarqueeAttributionView;
-(IGExploreMarqueeItem *)marqueeItem;
-(id)initWithMarqueeItem:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

