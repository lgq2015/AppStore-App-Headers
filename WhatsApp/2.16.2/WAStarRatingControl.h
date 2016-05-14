/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIControl.h>

@class NSArray, UIColor;

@interface WAStarRatingControl : UIControl {

	NSArray* _stars;
	float _margin;

}

@property (assign,nonatomic) float margin;                 //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) int value; 
@property (nonatomic,retain) UIColor * color; 
+(CGSize)preferredSizeForStarCount:(int)arg1 margin:(float)arg2 ;
-(id)initWithStarCount:(int)arg1 ;
-(void)updateValueWithTouch:(id)arg1 ;
-(void)layoutSubviews;
-(int)value;
-(void)setValue:(int)arg1 ;
-(CGSize)intrinsicContentSize;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setMargin:(float)arg1 ;
-(float)margin;
@end

