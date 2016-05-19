/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTRestrictedContentFlowDelegate.h>
#import <YouTube/GOOAlertViewDelegate.h>
#import <YouTube/YTResponder.h>

@protocol YTResponder, YTDataServices, YTPlayerServices, YTOfflineServices;
@class YTRestrictedContentFlow, UIView, GOOAlertView, GIMMe, YTIdentityController, YTRemoveOfflineItemController, NSString;

@interface YTOfflineVideoActionController : NSObject <YTRestrictedContentFlowDelegate, GOOAlertViewDelegate, YTResponder> {

	YTRestrictedContentFlow* _restrictedContentFlow;
	CGRect _authenticationRect;
	UIView* _authenticationView;
	GOOAlertView* _firstAddAlertView;
	char _offlineVideoActionInProgress;
	id<YTResponder> _parentResponder;
	GIMMe* _gimme;
	id<YTDataServices> _dataServices;
	id<YTPlayerServices> _playerServices;
	id<YTOfflineServices> _offlineServices;
	YTIdentityController* _identityController;
	YTRemoveOfflineItemController* _removeOfflineItemController;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                                                     //@synthesize gimme=_gimme - In the implementation block
@property (nonatomic,retain) id<YTDataServices> dataServices;                                          //@synthesize dataServices=_dataServices - In the implementation block
@property (nonatomic,retain) id<YTPlayerServices> playerServices;                                      //@synthesize playerServices=_playerServices - In the implementation block
@property (nonatomic,retain) id<YTOfflineServices> offlineServices;                                    //@synthesize offlineServices=_offlineServices - In the implementation block
@property (nonatomic,retain) YTIdentityController * identityController;                                //@synthesize identityController=_identityController - In the implementation block
@property (nonatomic,retain) YTRemoveOfflineItemController * removeOfflineItemController;              //@synthesize removeOfflineItemController=_removeOfflineItemController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;                                 //@synthesize parentResponder=_parentResponder - In the implementation block
-(void)setDataServices:(id<YTDataServices>)arg1 ;
-(void)setOfflineServices:(id<YTOfflineServices>)arg1 ;
-(id<YTResponder>)parentResponder;
-(id)initWithParentResponder:(id)arg1 ;
-(GIMMe *)gimme;
-(YTIdentityController *)identityController;
-(void)setGimme:(GIMMe *)arg1 ;
-(void)alertViewDidDisappear:(id)arg1 ;
-(id<YTDataServices>)dataServices;
-(id<YTOfflineServices>)offlineServices;
-(void)showAddingToOfflineToast;
-(void)promptForMaximumOfflineQualityWithOfflineabilityRenderer:(id)arg1 completionBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(void)setIdentityController:(YTIdentityController *)arg1 ;
-(void)performAction:(int)arg1 withVideoID:(id)arg2 playerData:(id)arg3 offlineabilityRenderer:(id)arg4 fromRect:(CGRect)arg5 inView:(id)arg6 ;
-(int)pinTypesForAction:(int)arg1 ;
-(void)authenticateAndOfflineWithVideoID:(id)arg1 playerData:(id)arg2 offlineabilityRenderer:(id)arg3 pinTypes:(int)arg4 fromRect:(CGRect)arg5 inView:(id)arg6 ;
-(void)performAction:(int)arg1 withOfflineVideo:(id)arg2 status:(int)arg3 playerData:(id)arg4 offlineabilityRenderer:(id)arg5 fromRect:(CGRect)arg6 inView:(id)arg7 ;
-(int)inferActionForVideo:(id)arg1 ;
-(int)pinTypesForAction:(int)arg1 offlineStatus:(int)arg2 ;
-(void)promptRemoveVideo:(id)arg1 ;
-(void)promptRemovePendingVideo:(id)arg1 ;
-(void)promptRemovePlaybackPausedVideo:(id)arg1 ;
-(int)inferActionForOfflineVideo:(id)arg1 ;
-(void)promptRemoveOfflineVideo:(id)arg1 ;
-(void)promptRemovePendingOfflineVideo:(id)arg1 ;
-(void)promptRemovePlaybackPausedOfflineVideo:(id)arg1 ;
-(void)showUpsell:(id)arg1 videoID:(id)arg2 ;
-(id<YTPlayerServices>)playerServices;
-(void)showUpsellWithOfflineabilityRenderer:(id)arg1 videoID:(id)arg2 ;
-(YTRemoveOfflineItemController *)removeOfflineItemController;
-(void)restrictedContentFlowDidComplete;
-(void)restrictedContentFlowDidFailWithError:(id)arg1 ;
-(void)restrictedContentFlowConfirmationDidCancel;
-(id)playerRequestForVideoID:(id)arg1 ;
-(void)performAction:(int)arg1 withVideoID:(id)arg2 playerData:(id)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(void)performAction:(int)arg1 withVideoID:(id)arg2 offlineabilityRenderer:(id)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(void)performActionWithVideoID:(id)arg1 playerData:(id)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(void)performActionWithVideoID:(id)arg1 offlineabilityRenderer:(id)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(void)performActionForUpsell:(id)arg1 videoID:(id)arg2 navigationEndpoint:(id)arg3 serviceEndpoint:(id)arg4 upsellParentResponder:(id)arg5 ;
-(void)performAction:(int)arg1 withVideo:(id)arg2 status:(int)arg3 playerData:(id)arg4 offlineabilityRenderer:(id)arg5 fromRect:(CGRect)arg6 inView:(id)arg7 ;
-(void)didPressShow;
-(void)setPlayerServices:(id<YTPlayerServices>)arg1 ;
-(void)setRemoveOfflineItemController:(YTRemoveOfflineItemController *)arg1 ;
-(void)dealloc;
@end

