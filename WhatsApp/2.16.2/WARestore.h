/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAActionManager.h>
#import <WhatsApp/WAUpgradeCallback.h>

@class WATriggeredOperation, NSMutableArray, NSString, WACloudBackupManager, WAChatStorage, WABackupInformation, WACloudStatus;

@interface WARestore : WAActionManager <WAUpgradeCallback> {

	id _cloudStatusListener;
	char _shouldRestore;
	WATriggeredOperation* _delayedStart;
	NSMutableArray* _untarOperations;
	NSString* _localRestorePath;
	unsigned _backgroundTask;
	char _additionalSpaceRequired;
	WACloudBackupManager* _manager;
	WAChatStorage* _storage;
	WABackupInformation* _backupInformation;
	WACloudStatus* _cloudStatus;
	unsigned long long _size;
	unsigned long long _additionalSpaceAmount;

}

@property (nonatomic,readonly) char encounteredTARError; 
@property (nonatomic,readonly) unsigned long long size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) char additionalSpaceRequired;                          //@synthesize additionalSpaceRequired=_additionalSpaceRequired - In the implementation block
@property (nonatomic,readonly) unsigned long long additionalSpaceAmount;              //@synthesize additionalSpaceAmount=_additionalSpaceAmount - In the implementation block
@property (nonatomic,readonly) WACloudBackupManager * manager;                        //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) WAChatStorage * storage;                               //@synthesize storage=_storage - In the implementation block
@property (retain) WABackupInformation * backupInformation;                           //@synthesize backupInformation=_backupInformation - In the implementation block
@property (nonatomic,retain) WACloudStatus * cloudStatus;                             //@synthesize cloudStatus=_cloudStatus - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2 ;
-(unsigned)maximumPhase;
-(unsigned long long)additionalSpaceAmount;
-(void)removeTemporaryDirectory;
-(WABackupInformation *)backupInformation;
-(void)completeWithReason:(unsigned)arg1 ;
-(id)initWithManager:(id)arg1 chatStorage:(id)arg2 options:(unsigned)arg3 completion:(/*^block*/id)arg4 ;
-(void)setBackupInformation:(WABackupInformation *)arg1 ;
-(void)willEndForegroundTask:(id)arg1 ;
-(void)unregisterForCloudStatus;
-(void)registerForCloudStatus;
-(void)calculateSizeParameters;
-(char)additionalSpaceRequired;
-(void)addFirstOperations;
-(void)internalStartRestore;
-(char)encounteredTARError;
-(WAChatStorage *)storage;
-(WACloudBackupManager *)manager;
-(id)initWithOptions:(unsigned)arg1 ;
-(unsigned long long)size;
-(void)dealloc;
-(void)start;
-(void)addOperation:(id)arg1 ;
-(void)willEnterForeground:(id)arg1 ;
-(id)errorDomain;
-(void)setCloudStatus:(WACloudStatus *)arg1 ;
-(WACloudStatus *)cloudStatus;
-(void)endBackgroundTask;
@end

