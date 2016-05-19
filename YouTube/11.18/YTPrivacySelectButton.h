/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIButton.h>

@class YTLabel, UIImageView, CALayer, UIImage, NSString;

@interface YTPrivacySelectButton : UIButton {

	YTLabel* _titleLabel;
	UIImageView* _imageView;
	YTLabel* _textLabel;
	CALayer* _borderBottomLayer;
	UIImage* _image;
	NSString* _text;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * text;                //@synthesize text=_text - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(void)layoutSublayersOfLayer:(id)arg1 ;
@end

