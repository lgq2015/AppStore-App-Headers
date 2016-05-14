/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAActionManager.h>
#import <WhatsApp/WAUpgradeCallback.h>

@class WADownloadBackupOperation_Documents, WACloudStatus, NSString;

@interface WAMediaRestore : WAActionManager <WAUpgradeCallback> {

	WADownloadBackupOperation_Documents* _downloadOperation;

}

@property (nonatomic,readonly) WACloudStatus * downloadCloudStatus; 
@property (nonatomic,retain) WADownloadBackupOperation_Documents * downloadOperation;              //@synthesize downloadOperation=_downloadOperation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2 ;
+(void)handleApplicationDidFinishLaunching;
+(void)prepareForMediaRestore;
+(char)filteredBadgeValueWithBase:(char)arg1 ;
+(void)restoreMediaAtNextOpportunity;
+(void)cancelMediaRestore;
+(id)currentRestore;
+(void)updateMediaRestoreListeners;
+(void)checkForRequiredMediaRestore;
+(char)needsMediaRestore;
+(void)clearMediaRestore;
+(void)previousBackupChanged:(id)arg1 ;
+(void)updateCloudStatusFilesToInclude;
+(char)canStartFileDownload;
+(unsigned)calculateCurrentStatus;
+(void)performCleanup;
+(char)isFailureStatus:(unsigned)arg1 ;
+(void)ignoreNetworkStatus;
+(void)setCurrentStatus:(unsigned)arg1 ;
+(unsigned)currentStatus;
-(void)downloadRelevantFilesInDirectory:(id)arg1 withInfo:(id)arg2 ;
-(void)extractRelevantFilesFromPath:(id)arg1 withInfo:(id)arg2 ;
-(void)setDownloadOperation:(WADownloadBackupOperation_Documents *)arg1 ;
-(WADownloadBackupOperation_Documents *)downloadOperation;
-(unsigned)maximumPhase;
-(WACloudStatus *)downloadCloudStatus;
-(id)initWithOptions:(unsigned)arg1 ;
-(void)start;
-(id)errorDomain;
@end

