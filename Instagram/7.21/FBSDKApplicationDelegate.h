/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/FBSDKContainerViewControllerDelegate.h>

@protocol FBSDKURLOpening;
@class FBSDKBridgeAPIRequest, UIViewController, NSString;

@interface FBSDKApplicationDelegate : NSObject <FBSDKContainerViewControllerDelegate> {

	FBSDKBridgeAPIRequest* _pendingRequest;
	/*^block*/id _pendingRequestCompletionBlock;
	id<FBSDKURLOpening> _pendingURLOpen;
	char _expectingBackground;
	UIViewController* _safariViewController;
	char _active;

}

@property (getter=isActive,nonatomic,readonly) char active;              //@synthesize active=_active - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initializeWithLaunchData:(id)arg1 ;
+(id)sharedInstance;
+(void)load;
-(char)_handleBridgeAPIResponseURL:(id)arg1 sourceApplication:(id)arg2 ;
-(void)_logIfAppLinkEvent:(id)arg1 ;
-(void)_cancelBridgeRequest;
-(void)openURLWithSafariViewController:(id)arg1 sender:(id)arg2 fromViewController:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)openURL:(id)arg1 sender:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)viewControllerDidDisappear:(id)arg1 animated:(char)arg2 ;
-(void)openBridgeAPIRequest:(id)arg1 useSafariViewController:(char)arg2 fromViewController:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isActive;
-(id)_init;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
@end

