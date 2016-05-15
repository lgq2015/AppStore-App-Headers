/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/FABKit.h>
#import <Yik Yak/CLSCrashReportingControllerDelegate.h>
#import <Yik Yak/CLSBetaControllerDelegate.h>
#import <Yik Yak/WKScriptMessageHandler.h>

@protocol CrashlyticsDelegate;
@class CLSCrashReportingController, CLSBetaController, NSString;

@interface Crashlytics : NSObject <FABKit, CLSCrashReportingControllerDelegate, CLSBetaControllerDelegate, WKScriptMessageHandler> {

	id<CrashlyticsDelegate> _delegate;
	CLSCrashReportingController* _crashReportingController;
	CLSBetaController* _betaController;

}

@property (nonatomic,copy,readonly) NSString * APIKey; 
@property (nonatomic,copy,readonly) NSString * version; 
@property (assign,nonatomic) char debugMode; 
@property (assign,nonatomic) id<CrashlyticsDelegate> delegate; 
@property (nonatomic,readonly) CLSBetaController * betaController;              //@synthesize betaController=_betaController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)kitDisplayVersion;
+(id)startWithAPIKey:(id)arg1 delegate:(id)arg2 ;
+(id)startWithAPIKey:(id)arg1 ;
+(void)setObjectValue:(id)arg1 forKey:(id)arg2 ;
+(void)setIntValue:(int)arg1 forKey:(id)arg2 ;
+(void)setBoolValue:(char)arg1 forKey:(id)arg2 ;
+(void)setFloatValue:(float)arg1 forKey:(id)arg2 ;
+(void)setDevelopmentPlatformName:(id)arg1 ;
+(void)setDevelopmentPlatformVersion:(id)arg1 ;
+(void)logEvent:(id)arg1 attributes:(id)arg2 ;
+(id)kitBuildVersion;
+(void)initializeIfNeeded;
+(id)startWithAPIKey:(id)arg1 afterDelay:(double)arg2 ;
+(id)startWithAPIKey:(id)arg1 delegate:(id)arg2 afterDelay:(double)arg3 ;
+(id)sharedInstance;
+(id)bundleIdentifier;
+(void)logEvent:(id)arg1 ;
+(void)setUserEmail:(id)arg1 ;
+(void)setUserName:(id)arg1 ;
+(void)setUserIdentifier:(id)arg1 ;
-(void)crash;
-(NSString *)APIKey;
-(id)initWithSuper;
-(void)warnDelegateAboutMethods;
-(id)installID;
-(char)isFirstInstall;
-(char)isCrashlyticsStarted;
-(void)setObjectValue:(id)arg1 forKey:(id)arg2 ;
-(void)setIntValue:(int)arg1 forKey:(id)arg2 ;
-(void)setBoolValue:(char)arg1 forKey:(id)arg2 ;
-(void)setFloatValue:(float)arg1 forKey:(id)arg2 ;
-(void)setDevelopmentPlatformName:(id)arg1 ;
-(void)setDevelopmentPlatformVersion:(id)arg1 ;
-(void)recordError:(id)arg1 withAdditionalUserInfo:(id)arg2 ;
-(char)delegateRespondsToLegacyMethods;
-(char)reportingControllerMustInformDelegateOfReports:(id)arg1 ;
-(void)logEvent:(id)arg1 attributes:(id)arg2 ;
-(char)shouldInstallCrashCallback;
-(void)detectedCrash;
-(char)reportingControllerCanUseBackgroundSessions:(id)arg1 ;
-(void)reportingController:(id)arg1 didDetectReportForLastExecution:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reportingController:(id)arg1 internalDidDetectReportForLastExecution:(id)arg2 ;
-(char)reportingController:(id)arg1 ensureDeliveryOfUnixSignal:(int)arg2 ;
-(id)APIKeyForCrashReportingController:(id)arg1 ;
-(id)installIDForCrashReportingController:(id)arg1 ;
-(char)isFirstInstallForCrashReportingController:(id)arg1 ;
-(id)settingsForCrashReportingController:(id)arg1 ;
-(id)APIKeyForBetaController:(id)arg1 ;
-(id)settingsForBetaController:(id)arg1 ;
-(id)kitInfo;
-(void)setKitInfo:(id)arg1 ;
-(id)settingsDictionary;
-(void)setDebugMode:(char)arg1 ;
-(char)debugMode;
-(void)throwException;
-(id)developmentPlatformName;
-(id)developmentPlatformVersion;
-(void)recordCustomExceptionName:(id)arg1 reason:(id)arg2 frameArray:(id)arg3 ;
-(void)monitorErrorsForUIWebView:(id)arg1 ;
-(char)handleWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)monitorErrorsForWKWebViewConfiguration:(id)arg1 ;
-(CLSBetaController *)betaController;
-(void)recordError:(id)arg1 ;
-(void)setDelegate:(id<CrashlyticsDelegate>)arg1 ;
-(id)init;
-(id<CrashlyticsDelegate>)delegate;
-(id)bundleIdentifier;
-(void)start;
-(NSString *)version;
-(void)logEvent:(id)arg1 ;
-(void)setUserEmail:(id)arg1 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(void)setUserName:(id)arg1 ;
-(void)setUserIdentifier:(id)arg1 ;
@end

