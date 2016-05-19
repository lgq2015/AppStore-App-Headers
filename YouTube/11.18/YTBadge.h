/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>

@class UIView, YTIFormattedString, YTFormattedStringLabel, UIImageView;

@interface YTBadge : UIView {

	UIView* _backgroundView;
	YTIFormattedString* _labelText;
	YTFormattedStringLabel* _label;
	UIImageView* _imageView;
	int _style;
	float _paddingX;
	float _paddingY;
	float _hitTargetPaddingX;
	float _hitTargetPaddingY;
	float _textGap;

}
+(id)standardAcceleratedBadge;
+(id)standardAdBadge;
+(id)standardInlineAdBadge;
+(id)standardAdBadgeWithPaddingY:(float)arg1 ;
+(id)standardAcceleratedPlayerBadge;
-(void)setPaddingX:(float)arg1 paddingY:(float)arg2 ;
-(void)setFormattedText:(id)arg1 ;
-(int)getTotalImageWidth;
-(CGRect)hitTargetBounds;
-(void)setImageBackgroundColor:(id)arg1 ;
-(void)setHitTargetPaddingX:(float)arg1 hitTargetPaddingY:(float)arg2 ;
-(void)setTextGap:(float)arg1 ;
-(void)layoutLabel;
-(void)setImage:(id)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)accessibilityLabel;
-(void)setStyle:(int)arg1 ;
-(id)imageView;
-(char)isAccessibilityElement;
@end

