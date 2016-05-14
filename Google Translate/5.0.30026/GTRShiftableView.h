/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface GTRShiftableView : UIView {

	char _navigationBarHidden;
	char _productLogoHidden;

}

@property (assign,nonatomic) char navigationBarHidden;                     //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (assign,nonatomic) char productLogoHidden;                       //@synthesize productLogoHidden=_productLogoHidden - In the implementation block
@property (getter=isShifted,nonatomic,readonly) char shifted; 
-(void)setProductLogoHidden:(char)arg1 animated:(char)arg2 ;
-(void)setProductLogoHidden:(char)arg1 ;
-(char)productLogoHidden;
-(char)navigationBarHidden;
-(void)layoutSubviews;
-(void)setNavigationBarHidden:(char)arg1 ;
-(char)isShifted;
@end

