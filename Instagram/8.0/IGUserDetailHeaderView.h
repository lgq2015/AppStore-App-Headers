/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGFollowButtonDelegate.h>
#import <Instagram/IGSimilarAccountsControlDelegate.h>
#import <Instagram/IGFriendRequestHeaderViewDelegate.h>
#import <Instagram/IGSimilarAccountsViewDelegate.h>
#import <Instagram/IGLabelTooltipViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>
#import <Instagram/IGFeedToggleViewDelegate.h>
#import <Instagram/IGProfilePictureHelperDelegate.h>

@protocol IGUserDetailHeaderViewDelegate, IGRaindropAnalyticsDelegate;
@class IGFeedViewController_DEPRECATED, IGUser, UIView, IGProfilePictureImageView, IGStatButton, IGButton, UIImageView, IGFollowButton, IGTapButton, IGFriendRequestHeaderView, IGCoreTextView, IGLabelTooltipView, IGFeedToggleView, IGSimilarAccountsControl, IGHScrollSimilarAccountsControl, IGSimilarAccountsView, UIActivityIndicatorView, UITapGestureRecognizer, IGSpringButton, NSArray, NSString;

@interface IGUserDetailHeaderView : UIView <IGCoreTextLinkHandler, IGFollowButtonDelegate, IGSimilarAccountsControlDelegate, IGFriendRequestHeaderViewDelegate, IGSimilarAccountsViewDelegate, IGLabelTooltipViewDelegate, UIGestureRecognizerDelegate, IGProfilePictureImageViewDelegate, IGFeedToggleViewDelegate, IGProfilePictureHelperDelegate> {

	char _showingProfileMegaphone;
	char _feedRestricted;
	char _requestHeaderShowing;
	char _isCurrentUser;
	IGFeedViewController_DEPRECATED*<IGUserDetailHeaderViewDelegate> _delegate;
	IGUser* _user;
	UIView* _megaphoneView;
	IGProfilePictureImageView* _profilePic;
	IGStatButton* _followersButton;
	IGStatButton* _followingButton;
	IGStatButton* _mediaButton;
	IGButton* _editProfileButton;
	UIImageView* _editProfileExclamationMark;
	IGFollowButton* _followButton;
	IGTapButton* _similarAccountsButton;
	IGFriendRequestHeaderView* _requestHeader;
	IGCoreTextView* _infoLabelView;
	UIView* _infoLabelContainerView;
	UIView* _additionalInfoView;
	IGLabelTooltipView* _publicThreadPreview;
	IGLabelTooltipView* _profileCompletionTooltipView;
	IGFeedToggleView* _toggleBar;
	int _additionalInfoViewState;
	IGSimilarAccountsControl* _similarAccountsControl;
	IGHScrollSimilarAccountsControl* _hscrollSimilarAccountsControl;
	IGSimilarAccountsView* _similarAccountsView;
	UIActivityIndicatorView* _spinner;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;
	UITapGestureRecognizer* _tapGuesture;
	IGSpringButton* _contactButton;
	NSArray* _accessibleElements;

}

