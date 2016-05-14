/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGArcLayer, UIColor;

@interface IGCircularProgressView : UIView {

	IGArcLayer* _progressLayer;
	float _progress;

}

@property (assign,nonatomic) float progress;                           //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) float trackThickness; 
@property (nonatomic,retain) UIColor * progressTintColor; 
@property (nonatomic,retain) UIColor * trackTintColor; 
-(void)setTrackThickness:(float)arg1 ;
-(float)trackThickness;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setProgress:(float)arg1 ;
-(UIColor *)trackTintColor;
-(UIColor *)progressTintColor;
-(void)setProgressTintColor:(UIColor *)arg1 ;
-(void)setTrackTintColor:(UIColor *)arg1 ;
-(float)progress;
@end

