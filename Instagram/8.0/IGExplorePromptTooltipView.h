/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface IGExplorePromptTooltipView : UIView {

	UIView* _contentView;
	UIView* _leftBackground;
	UIView* _rightBackground;
	CGPoint _pinPoint;

}

@property (nonatomic,retain) UIView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * leftBackground;               //@synthesize leftBackground=_leftBackground - In the implementation block
@property (nonatomic,retain) UIView * rightBackground;              //@synthesize rightBackground=_rightBackground - In the implementation block
@property (assign,nonatomic) CGPoint pinPoint;                      //@synthesize pinPoint=_pinPoint - In the implementation block
-(id)initWithFrame:(CGRect)arg1 contentView:(id)arg2 ;
-(void)setPinPoint:(CGPoint)arg1 ;
-(void)setLeftBackground:(UIView *)arg1 ;
-(void)setRightBackground:(UIView *)arg1 ;
-(UIView *)leftBackground;
-(UIView *)rightBackground;
-(CGPoint)pinPoint;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
@end

