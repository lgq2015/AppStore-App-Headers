/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GOOActionSheetDelegate.h>
#import <YouTube/MDXScreenManagerObserver.h>
#import <YouTube/YTSystemNotificationsObserver.h>
#import <YouTube/YTPlaybackRouteButtonController.h>

@class YTSystemNotifications, YTActiveVideoNotifier, NSMapTable, NSHashTable, GOOActionSheet, MDXScreenManager, NSString;

@interface MDXPlaybackRouteButtonController : NSObject <GOOActionSheetDelegate, MDXScreenManagerObserver, YTSystemNotificationsObserver, YTPlaybackRouteButtonController> {

	YTSystemNotifications* _systemNotifications;
	YTActiveVideoNotifier* _activeVideoNotifier;
	NSMapTable* _buttonToResponderMap;
	NSHashTable* _buttonVisibilityObservers;
	NSHashTable* _forceHiddenButtons;
	GOOActionSheet* _actionSheet;
	int _routeButtonType;
	MDXScreenManager* _screenManager;

}

@property (nonatomic,readonly) MDXScreenManager * screenManager;              //@synthesize screenManager=_screenManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appWillResignActive:(id)arg1 ;
-(MDXScreenManager *)screenManager;
-(id)newActionSheet;
-(void)actionSheetDidDisappear:(id)arg1 cancelAction:(char)arg2 ;
-(id)newRegisteredPlaybackRouteButtonWithColor:(id)arg1 responder:(id)arg2 ;
-(void)addButtonVisibilityObserver:(id)arg1 ;
-(void)MDXOnlineScreensDidChange:(id)arg1 ;
-(void)MDXScreenSessionDidChange:(id)arg1 ;
-(void)screenGraftAttachChildForButton:(id)arg1 ;
-(void)connectToScreen:(id)arg1 ;
-(void)registerPlaybackRouteButton:(id)arg1 withColor:(id)arg2 responder:(id)arg3 ;
-(id)initWithScreenManager:(id)arg1 activeVideoNotifier:(id)arg2 systemNotifications:(id)arg3 MDXConfig:(id)arg4 ;
-(void)setPlaybackRouteButtonTypeWithMDXConfig:(id)arg1 ;
-(void)didPressButton:(id)arg1 ;
-(void)updateButton:(id)arg1 ;
-(void)setCastIconImageForButton:(id)arg1 withColor:(id)arg2 ;
-(void)screenGraftAttachChildForButton:(id)arg1 withVeType:(int)arg2 ;
-(void)notifyPlaybackRouteButtonVisibilityDidChange;
-(void)updateAllButtons;
-(void)switchAllButtonsState;
-(void)showButton:(id)arg1 ;
-(void)hideButton:(id)arg1 ;
-(void)logVisibilityUpdateForButton:(id)arg1 withVeType:(int)arg2 ;
-(void)logClickForButton:(id)arg1 withVeType:(int)arg2 ;
-(id)selectedMediaRouteClientDataForScreen:(id)arg1 ;
-(void)logClickForButton:(id)arg1 withVeType:(int)arg2 clientData:(id)arg3 ;
-(void)removeButtonVisibilityObserver:(id)arg1 ;
-(void)updateVisibilityForButton:(id)arg1 forceHidden:(char)arg2 ;
-(void)dealloc;
@end

