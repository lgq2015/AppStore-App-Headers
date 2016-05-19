/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <YouTube/YTTopController.h>

@protocol YTResponder, YTNavigationControllerDelegate;
@class NSString;

@interface YTNavigationController : UINavigationController <YTTopController> {

	id _model;
	id<YTResponder> _parentResponder;
	id<YTNavigationControllerDelegate> _navigationControllerDelegate;

}

@property (assign,nonatomic,__weak) id<YTNavigationControllerDelegate> navigationControllerDelegate;              //@synthesize navigationControllerDelegate=_navigationControllerDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;                                            //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(id)initWithParentResponder:(id)arg1 ;
-(void)loadWithModel:(id)arg1 fromView:(id)arg2 ;
-(void)canBePushedWithBlock:(/*^block*/id)arg1 ;
-(char)isEqualTopController:(id)arg1 ;
-(char)isParentViewControllerBeingDismissed;
-(void)setTitle:(id)arg1 ;
-(int)preferredStatusBarStyle;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(id)model;
-(void)viewDidDisappear:(char)arg1 ;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(id<YTNavigationControllerDelegate>)navigationControllerDelegate;
-(void)setNavigationControllerDelegate:(id<YTNavigationControllerDelegate>)arg1 ;
@end

