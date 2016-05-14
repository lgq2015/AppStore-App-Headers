/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface IGRearrangeOverlayView : UIView {

	int _type;
	UILabel* _removeLabel;
	UIImageView* _removeImageView;

}

@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UILabel * removeLabel;                      //@synthesize removeLabel=_removeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * removeImageView;              //@synthesize removeImageView=_removeImageView - In the implementation block
-(void)updateRemoveText;
-(UIImageView *)removeImageView;
-(UILabel *)removeLabel;
-(void)setRemoveLabel:(UILabel *)arg1 ;
-(void)setRemoveImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setType:(int)arg1 ;
-(int)type;
@end

