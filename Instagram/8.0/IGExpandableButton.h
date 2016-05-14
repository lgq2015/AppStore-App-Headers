/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@protocol IGExpandableButtonDelegate;
@class UIImage, UIImageView, UILabel;

@interface IGExpandableButton : UIControl {

	UIImage* _defaultIconImage;
	UIImage* _highlightIconImage;
	UIImageView* _icon;
	UIImageView* _closeIcon;
	UIImage* _defaultBorderImage;
	UIImage* _highlightBorderImage;
	UIImageView* _border;
	UILabel* _valueLabel;
	CGPoint _center;
	float _value;
	int _layoutState;
	id<IGExpandableButtonDelegate> _delegate;

}

@property (assign,nonatomic) float value;                                                 //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) int layoutState;                                             //@synthesize layoutState=_layoutState - In the implementation block
@property (assign,nonatomic,__weak) id<IGExpandableButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(float)displayValueThreshold;
-(void)onCloseButtonClick:(id)arg1 withEvent:(id)arg2 ;
-(IGExpandableButtonLayouts)_getLayoutForState:(int)arg1 ;
-(id)initWithDefaultIcon:(id)arg1 selectedIcon:(id)arg2 ;
-(void)setDelegate:(id<IGExpandableButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGExpandableButtonDelegate>)delegate;
-(float)value;
-(void)setValue:(float)arg1 ;
-(void)setSelected:(char)arg1 ;
-(int)layoutState;
-(void)setLayoutState:(int)arg1 ;
@end

