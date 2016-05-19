/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTResponder.h>

@protocol YTResponder, YTDataServices, YTOfflineServices;
@class YTRemoveOfflineItemController, GIMMe, YTIdentityController, NSString;

@interface YTOfflinePlaylistActionController : NSObject <YTResponder> {

	YTRemoveOfflineItemController* _removeOfflineItemController;
	id<YTResponder> _parentResponder;
	GIMMe* _gimme;
	id<YTDataServices> _dataServices;
	id<YTOfflineServices> _offlineServices;
	YTIdentityController* _identityController;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                                   //@synthesize gimme=_gimme - In the implementation block
@property (nonatomic,retain) id<YTDataServices> dataServices;                        //@synthesize dataServices=_dataServices - In the implementation block
@property (nonatomic,retain) id<YTOfflineServices> offlineServices;                  //@synthesize offlineServices=_offlineServices - In the implementation block
@property (nonatomic,retain) YTIdentityController * identityController;              //@synthesize identityController=_identityController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;               //@synthesize parentResponder=_parentResponder - In the implementation block
-(void)setDataServices:(id<YTDataServices>)arg1 ;
-(void)setOfflineServices:(id<YTOfflineServices>)arg1 ;
-(id<YTResponder>)parentResponder;
-(id)initWithParentResponder:(id)arg1 ;
-(GIMMe *)gimme;
-(YTIdentityController *)identityController;
-(void)setGimme:(GIMMe *)arg1 ;
-(void)performActionWithPlaylistID:(id)arg1 offlineabilityRenderer:(id)arg2 status:(int)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(id<YTDataServices>)dataServices;
-(id<YTOfflineServices>)offlineServices;
-(void)showAddingToOfflineToast;
-(void)promptForMaximumOfflineQualityWithOfflineabilityRenderer:(id)arg1 completionBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(void)performAction:(int)arg1 withPlaylistID:(id)arg2 offlineabilityRenderer:(id)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(void)performActionWithPlaylistID:(id)arg1 offlineabilityRenderer:(id)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(void)performNotFoundActionWithPlaylistID:(id)arg1 ;
-(void)setIdentityController:(YTIdentityController *)arg1 ;
@end

