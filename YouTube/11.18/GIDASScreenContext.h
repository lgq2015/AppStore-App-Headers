/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSOAuthorization, GIDBrowserOpener;
@class UINavigationController, SSOService, ULRManager;

@interface GIDASScreenContext : NSObject {

	id<SSOAuthorization> _authorization;
	id<GIDBrowserOpener> _browserOpener;
	UINavigationController* _navigationController;
	SSOService* _SSOService;
	ULRManager* _ULRManager;

}

@property (nonatomic,retain) id<SSOAuthorization> authorization;                         //@synthesize authorization=_authorization - In the implementation block
@property (nonatomic,retain) id<GIDBrowserOpener> browserOpener;                         //@synthesize browserOpener=_browserOpener - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (setter=SOService,nonatomic,retain) SSOService * SSOService;                   //@synthesize SSOService=_SSOService - In the implementation block
@property (nonatomic,retain) ULRManager * ULRManager;                                    //@synthesize ULRManager=_ULRManager - In the implementation block
-(id<SSOAuthorization>)authorization;
-(void)setBrowserOpener:(id<GIDBrowserOpener>)arg1 ;
-(id<GIDBrowserOpener>)browserOpener;
-(id)initWithAuthorization:(id)arg1 navigationController:(id)arg2 SSOService:(id)arg3 ULRManager:(id)arg4 ;
-(SSOService *)SSOService;
-(ULRManager *)ULRManager;
-(void)setAuthorization:(id<SSOAuthorization>)arg1 ;
-(void)setSSOService:(SSOService *)arg1 ;
-(void)setULRManager:(ULRManager *)arg1 ;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
@end

