/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GOOAlertViewDelegate.h>
#import <YouTube/YTUpgradeWorkerDelegate.h>
#import <YouTube/YTResponder.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol YTAppConfig, YTResponder;
@class YTGlobalConfig, GOOAlertView, YTConfirmDialogController, GIMMe, NSString;

@interface YTUpgradeController : NSObject <GOOAlertViewDelegate, YTUpgradeWorkerDelegate, YTResponder, UIAlertViewDelegate> {

	YTGlobalConfig* _globalConfig;
	GOOAlertView* _alertView;
	id<YTAppConfig> _appConfig;
	YTConfirmDialogController* _confirmDialogController;
	id<YTResponder> _parentResponder;
	GIMMe* _gimme;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                                  //@synthesize gimme=_gimme - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;              //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(id)initWithParentResponder:(id)arg1 ;
-(GIMMe *)gimme;
-(void)setGimme:(GIMMe *)arg1 ;
-(void)alertViewDidDisappear:(id)arg1 cancelAction:(char)arg2 ;
-(void)setConfirmDialogController:(id)arg1 ;
-(void)showUpgradeDialog;
-(void)showOldUpgradeDialog;
-(id)alertViewWithType:(int)arg1 ;
-(void)requestUpgradeCheckWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

