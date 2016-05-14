/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageView.h>

@class UIImage;

@interface IGAppIconImageView : IGImageView {

	unsigned _imageRenderTicker;
	UIImage* _originalImage;

}

@property (assign,nonatomic) unsigned imageRenderTicker;              //@synthesize imageRenderTicker=_imageRenderTicker - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                 //@synthesize originalImage=_originalImage - In the implementation block
-(void)reloadClippedImageWithImage:(id)arg1 ;
-(unsigned)imageRenderTicker;
-(void)setImageRenderTicker:(unsigned)arg1 ;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(UIImage *)originalImage;
@end

