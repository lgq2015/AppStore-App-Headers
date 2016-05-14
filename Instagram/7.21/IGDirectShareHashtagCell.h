/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGDirectGenericShareContentCell.h>

@class UIImageView;

@interface IGDirectShareHashtagCell : IGDirectGenericShareContentCell {

	UIImageView* _hashtagImageView;

}

@property (nonatomic,retain) UIImageView * hashtagImageView;              //@synthesize hashtagImageView=_hashtagImageView - In the implementation block
+(float)heightForHashtagShare:(id)arg1 withWidth:(float)arg2 ;
+(float)sideImageWidth;
-(id)previewMedia;
-(UIImageView *)hashtagImageView;
-(id)sideImageView;
-(void)setHashtagImageView:(UIImageView *)arg1 ;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
@end

