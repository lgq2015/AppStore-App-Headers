/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/YYViewController.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>

@class NSArray, UIPageViewController, CAGradientLayer, UIView, UIPageControl, YYPingingTutorialPageViewController, NSString;

@interface YYPingingTutorialViewController : YYViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource> {

	char _isSyncingContacts;
	int _contactsPageIndex;
	int _notificationsPageIndex;
	long _contactsAuthorizationStatus;
	NSArray* _pages;
	UIPageViewController* _pageViewController;
	CAGradientLayer* _topBackgroundGradientLayer;
	/*^block*/id _completionBlock;
	UIView* _pageContainer;
	UIView* _topBackgroundSection;
	UIPageControl* _pageControl;

}

@property (nonatomic,copy) id completionBlock;                                                 //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic,__weak) UIView * pageContainer;                                    //@synthesize pageContainer=_pageContainer - In the implementation block
@property (assign,nonatomic,__weak) UIView * topBackgroundSection;                             //@synthesize topBackgroundSection=_topBackgroundSection - In the implementation block
@property (assign,nonatomic,__weak) UIPageControl * pageControl;                               //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,readonly) YYPingingTutorialPageViewController * currentPage; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)topBackgroundSection;
-(void)refreshContactsAuthorization;
-(id)createTutorialPageViewControllers;
-(void)configureContactsPage;
-(void)configureNotificationsPage;
-(UIView *)pageContainer;
-(void)trackViewTutorialPage;
-(void)refreshPermissionsConfiguration;
-(void)onApplicationWillEnterForeground:(id)arg1 ;
-(void)trackCancelTutorialFromPage;
-(void)onCompleteTutorial;
-(void)onCancelTutorial;
-(void)navigateForward;
-(char)hasPermissionToUseContacts;
-(char)canRequestPermissionToUseContacts;
-(void)executeUserVerificationWorkflow;
-(void)navigateForwardToNotificationsPage;
-(void)executeAddressBookPermissionsWorkflow;
-(void)refreshCurrentPage;
-(void)onContactsActionButtonTapped:(id)arg1 ;
-(void)onNotificationActionButtonTapped:(id)arg1 ;
-(void)onNotificationsNegativeButtonTapped:(id)arg1 ;
-(void)onNotificationsPositiveButtonTapped:(id)arg1 ;
-(void)setCurrentPage:(id)arg1 navigatingForward:(char)arg2 ;
-(void)configurePage:(id)arg1 ;
-(char)isUserVerified;
-(char)shouldAllowForwardNavigation:(id)arg1 ;
-(void)onCloseTapped:(id)arg1 ;
-(void)onNextActionButtonTapped:(id)arg1 ;
-(void)configureCurrentPage;
-(void)setPageContainer:(UIView *)arg1 ;
-(void)setTopBackgroundSection:(UIView *)arg1 ;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(YYPingingTutorialPageViewController *)currentPage;
-(UIPageControl *)pageControl;
-(void)pageViewController:(id)arg1 didFinishAnimating:(char)arg2 previousViewControllers:(id)arg3 transitionCompleted:(char)arg4 ;
-(int)pageViewController:(id)arg1 spineLocationForInterfaceOrientation:(int)arg2 ;
-(unsigned)pageViewControllerSupportedInterfaceOrientations:(id)arg1 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
@end

