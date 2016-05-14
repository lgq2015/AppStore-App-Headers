/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel;

@interface IGStatButton : UIControl {

	UILabel* _countLabel;
	UILabel* _nameLabel;

}

@property (nonatomic,retain) UILabel * countLabel;              //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;               //@synthesize nameLabel=_nameLabel - In the implementation block
-(UILabel *)countLabel;
-(void)updateTextLabelsForCurrentControlState;
-(void)setCount:(id)arg1 formattingStyle:(int)arg2 ;
-(void)setCountLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setName:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setCount:(id)arg1 ;
@end

