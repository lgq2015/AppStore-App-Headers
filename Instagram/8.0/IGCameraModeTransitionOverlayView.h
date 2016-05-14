/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView;

@interface IGCameraModeTransitionOverlayView : UIView {

	UIView* _blackOverlay;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * blackOverlay;                //@synthesize blackOverlay=_blackOverlay - In the implementation block
-(void)setBlackOverlay:(UIView *)arg1 ;
-(void)setImage:(id)arg1 mode:(int)arg2 imageMode:(int)arg3 ;
-(UIView *)blackOverlay;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
@end

