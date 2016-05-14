/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <PTHCommon/PTHButton.h>

@class PTHShapeView, UIViewController, UITabBarItem, PTHTweetbotAccountTabBar;

@interface PTHTweetbotAccountTabBarItemView : PTHButton {

	PTHShapeView* _unreadView;
	char _unread;
	UIViewController* _viewController;
	UITabBarItem* _item;
	PTHTweetbotAccountTabBar* _tabBar;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UITabBarItem * item;                                 //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) PTHTweetbotAccountTabBar * tabBar;              //@synthesize tabBar=_tabBar - In the implementation block
@property (assign,getter=hasUnread,nonatomic) char unread;                          //@synthesize unread=_unread - In the implementation block
-(void)_tapped;
-(void)hideUnread:(char)arg1 ;
-(void)showUnread:(char)arg1 ;
-(id)colorGroupName;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UITabBarItem *)item;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(PTHTweetbotAccountTabBar *)tabBar;
-(void)setTabBar:(PTHTweetbotAccountTabBar *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setUnread:(char)arg1 ;
-(char)hasUnread;
@end

