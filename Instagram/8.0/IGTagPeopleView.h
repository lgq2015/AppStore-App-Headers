/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UITapGestureRecognizer, NSString;

@interface IGTagPeopleView : UIControl {

	UIImageView* _tagIndicatorImageView;
	UILabel* _tagPeopleLabel;
	UITapGestureRecognizer* _tapRecognizer;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIImageView * tagIndicatorImageView;                 //@synthesize tagIndicatorImageView=_tagIndicatorImageView - In the implementation block
@property (nonatomic,retain) UILabel * tagPeopleLabel;                            //@synthesize tagPeopleLabel=_tagPeopleLabel - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;              //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
-(UIImageView *)tagIndicatorImageView;
-(UILabel *)tagPeopleLabel;
-(void)updateWidth;
-(void)setTagCount:(int)arg1 ;
-(void)setTagIndicatorImageView:(UIImageView *)arg1 ;
-(void)setTagPeopleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)onTap;
-(UITapGestureRecognizer *)tapRecognizer;
@end

