/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/GOONavigationController.h>
#import <Translate/GTRTabBarControllerMember.h>

@class GTRTabBarItem, NSString;

@interface GTRNavigationController : GOONavigationController <GTRTabBarControllerMember> {

	GTRTabBarItem* _tabBarControllerItem;

}

@property (nonatomic,retain) GTRTabBarItem * tabBarControllerItem;              //@synthesize tabBarControllerItem=_tabBarControllerItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GTRTabBarItem *)tabBarControllerItem;
-(void)setTabBarControllerItem:(GTRTabBarItem *)arg1 ;
-(int)preferredStatusBarStyle;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
@end

