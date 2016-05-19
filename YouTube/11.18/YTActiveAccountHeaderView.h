/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>
#import <YouTube/YTVariableHeightHeaderForwardingTouches.h>

@class CALayer, UIImageView, CAGradientLayer, YTFormattedStringLabel, UIControl, UIView, QTMButton, YTImageView, NSString, NSArray;

@interface YTActiveAccountHeaderView : UIView <YTVariableHeightHeaderForwardingTouches> {

	CALayer* _avatarImageViewTintLayer;
	UIImageView* _bannerDefaultImageView;
	CAGradientLayer* _bannerScrimLayer;
	YTFormattedStringLabel* _titleLabel;
	UIImageView* _arrowExpandImageView;
	UIControl* _titleArrowHitTarget;
	UIView* _hairlineBorder;
	QTMButton* _uploadButton;
	YTFormattedStringLabel* _membershipStatusLabel;
	UIView* _membershipStatusContainer;
	YTImageView* _avatarImageView;
	YTImageView* _bannerImageView;

}

@property (nonatomic,readonly) YTImageView * avatarImageView;               //@synthesize avatarImageView=_avatarImageView - In the implementation block
@property (nonatomic,readonly) YTImageView * bannerImageView;               //@synthesize bannerImageView=_bannerImageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * touchForwardingViews; 
-(YTImageView *)avatarImageView;
-(void)setTapAvatarTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTapTitleTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTapUploadTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setHeaderFabModel:(id)arg1 ;
-(void)setMembershipStatus:(id)arg1 ;
-(void)titleTouchDown;
-(void)titleTouchUp;
-(float)avatarImageSize;
-(void)sizeLabelsForWidth:(float)arg1 ;
-(float)contentPaddingX;
-(float)bannerImageHeight;
-(void)resetTapAvatarTarget;
-(void)avatarTouchDown;
-(void)avatarTouchUp;
-(NSArray *)touchForwardingViews;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)init;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(YTImageView *)bannerImageView;
@end

