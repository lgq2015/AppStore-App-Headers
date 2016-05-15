/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/Yik Yak-Structs.h>
#import <UIKit/UIButton.h>

@interface FBSDKButton : UIButton {

	char _isConfiguring;
	char _isExplicitlyDisabled;

}
-(float)_heightForContentRect:(CGRect)arg1 ;
-(float)_marginForHeight:(float)arg1 ;
-(float)_paddingForHeight:(float)arg1 ;
-(id)defaultIcon;
-(void)_configureWithIcon:(id)arg1 title:(id)arg2 backgroundColor:(id)arg3 highlightedColor:(id)arg4 selectedTitle:(id)arg5 selectedIcon:(id)arg6 selectedColor:(id)arg7 selectedHighlightedColor:(id)arg8 ;
-(float)_heightForFont:(id)arg1 ;
-(float)_textPaddingCorrectionForHeight:(float)arg1 ;
-(id)_backgroundImageWithColor:(id)arg1 cornerRadius:(float)arg2 scale:(float)arg3 ;
-(float)_fontSizeForHeight:(float)arg1 ;
-(void)checkImplicitlyDisabled;
-(char)isImplicitlyDisabled;
-(CGSize)sizeThatFits:(CGSize)arg1 title:(id)arg2 ;
-(void)configureWithIcon:(id)arg1 title:(id)arg2 backgroundColor:(id)arg3 highlightedColor:(id)arg4 selectedTitle:(id)arg5 selectedIcon:(id)arg6 selectedColor:(id)arg7 selectedHighlightedColor:(id)arg8 ;
-(void)configureButton;
-(void)configureWithIcon:(id)arg1 title:(id)arg2 backgroundColor:(id)arg3 highlightedColor:(id)arg4 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)awakeFromNib;
-(void)sizeToFit;
-(CGSize)intrinsicContentSize;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(id)defaultHighlightedColor;
-(id)defaultSelectedColor;
-(id)defaultDisabledColor;
-(id)defaultBackgroundColor;
@end

