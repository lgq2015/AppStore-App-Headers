/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Instagram/IGNavigationControllerDelegate.h>
#import <Instagram/IGCustomViewController.h>

@class UIView, UIViewController, IGPopoverNavigationController, NSString;

@interface IGPopoverController : UIViewController <IGNavigationControllerDelegate, IGCustomViewController> {

	UIView* _fadeBackgroundView;
	UIView* _contentView;
	int _style;
	UIViewController* _lastShownViewController;
	IGPopoverNavigationController* _navigationController;

}

@property (nonatomic,retain) IGPopoverNavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)popoverMarginForStyle:(int)arg1 ;
-(id)ig_keyViewControllers;
-(id)initWithStyle:(int)arg1 rootViewController:(id)arg2 ;
-(void)updateHeightForViewController:(id)arg1 animated:(char)arg2 ;
-(void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 ;
-(void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(char)arg3 ;
-(void)dealloc;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(IGPopoverNavigationController *)navigationController;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)present;
-(void)setNavigationController:(IGPopoverNavigationController *)arg1 ;
@end

