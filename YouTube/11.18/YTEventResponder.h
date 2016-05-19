/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/MDXRemoteClientResponderProvider.h>
#import <YouTube/YTSupplementaryErrorTextResponderProvider.h>
#import <YouTube/YTAppResponderProtocol.h>
#import <YouTube/YTInfoCardControllerResponderProvider.h>

@protocol YTResponder, YTDataServices, YTIdentityGlobals, YTOfflineServices, YTPlayerServices, MDXServices, YTNavigationProtocol;
@class YTToastEventHandler, NSArray, YTFetchDialogController, YTConfirmDialogController, YTAdFeedbackController, YTFancyDismissibleDialogController, YTDirectInviteReceivedDialogController, YTInfoCardController, NSString;

@interface YTEventResponder : NSObject <MDXRemoteClientResponderProvider, YTSupplementaryErrorTextResponderProvider, YTAppResponderProtocol, YTInfoCardControllerResponderProvider> {

	YTToastEventHandler* _toastEventHandler;
	id<YTResponder> _parentResponder;
	NSArray* _eventGroupHandlers;
	id _services;
	id<YTDataServices> _dataServices;
	id<YTIdentityGlobals> _identityGlobals;
	id<YTOfflineServices> _offlineServices;
	id<YTPlayerServices> _playerServices;
	id<MDXServices> _MDXServices;
	id<YTNavigationProtocol> _navigation;
	YTFetchDialogController* _fetchDialogController;
	YTConfirmDialogController* _confirmDialogController;
	YTAdFeedbackController* _adFeedbackController;
	YTFancyDismissibleDialogController* _fancyDismissibleDialogController;
	YTDirectInviteReceivedDialogController* _directInviteReceivedDialogController;
	YTInfoCardController* _infoCardController;

}

@property (nonatomic,readonly) NSArray * eventGroupHandlers;                                                               //@synthesize eventGroupHandlers=_eventGroupHandlers - In the implementation block
@property (nonatomic,readonly) YTAdFeedbackController * adFeedbackController;                                              //@synthesize adFeedbackController=_adFeedbackController - In the implementation block
@property (nonatomic,readonly) YTConfirmDialogController * confirmDialogController;                                        //@synthesize confirmDialogController=_confirmDialogController - In the implementation block
@property (nonatomic,readonly) YTFancyDismissibleDialogController * fancyDismissibleDialogController;                      //@synthesize fancyDismissibleDialogController=_fancyDismissibleDialogController - In the implementation block
@property (nonatomic,readonly) YTFetchDialogController * fetchDialogController;                                            //@synthesize fetchDialogController=_fetchDialogController - In the implementation block
@property (nonatomic,readonly) YTInfoCardController * infoCardController;                                                  //@synthesize infoCardController=_infoCardController - In the implementation block
@property (nonatomic,readonly) YTDirectInviteReceivedDialogController * directInviteReceivedDialogController;              //@synthesize directInviteReceivedDialogController=_directInviteReceivedDialogController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;                                                     //@synthesize parentResponder=_parentResponder - In the implementation block
@property (nonatomic,retain) id<YTNavigationProtocol> navigation;                                                          //@synthesize navigation=_navigation - In the implementation block
@property (nonatomic,retain) id services;                                                                                  //@synthesize services=_services - In the implementation block
@property (nonatomic,retain) id<YTDataServices> dataServices;                                                              //@synthesize dataServices=_dataServices - In the implementation block
@property (nonatomic,retain) id<YTOfflineServices> offlineServices;                                                        //@synthesize offlineServices=_offlineServices - In the implementation block
@property (nonatomic,retain) id<YTPlayerServices> playerServices;                                                          //@synthesize playerServices=_playerServices - In the implementation block
@property (nonatomic,retain) id<MDXServices> MDXServices;                                                                  //@synthesize MDXServices=_MDXServices - In the implementation block
@property (nonatomic,retain) id<YTIdentityGlobals> identityGlobals;                                                        //@synthesize identityGlobals=_identityGlobals - In the implementation block
-(void)addEventGroupHandlers:(id)arg1 ;
-(YTConfirmDialogController *)confirmDialogController;
-(void)setMDXServices:(id<MDXServices>)arg1 ;
-(YTFetchDialogController *)fetchDialogController;
-(void)setServicesForEventGroupHandlers;
-(id<YTIdentityGlobals>)identityGlobals;
-(id<YTNavigationProtocol>)navigation;
-(id<MDXServices>)MDXServices;
-(void)setDataServices:(id<YTDataServices>)arg1 ;
-(void)setIdentityGlobals:(id<YTIdentityGlobals>)arg1 ;
-(void)setNavigation:(id<YTNavigationProtocol>)arg1 ;
-(void)setOfflineServices:(id<YTOfflineServices>)arg1 ;
-(id<YTResponder>)parentResponder;
-(id<YTDataServices>)dataServices;
-(id<YTOfflineServices>)offlineServices;
-(id<YTPlayerServices>)playerServices;
-(void)setPlayerServices:(id<YTPlayerServices>)arg1 ;
-(id)remoteClient;
-(NSArray *)eventGroupHandlers;
-(void)getSupplementaryErrorTextCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(YTAdFeedbackController *)adFeedbackController;
-(YTFancyDismissibleDialogController *)fancyDismissibleDialogController;
-(YTDirectInviteReceivedDialogController *)directInviteReceivedDialogController;
-(YTInfoCardController *)infoCardController;
-(void)setInfoCardPlayerData:(id)arg1 parentResponder:(id)arg2 ;
-(id)infoCardDrawerViewControllerWithAppearanceStyle:(int)arg1 ;
-(id)infoCardTeaserOverlayViewController;
-(id)infoCardButton;
-(char)infoCardsActive;
-(id)relevantCard;
-(id)init;
-(id)services;
-(void)setServices:(id)arg1 ;
@end

