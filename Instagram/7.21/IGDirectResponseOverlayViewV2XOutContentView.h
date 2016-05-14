/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface IGDirectResponseOverlayViewV2XOutContentView : UIView {

	UILabel* _topTextLabel;
	UILabel* _bottomTextLabel;
	UIImageView* _iconImageView;

}

@property (nonatomic,readonly) UILabel * topTextLabel;                   //@synthesize topTextLabel=_topTextLabel - In the implementation block
@property (nonatomic,readonly) UILabel * bottomTextLabel;                //@synthesize bottomTextLabel=_bottomTextLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
-(void)setupWithDirectResponseInfo:(id)arg1 ;
-(UILabel *)bottomTextLabel;
-(UILabel *)topTextLabel;
-(id)initWithDirectResponseInfo:(id)arg1 ;
-(UIImageView *)iconImageView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

