/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>

@class UIViewController, UIImageView, PTHTweetbotAccountController, PTHTweetbotAccount;

@interface PTHTweetbotMainController : PTHViewController {

	UIViewController* _childController;
	UIImageView* _launchIconView;
	PTHTweetbotAccountController* _selectedAccountController;

}

@property (nonatomic,__weak,readonly) UIViewController * currentViewController; 
@property (nonatomic,readonly) PTHTweetbotAccountController * selectedAccountController;              //@synthesize selectedAccountController=_selectedAccountController - In the implementation block
@property (nonatomic,__weak,readonly) PTHTweetbotAccount * selectedAccount; 
+(id)mainController;
+(void)playNewItemsSound;
+(void)unmuteNewItemsSound;
+(void)muteNewItemsSound;
+(void)initialize;
-(void)launch:(char)arg1 completion:(/*^block*/id)arg2 ;
-(PTHTweetbotAccountController *)selectedAccountController;
-(PTHTweetbotAccount *)selectedAccount;
-(void)setSelectedAccount:(id)arg1 selectedTab:(int)arg2 animation:(int)arg3 completion:(/*^block*/id)arg4 ;
-(char)shouldShowPushNotification:(id)arg1 ;
-(void)showSetupController:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideSetupController:(/*^block*/id)arg1 ;
-(void)_setSelectedAccount:(id)arg1 selectedTab:(int)arg2 animation:(int)arg3 completion:(/*^block*/id)arg4 ;
-(UIViewController *)currentViewController;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(unsigned)supportedInterfaceOrientations;
-(void)reset;
-(char)shouldAutorotate;
-(void)loadView;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
@end

