/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@class SKStoreProductViewController, NSString;

@interface IGAppInstallationsHelper : NSObject <SKStoreProductViewControllerDelegate> {

	SKStoreProductViewController* _controller;
	NSString* _appStoreViewControllerLastAppID;

}

@property (nonatomic,retain) SKStoreProductViewController * controller;               //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) NSString * appStoreViewControllerLastAppID;              //@synthesize appStoreViewControllerLastAppID=_appStoreViewControllerLastAppID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isBoomerangAppInstalled;
+(char)isLayoutAppInstalled;
+(void)openLayoutWithAsset:(id)arg1 assetIdentifier:(id)arg2 ;
+(void)openBoomerang;
+(char)isHyperlapseAppInstalled;
+(char)isFBAppInstalled;
+(char)isAppInstalled:(id)arg1 ;
+(void)logAppInstallationsInfo;
-(void)presentAppStoreViewControllerForAppID:(id)arg1 fromViewController:(id)arg2 ;
-(void)appDidEnterForeground;
-(void)setAppStoreViewControllerLastAppID:(NSString *)arg1 ;
-(NSString *)appStoreViewControllerLastAppID;
-(void)dealloc;
-(id)init;
-(SKStoreProductViewController *)controller;
-(void)setController:(SKStoreProductViewController *)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end

