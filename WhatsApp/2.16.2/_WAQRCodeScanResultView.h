/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAShapeView.h>

@class UIImageView;

@interface _WAQRCodeScanResultView : WAShapeView {

	CGSize _pathRectSize;
	UIImageView* _image;
	char _match;

}

@property (assign,nonatomic) char match;              //@synthesize match=_match - In the implementation block
+(id)pathForViewBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)setMatch:(char)arg1 ;
-(char)match;
@end

