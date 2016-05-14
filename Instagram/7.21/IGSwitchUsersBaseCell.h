/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIImageView, NSString, UILabel, UIImage, UIColor;

@interface IGSwitchUsersBaseCell : UITableViewCell {

	UIImageView* _cellImageView;
	NSString* _text;
	UILabel* _cellLabel;
	UIImage* _image;

}

@property (nonatomic,retain) UIImageView * cellImageView;              //@synthesize cellImageView=_cellImageView - In the implementation block
@property (nonatomic,retain) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UILabel * cellLabel;                      //@synthesize cellLabel=_cellLabel - In the implementation block
@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
-(UILabel *)cellLabel;
-(CGRect)imageViewFrame;
-(CGRect)labelFrameForLabel:(id)arg1 ;
-(CGSize)labelSizeForLabel:(id)arg1 cellWidth:(float)arg2 ;
-(void)setCellImageView:(UIImageView *)arg1 ;
-(void)setCellLabel:(UILabel *)arg1 ;
-(id)initWithImage:(id)arg1 text:(id)arg2 reuseIdentifier:(id)arg3 ;
-(UIImageView *)cellImageView;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(UIColor *)textColor;
@end

