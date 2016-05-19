/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/GPPView.h>

@class UIView;

@interface GPPNativeShareNavigationBar : GPPView {

	UIView* _leftView;
	UIView* _rightView;
	UIView* _titleView;
	UIEdgeInsets _viewInsets;

}

@property (nonatomic,retain) UIView * leftView;                    //@synthesize leftView=_leftView - In the implementation block
@property (nonatomic,retain) UIView * rightView;                   //@synthesize rightView=_rightView - In the implementation block
@property (nonatomic,retain) UIView * titleView;                   //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets viewInsets;              //@synthesize viewInsets=_viewInsets - In the implementation block
-(void)setViewInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)viewInsets;
-(void)layoutSubviews;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(void)setLeftView:(UIView *)arg1 ;
-(void)setRightView:(UIView *)arg1 ;
-(UIView *)leftView;
-(UIView *)rightView;
@end

