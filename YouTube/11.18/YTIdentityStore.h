/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTIdentityTransactionCommitter.h>

@class YTIdentityState, YTUserDefaults, YTIdentityNotifier, GIMMe, NSString;

@interface YTIdentityStore : NSObject <YTIdentityTransactionCommitter> {

	YTIdentityState* _currentIdentity;
	YTUserDefaults* _userDefaults;
	YTIdentityNotifier* _identityNotifier;
	GIMMe* _gimme;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                             //@synthesize gimme=_gimme - In the implementation block
@property (nonatomic,readonly) YTIdentityState * currentIdentity;              //@synthesize currentIdentity=_currentIdentity - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GIMMe *)gimme;
-(void)setGimme:(GIMMe *)arg1 ;
-(YTIdentityState *)currentIdentity;
-(id)lastSelectedIdentity;
-(id)readIdentityFromDisk;
-(char)doesIdentityHaveContent:(id)arg1 ;
-(void)changeToIdentity:(id)arg1 ;
-(void)storeCurrentIdentityToDisk;
-(id)init;
-(void)commitTransaction:(id)arg1 ;
@end

