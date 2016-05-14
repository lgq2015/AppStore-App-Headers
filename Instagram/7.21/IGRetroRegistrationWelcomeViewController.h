/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Instagram/IGFacebookAuthHelperDelegate.h>

@protocol IGRetroRegistrationWelcomeViewControllerDelegate;
@class IGRetroRegistrationWelcomeView, IGFacebookAuthHelper, NSString;

@interface IGRetroRegistrationWelcomeViewController : UIViewController <IGFacebookAuthHelperDelegate> {

	id<IGRetroRegistrationWelcomeViewControllerDelegate> _delegate;
	IGRetroRegistrationWelcomeView* _welcomeView;
	IGFacebookAuthHelper* _fbAuthHelper;

}

@property (assign,nonatomic,__weak) id<IGRetroRegistrationWelcomeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationWelcomeView * welcomeView;                                      //@synthesize welcomeView=_welcomeView - In the implementation block
@property (nonatomic,retain) IGFacebookAuthHelper * fbAuthHelper;                                               //@synthesize fbAuthHelper=_fbAuthHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissButtonTapped;
-(void)facebookAuthHelper:(id)arg1 willProceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)facebookAuthHelperDidTapSignUpButton:(id)arg1 ;
-(void)facebookAuthHelperDidTapLogInButton:(id)arg1 ;
-(void)facebookAuthHelper:(id)arg1 willProceedEmailTakenAutoLoginWithLoggedInDict:(id)arg2 ;
-(void)facebookAuthHelper:(id)arg1 willProceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)facebookAuthHelper:(id)arg1 willResetPasswordWithViewController:(id)arg2 ;
-(void)setFacebookButtonLoading:(char)arg1 ;
-(IGFacebookAuthHelper *)fbAuthHelper;
-(void)authWithFacebookForRegistration;
-(void)onFacebookAuthSuccess:(id)arg1 ;
-(void)onFacebookAuthCancelled:(id)arg1 ;
-(/*^block*/id)fbAuthCompletionHandler;
-(void)setFbAuthHelper:(IGFacebookAuthHelper *)arg1 ;
-(void)loginButtonTapped;
-(void)signupButtonTapped;
-(void)FBButtonTapped;
-(void)handleLoggedInUserForResponse:(id)arg1 facebookAccessToken:(id)arg2 ;
-(void)fetchFBUsername;
-(void)setWelcomeView:(IGRetroRegistrationWelcomeView *)arg1 ;
-(IGRetroRegistrationWelcomeView *)welcomeView;
-(void)setDelegate:(id<IGRetroRegistrationWelcomeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGRetroRegistrationWelcomeViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)prefersNavigationBarHidden;
@end

