/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGFollowerListChainingButtonGroupViewDelegate;
@class UIButton;

@interface IGFollowerListChainingButtonGroupView : UIView {

	char _usingRequestButton;
	char _showChainingButton;
	char _buttonsInitialized;
	char _followingVisible;
	id<IGFollowerListChainingButtonGroupViewDelegate> _delegate;
	UIButton* _followButton;
	UIButton* _followingButton;
	UIButton* _requestedButton;
	UIButton* _loadingButton;
	UIButton* _chainingButton;

}

@property (assign,getter=isUsingRequestButton,nonatomic) char usingRequestButton;                            //@synthesize usingRequestButton=_usingRequestButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGFollowerListChainingButtonGroupViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * followButton;                                                        //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) UIButton * followingButton;                                                     //@synthesize followingButton=_followingButton - In the implementation block
@property (nonatomic,retain) UIButton * requestedButton;                                                     //@synthesize requestedButton=_requestedButton - In the implementation block
@property (nonatomic,retain) UIButton * loadingButton;                                                       //@synthesize loadingButton=_loadingButton - In the implementation block
@property (nonatomic,retain) UIButton * chainingButton;                                                      //@synthesize chainingButton=_chainingButton - In the implementation block
@property (assign,nonatomic) char showChainingButton;                                                        //@synthesize showChainingButton=_showChainingButton - In the implementation block
@property (assign,nonatomic) char buttonsInitialized;                                                        //@synthesize buttonsInitialized=_buttonsInitialized - In the implementation block
@property (assign,getter=isFollowingVisible,nonatomic) char followingVisible;                                //@synthesize followingVisible=_followingVisible - In the implementation block
+(id)createFollowButton;
+(id)createFollowingButton;
+(id)createLoadingButton;
+(id)createRequestedButton;
+(id)createChainingButton;
-(void)createButtons;
-(void)followButtonTapped;
-(void)unfollowButtonTapped;
-(void)chainingButtonTapped;
-(void)resetGroupView;
-(char)showChainingButton;
-(UIButton *)chainingButton;
-(UIButton *)loadingButton;
-(void)setShowChainingButton:(char)arg1 ;
-(void)updateChainingButtonSettings:(char)arg1 ;
-(char)buttonsInitialized;
-(void)loadingFinishedWithChainingSettings:(char)arg1 ;
-(void)setFollowButton:(UIButton *)arg1 ;
-(void)setFollowingButton:(UIButton *)arg1 ;
-(void)setRequestedButton:(UIButton *)arg1 ;
-(void)setLoadingButton:(UIButton *)arg1 ;
-(void)setChainingButton:(UIButton *)arg1 ;
-(void)setButtonsInitialized:(char)arg1 ;
-(UIButton *)followButton;
-(UIButton *)followingButton;
-(UIButton *)requestedButton;
-(char)isFollowingVisible;
-(char)isUsingRequestButton;
-(void)setFollowingVisible:(char)arg1 animated:(char)arg2 ;
-(void)setUsingRequestButton:(char)arg1 ;
-(void)setFollowingVisible:(char)arg1 ;
-(void)setDelegate:(id<IGFollowerListChainingButtonGroupViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGFollowerListChainingButtonGroupViewDelegate>)delegate;
@end

