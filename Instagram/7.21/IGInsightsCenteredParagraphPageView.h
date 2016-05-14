/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class UICollectionView, UIPageControl, NSArray, UIView, IGInsightsLoggingHelper, NSString;

@interface IGInsightsCenteredParagraphPageView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	UICollectionView* _collectionView;
	UIPageControl* _pageControl;
	NSArray* _paragraphUnits;
	int _currentLayoutIndex;
	UIView* _bottomSeparator;
	IGInsightsLoggingHelper* _loggingHelper;
	unsigned _surface;
	CGSize _unitSize;

}

@property (nonatomic,retain) UICollectionView * collectionView;                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                          //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,copy) NSArray * paragraphUnits;                               //@synthesize paragraphUnits=_paragraphUnits - In the implementation block
@property (assign,nonatomic) int currentLayoutIndex;                               //@synthesize currentLayoutIndex=_currentLayoutIndex - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                             //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (assign,nonatomic) CGSize unitSize;                                      //@synthesize unitSize=_unitSize - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;              //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (assign,nonatomic) unsigned surface;                                     //@synthesize surface=_surface - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateWidth:(float)arg1 ;
-(id)initWithParagraphUnits:(id)arg1 loggingHelper:(id)arg2 surface:(unsigned)arg3 ;
-(void)setSurface:(unsigned)arg1 ;
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(void)setParagraphUnits:(NSArray *)arg1 ;
-(id)getCollectionViewFlowLayout;
-(void)initializePageControl;
-(void)logPageDisplayedAtIndex:(unsigned)arg1 ;
-(void)pageControlValueChanged:(id)arg1 ;
-(void)setUnitSize:(CGSize)arg1 ;
-(void)setCurrentLayoutIndex:(int)arg1 ;
-(int)currentLayoutIndex;
-(CGSize)unitSize;
-(NSArray *)paragraphUnits;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UIPageControl *)pageControl;
-(unsigned)surface;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
@end