@property (nonatomic,retain) IGProfilePictureImageView * profilePic;                                                        //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) IGStatButton * followersButton;                                                                //@synthesize followersButton=_followersButton - In the implementation block
@property (nonatomic,retain) IGStatButton * followingButton;                                                                //@synthesize followingButton=_followingButton - In the implementation block
@property (nonatomic,retain) IGStatButton * mediaButton;                                                                    //@synthesize mediaButton=_mediaButton - In the implementation block
@property (nonatomic,retain) IGButton * editProfileButton;                                                                  //@synthesize editProfileButton=_editProfileButton - In the implementation block
@property (nonatomic,retain) UIImageView * editProfileExclamationMark;                                                      //@synthesize editProfileExclamationMark=_editProfileExclamationMark - In the implementation block
@property (nonatomic,retain) IGFollowButton * followButton;                                                                 //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) IGTapButton * similarAccountsButton;                                                           //@synthesize similarAccountsButton=_similarAccountsButton - In the implementation block
@property (nonatomic,retain) IGFriendRequestHeaderView * requestHeader;                                                     //@synthesize requestHeader=_requestHeader - In the implementation block
@property (nonatomic,retain) IGCoreTextView * infoLabelView;                                                                //@synthesize infoLabelView=_infoLabelView - In the implementation block
@property (nonatomic,retain) UIView * infoLabelContainerView;                                                               //@synthesize infoLabelContainerView=_infoLabelContainerView - In the implementation block
@property (nonatomic,retain) UIView * additionalInfoView;                                                                   //@synthesize additionalInfoView=_additionalInfoView - In the implementation block
@property (nonatomic,retain) IGLabelTooltipView * publicThreadPreview;                                                      //@synthesize publicThreadPreview=_publicThreadPreview - In the implementation block
@property (nonatomic,retain) IGLabelTooltipView * profileCompletionTooltipView;                                             //@synthesize profileCompletionTooltipView=_profileCompletionTooltipView - In the implementation block
@property (nonatomic,retain) IGFeedToggleView * toggleBar;                                                                  //@synthesize toggleBar=_toggleBar - In the implementation block
@property (assign,nonatomic) char requestHeaderShowing;                                                                     //@synthesize requestHeaderShowing=_requestHeaderShowing - In the implementation block
@property (assign,nonatomic) int additionalInfoViewState;                                                                   //@synthesize additionalInfoViewState=_additionalInfoViewState - In the implementation block
@property (nonatomic,retain) IGSimilarAccountsControl * similarAccountsControl;                                             //@synthesize similarAccountsControl=_similarAccountsControl - In the implementation block
@property (nonatomic,retain) IGHScrollSimilarAccountsControl * hscrollSimilarAccountsControl;                               //@synthesize hscrollSimilarAccountsControl=_hscrollSimilarAccountsControl - In the implementation block
@property (nonatomic,retain) IGSimilarAccountsView * similarAccountsView;                                                   //@synthesize similarAccountsView=_similarAccountsView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                                             //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;                                      //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGuesture;                                                          //@synthesize tapGuesture=_tapGuesture - In the implementation block
@property (nonatomic,retain) IGSpringButton * contactButton;                                                                //@synthesize contactButton=_contactButton - In the implementation block
@property (assign,nonatomic) char isCurrentUser;                                                                            //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (nonatomic,retain) NSArray * accessibleElements;                                                                  //@synthesize accessibleElements=_accessibleElements - In the implementation block
@property (assign,nonatomic,__weak) IGFeedViewController_DEPRECATED*<IGUserDetailHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGUser * user;                                                                                 //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) UIView * megaphoneView;                                                                        //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (assign,nonatomic) char showingProfileMegaphone;                                                                  //@synthesize showingProfileMegaphone=_showingProfileMegaphone - In the implementation block
@property (assign,nonatomic) char feedRestricted;                                                                           //@synthesize feedRestricted=_feedRestricted - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStatusLabel:(id)arg1 ;
-(id)statusLabel;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)setFollowButton:(IGFollowButton *)arg1 ;
-(void)setFollowingButton:(IGStatButton *)arg1 ;
-(IGProfilePictureImageView *)profilePic;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(void)setMegaphoneView:(UIView *)arg1 ;
-(UIView *)megaphoneView;
-(void)profilePictureTapped:(id)arg1 ;
-(IGFollowButton *)followButton;
-(IGStatButton *)followingButton;
-(void)setFeedRestricted:(char)arg1 ;
-(char)feedRestricted;
-(void)setAccessibleElements:(NSArray *)arg1 ;
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(NSArray *)accessibleElements;
-(void)didTapTooltipView:(id)arg1 ;
-(void)feedToggle:(id)arg1 selectedButton:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 analyticsDelegate:(id)arg2 ;
-(void)followButton:(id)arg1 tappedWithAction:(int)arg2 ;
-(void)similarAccountsControl:(id)arg1 didReplenishUserAtIndexPath:(id)arg2 ;
-(void)similarAccountsViewDidTapOnSeeAllAccounts:(id)arg1 ;
-(void)onFriendStatusChanged:(id)arg1 ;
-(IGStatButton *)followersButton;
-(void)setFollowersButton:(IGStatButton *)arg1 ;
-(void)setSimilarAccountsControl:(IGSimilarAccountsControl *)arg1 ;
-(void)setSimilarAccountsView:(IGSimilarAccountsView *)arg1 ;
-(void)onFollowButtonTapped:(id)arg1 ;
-(IGSimilarAccountsView *)similarAccountsView;
-(IGSimilarAccountsControl *)similarAccountsControl;
-(IGStatButton *)mediaButton;
-(UIView *)infoLabelContainerView;
-(IGHScrollSimilarAccountsControl *)hscrollSimilarAccountsControl;
-(void)mediaButtonTapped:(id)arg1 ;
-(void)followersButtonTapped:(id)arg1 ;
-(void)followingButtonTapped:(id)arg1 ;
-(IGCoreTextView *)infoLabelView;
-(CGRect)frameForFollowButton;
-(void)onSimilarAccountsButtonTapped:(id)arg1 ;
-(void)updateSimilarAccountsButton;
-(CGRect)frameForEditProfileButton;
-(void)onEditProfileTapped;
-(void)userChanged:(id)arg1 ;
-(void)onOwnMediaAdded:(id)arg1 ;
-(void)onOwnMediaDeleted:(id)arg1 ;
-(void)updateFollowButton;
-(void)updateAllContentViews;
-(void)toggleSimilarAccountsView:(char)arg1 ;
-(id)createSimilarAccountsView;
-(void)configureSimilarAccountsView;
-(int)additionalInfoViewState;
-(IGTapButton *)similarAccountsButton;
-(void)setAdditionalInfoViewState:(int)arg1 ;
-(void)setAdditionalInfoView:(UIView *)arg1 ;
-(IGFeedToggleView *)toggleBar;
-(void)fetchSimilarUsersWithCompletion:(/*^block*/id)arg1 ;
-(IGLabelTooltipView *)publicThreadPreview;
-(id)createPublicThreadPreview;
-(void)setPublicThreadPreview:(IGLabelTooltipView *)arg1 ;
-(IGLabelTooltipView *)profileCompletionTooltipView;
-(id)createProfileCompletionTooltipView;
-(void)setProfileCompletionTooltipView:(IGLabelTooltipView *)arg1 ;
-(void)setRequestHeaderShowing:(char)arg1 ;
-(void)setToggleBar:(IGFeedToggleView *)arg1 ;
-(char)enableLists;
-(id)friendlyURLString;
-(char)shouldShowContactOptions;
-(IGButton *)editProfileButton;
-(UIImageView *)editProfileExclamationMark;
-(IGSpringButton *)contactButton;
-(void)setContactButton:(IGSpringButton *)arg1 ;
-(void)onContactButtonTapped;
-(char)shouldShowSimilarAccountsButton;
-(float)widthForSingleButtonLayout;
-(float)widthForThreeButtonLayout;
-(float)widthForTwoButtonLayout;
-(float)widthForSingleButtonWithChaining;
-(char)requestHeaderShowing;
-(char)showingProfileMegaphone;
-(void)updateStatButtonsLayout;
-(CGRect)frameForContactButton;
-(CGRect)frameForSimilarAccountsButton;
-(UIView *)additionalInfoView;
-(void)updateRequestHeader;
-(void)updateCountLabels;
-(void)updateToggleBar;
-(void)updateToggleButtons;
-(void)updateBioText;
-(void)presentUserListWithURL:(id)arg1 title:(id)arg2 asListType:(int)arg3 contextPK:(id)arg4 ;
-(void)onWebsiteExternalLinkTapped;
-(void)logWebsiteTap;
-(void)logWebsiteOpen;
-(void)logWebsiteCancel;
-(void)requestHeaderIsShowing:(char)arg1 ;
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 fromOption:(int)arg3 ;
-(char)profilePictureHelperShouldShowRemovePicture:(id)arg1 ;
-(void)profilePictureHelper:(id)arg1 willPerformAction:(int)arg2 ;
-(void)profilePictureHelperRemovePictureButtonTapped:(id)arg1 ;
-(void)showPublicThreadWithPreviewString:(id)arg1 timeString:(id)arg2 ;
-(void)showProfileCompletionNuxView;
-(void)hideProfileCompletionNuxView;
-(void)setShowingProfileMegaphone:(char)arg1 ;
-(void)setMediaButton:(IGStatButton *)arg1 ;
-(void)setEditProfileButton:(IGButton *)arg1 ;
-(void)setEditProfileExclamationMark:(UIImageView *)arg1 ;
-(void)setSimilarAccountsButton:(IGTapButton *)arg1 ;
-(void)setRequestHeader:(IGFriendRequestHeaderView *)arg1 ;
-(void)setInfoLabelView:(IGCoreTextView *)arg1 ;
-(void)setInfoLabelContainerView:(UIView *)arg1 ;
-(void)setHscrollSimilarAccountsControl:(IGHScrollSimilarAccountsControl *)arg1 ;
-(UITapGestureRecognizer *)tapGuesture;
-(void)setTapGuesture:(UITapGestureRecognizer *)arg1 ;
-(char)isCurrentUser;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(float)buttonY;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(IGFeedViewController_DEPRECATED*<IGUserDetailHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(IGFeedViewController_DEPRECATED*<IGUserDetailHeaderViewDelegate>)delegate;
-(id)accessibilityIdentifier;
-(void)updateLayout;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)logEvent:(id)arg1 ;
-(void)setIsCurrentUser:(char)arg1 ;
-(IGFriendRequestHeaderView *)requestHeader;
@end

