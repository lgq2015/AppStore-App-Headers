/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGMixiAdvancedOptionsDelegate.h>

@protocol IGShareServiceConfigureManagerDelegate;
@class UIViewController, NSString;

@interface IGShareServiceConfigureManager : NSObject <IGActionSheetDelegate, IGMixiAdvancedOptionsDelegate> {

	int _presentationStyle;
	id<IGShareServiceConfigureManagerDelegate> _delegate;

}

@property (assign,nonatomic) int presentationStyle;                                                   //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic,__weak) id<IGShareServiceConfigureManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)onFlickrLoginCompleted;
-(void)onTwitterOAuthCompleted;
-(void)onFacebookCurrentUserInfoLoaded;
-(void)onFoursquareLoginCompleted;
-(void)onServiceReauthenticationStarted:(id)arg1 ;
-(void)onServiceReauthenticationFinished:(id)arg1 ;
-(void)onServiceReauthenticationLoginNeeded:(id)arg1 ;
-(void)displayViewController:(id)arg1 forServiceType:(int)arg2 ;
-(void)onFacebookLoginCompleted;
-(void)showAdvancedOptionsForServiceType:(int)arg1 ;
-(void)onWeiboLoginCompleted;
-(void)onMixiLoginCompleted;
-(void)onTumblrLoginCompleted;
-(void)onVkLoginCompleted;
-(void)onVkLoginCancelledLogin;
-(void)onAmebaLoginCompleted;
-(void)onOdnoklassnikiLoginCompleted;
-(void)displayViewController:(id)arg1 forServiceType:(int)arg2 animated:(char)arg3 ;
-(void)onServiceLoginCompleted:(int)arg1 animated:(char)arg2 ;
-(void)configureServiceType:(int)arg1 ;
-(void)onServiceLoginCompleted:(int)arg1 ;
-(void)presentMixiPrivacyPicker;
-(void)mixiDidSelectPrivacySetting:(int)arg1 ;
-(void)mixiDidCancelPrivacySetting;
-(void)dismissEmailModal;
-(void)setPresentationStyle:(int)arg1 ;
-(void)setDelegate:(id<IGShareServiceConfigureManagerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(id<IGShareServiceConfigureManagerDelegate>)delegate;
-(int)presentationStyle;
-(UIViewController *)viewController;
@end

