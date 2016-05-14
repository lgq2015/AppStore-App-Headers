/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGInsightsHeaderTabPageViewDataSource;
@class IGInsightsHeaderView, UIView, NSArray;

@interface IGInsightsHeaderTabPageView : UIView {

	id<IGInsightsHeaderTabPageViewDataSource> _dataSource;
	IGInsightsHeaderView* _headerView;
	UIView* _contentView;
	NSArray* _tabButtons;
	unsigned _activeIndex;
	UIEdgeInsets _contentViewPaddings;

}

@property (nonatomic,retain) IGInsightsHeaderView * headerView;                                        //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                     //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy) NSArray * tabButtons;                                                       //@synthesize tabButtons=_tabButtons - In the implementation block
@property (assign,nonatomic) unsigned activeIndex;                                                     //@synthesize activeIndex=_activeIndex - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentViewPaddings;                                         //@synthesize contentViewPaddings=_contentViewPaddings - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsHeaderTabPageViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)selectButton:(id)arg1 ;
-(NSArray *)tabButtons;
-(void)setActiveIndex:(unsigned)arg1 ;
-(unsigned)activeIndex;
-(void)setUpTitle;
-(void)setUpContentView;
-(void)buttonClick:(id)arg1 ;
-(UIEdgeInsets)contentViewPaddings;
-(void)layoutTabButtonsWithHeaderViewHeight:(float)arg1 ;
-(void)setUpTabButtons;
-(void)setUpPaddings;
-(void)unselectButton:(id)arg1 ;
-(void)setTabButtons:(NSArray *)arg1 ;
-(void)setContentViewPaddings:(UIEdgeInsets)arg1 ;
-(void)setHeaderDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<IGInsightsHeaderTabPageViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGInsightsHeaderTabPageViewDataSource>)dataSource;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(IGInsightsHeaderView *)headerView;
-(void)setHeaderView:(IGInsightsHeaderView *)arg1 ;
@end

