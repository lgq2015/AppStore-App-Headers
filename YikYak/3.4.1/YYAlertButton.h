/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, UIImage;

@interface YYAlertButton : NSObject {

	NSString* _title;
	UIColor* _color;
	UIImage* _image;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * color;               //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImage * image;               //@synthesize image=_image - In the implementation block
+(id)buttonWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 ;
-(id)initWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
@end

