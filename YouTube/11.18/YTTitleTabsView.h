/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface YTTitleTabsView : UIView {

	UIView* _titleButton;
	UIView* _tabsView;
	CGSize _tabsViewSize;

}

@property (nonatomic,retain) UIView * titleButton;              //@synthesize titleButton=_titleButton - In the implementation block
@property (nonatomic,retain) UIView * tabsView;                 //@synthesize tabsView=_tabsView - In the implementation block
@property (assign,nonatomic) CGSize tabsViewSize;               //@synthesize tabsViewSize=_tabsViewSize - In the implementation block
-(void)setTabsView:(UIView *)arg1 ;
-(UIView *)tabsView;
-(CGSize)tabsViewSize;
-(void)setTabsViewSize:(CGSize)arg1 ;
-(void)setTitleButton:(UIView *)arg1 ;
-(UIView *)titleButton;
-(void)layoutSubviews;
@end

