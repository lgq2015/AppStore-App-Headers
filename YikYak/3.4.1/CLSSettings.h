/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface CLSSettings : NSObject {

	NSDictionary* _settingsDictionary;

}

@property (nonatomic,copy,readonly) NSString * reportsEndpoint; 
@property (nonatomic,copy,readonly) NSString * betaEndpoint; 
@property (nonatomic,copy,readonly) NSNumber * betaSuspendDuration; 
@property (nonatomic,readonly) char shouldPackageReports; 
@property (nonatomic,readonly) char shouldSubmitReports; 
@property (nonatomic,readonly) char canProcessUrgentReports; 
@property (nonatomic,readonly) char errorReportingEnabled; 
@property (nonatomic,readonly) char customExceptionsEnabled; 
@property (nonatomic,readonly) char crashReportingEnabled; 
@property (nonatomic,readonly) char userPromptEnabled; 
@property (nonatomic,readonly) unsigned errorLogBufferSize; 
@property (nonatomic,readonly) unsigned logBufferSize; 
@property (nonatomic,readonly) unsigned maxCustomExceptions; 
@property (nonatomic,readonly) unsigned maxCustomKeys; 
@property (nonatomic,copy,readonly) NSString * interactivePromptTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptMessage; 
@property (nonatomic,copy,readonly) NSString * interactivePromptCancelTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptSendTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptAlwaysSendTitle; 
@property (nonatomic,readonly) NSDictionary * settingsDictionary;                             //@synthesize settingsDictionary=_settingsDictionary - In the implementation block
-(NSDictionary *)settingsDictionary;
-(id)promptValueForSettingsKey:(id)arg1 withLocalizedKey:(id)arg2 defaultValue:(id)arg3 ;
-(NSNumber *)betaSuspendDuration;
-(NSString *)betaEndpoint;
-(char)crashReportingEnabled;
-(char)errorReportingEnabled;
-(char)customExceptionsEnabled;
-(unsigned)maxCustomExceptions;
-(unsigned)errorLogBufferSize;
-(unsigned)logBufferSize;
-(unsigned)maxCustomKeys;
-(char)canProcessUrgentReports;
-(char)userPromptEnabled;
-(char)shouldPackageReports;
-(NSString *)interactivePromptTitle;
-(NSString *)interactivePromptMessage;
-(NSString *)interactivePromptCancelTitle;
-(NSString *)interactivePromptSendTitle;
-(NSString *)interactivePromptAlwaysSendTitle;
-(NSString *)reportsEndpoint;
-(char)shouldSubmitReports;
-(id)initWithDictionary:(id)arg1 ;
-(id)configuration;
-(id)defaultConfiguration;
-(id)valueForConfigurationKey:(id)arg1 ;
@end

