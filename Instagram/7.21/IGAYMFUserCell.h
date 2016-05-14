/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Instagram/IGFollowButtonDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGAYMFUserCellDelegate;
@class IGProfilePictureImageView, UILabel, IGFollowButton, UIButton, UIView, UIScrollView, NSString;

@interface IGAYMFUserCell : UICollectionViewCell <UIScrollViewDelegate, IGFollowButtonDelegate, UIGestureRecognizerDelegate> {

	id<IGAYMFUserCellDelegate> _delegate;
	IGProfilePictureImageView* _profilePicImageView;
	UILabel* _usernameLabel;
	UILabel* _userDetailLabel;
	IGFollowButton* _followButton;
	UIButton* _dismissButton;
	UIView* _separatorLineView;
	UIView* _swipableContentView;
	UIScrollView* _swipableContentScrollView;

}

@property (assign,nonatomic,__weak) id<IGAYMFUserCellDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profilePicImageView;              //@synthesize profilePicImageView=_profilePicImageView - In the implementation block
@property (nonatomic,readonly) UILabel * usernameLabel;                                      //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * userDetailLabel;                                    //@synthesize userDetailLabel=_userDetailLabel - In the implementation block
@property (nonatomic,readonly) IGFollowButton * followButton;                                //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                                     //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) UIView * separatorLineView;                                   //@synthesize separatorLineView=_separatorLineView - In the implementation block
@property (nonatomic,readonly) UIView * swipableContentView;                                 //@synthesize swipableContentView=_swipableContentView - In the implementation block
@property (nonatomic,readonly) UIScrollView * swipableContentScrollView;                     //@synthesize swipableContentScrollView=_swipableContentScrollView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)usernameLabel;
-(IGFollowButton *)followButton;
-(IGProfilePictureImageView *)profilePicImageView;
-(UILabel *)userDetailLabel;
-(void)configureWithUser:(id)arg1 context:(id)arg2 analyticsDelegate:(id)arg3 ;
-(UIScrollView *)swipableContentScrollView;
-(UIView *)swipableContentView;
-(void)contentViewTapped:(id)arg1 ;
-(char)scrollViewShouldDismiss:(id)arg1 ;
-(void)followButton:(id)arg1 tappedWithAction:(int)arg2 ;
-(void)followButtonDidUpdateButtonState:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGAYMFUserCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<IGAYMFUserCellDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)prepareForReuse;
-(void)dismiss;
-(UIButton *)dismissButton;
-(void)dismissButtonTapped:(id)arg1 ;
-(UIView *)separatorLineView;
-(void)setupSubviews;
@end

