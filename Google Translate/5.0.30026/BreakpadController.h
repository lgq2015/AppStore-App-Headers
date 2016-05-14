/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSDictionary;

@interface BreakpadController : NSObject {

	NSObject*<OS_dispatch_queue> queue_;
	void* breakpadRef_;
	NSMutableDictionary* configuration_;
	char enableUploads_;
	char started_;
	int uploadIntervalInSeconds_;
	NSDictionary* uploadTimeParameters_;

}
+(id)sharedInstance;
-(void)setUploadInterval:(int)arg1 ;
-(void)setUploadingEnabled:(char)arg1 ;
-(void)withBreakpadRef:(/*^block*/id)arg1 ;
-(void)setUploadingURL:(id)arg1 ;
-(void)sendStoredCrashReports;
-(void)setParametersToAddAtUploadTime:(id)arg1 ;
-(int)sendDelay;
-(void)reportWillBeSent;
-(void)threadUnsafeSendReportWithConfiguration:(id)arg1 withBreakpadRef:(void*)arg2 ;
-(void)addUploadParameter:(id)arg1 forKey:(id)arg2 ;
-(void)removeUploadParameterForKey:(id)arg1 ;
-(void)hasReportToUpload:(/*^block*/id)arg1 ;
-(void)getCrashReportCount:(/*^block*/id)arg1 ;
-(void)getNextReportConfigurationOrSendDelay:(/*^block*/id)arg1 ;
-(void)updateConfiguration:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start:(char)arg1 ;
-(id)initSingleton;
-(void)resetConfiguration;
@end

