/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, UIImage;

@interface WAThumbnailView : UIView {

	UIImageView* _imageView;
	UIImageView* _checkmarkImageView;
	UIView* _dimmingView;
	UIImage* _placeholderImage;
	unsigned _state;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) unsigned state;               //@synthesize state=_state - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(UIImage *)image;
@end

