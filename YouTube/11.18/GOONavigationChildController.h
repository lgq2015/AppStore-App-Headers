/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController, GOONavigationHeaderView;


@protocol GOONavigationChildController <NSObject>
@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,readonly) GOONavigationHeaderView * headerView; 
@property (assign,getter=isHeaderViewHidden,nonatomic) char headerViewHidden; 
@required
-(char)isHeaderViewHidden;
-(void)setShouldAdjustHeaderForScrollViewChanges:(char)arg1;
-(void)updateNavigationStyle;
-(void)updatePrimaryScrollView;
-(void)updateSecondaryScrollViews;
-(void)willShowViewControllerAnimated:(char)arg1;
-(void)didShowViewControllerAnimated:(char)arg1;
-(void)reparentHeaderIfNeeded;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(UIViewController *)viewController;
-(GOONavigationHeaderView *)headerView;
-(void)setHeaderViewHidden:(char)arg1 animated:(char)arg2;
-(void)setHeaderViewHidden:(char)arg1;

@end

