/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView, UILabel;

@interface GTRProductLogoHeaderView : UIView {

	UIView* _accessibilityContainer;
	UIImageView* _productLogoView;
	UILabel* _productNameView;
	char _productLogoHidden;

}
+(float)headerHeight;
-(void)setProductLogoHidden:(char)arg1 animated:(char)arg2 withDuration:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

