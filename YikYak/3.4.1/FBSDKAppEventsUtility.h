/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSDKAppEventsUtility : NSObject
+(id)advertiserID;
+(void)ensureOnMainThread;
+(id)activityParametersDictionaryForEvent:(id)arg1 implicitEventsOnly:(char)arg2 shouldAccessAdvertisingID:(char)arg3 ;
+(char)validateIdentifier:(id)arg1 ;
+(void)logAndNotify:(id)arg1 ;
+(long)unixTimeNow;
+(id)tokenStringToUseFor:(id)arg1 ;
+(id)flushReasonToString:(unsigned)arg1 ;
+(void)logAndNotify:(id)arg1 allowLogAsDeveloperError:(char)arg2 ;
+(unsigned)advertisingTrackingStatus;
+(id)attributionID;
+(id)persistenceFilePath:(id)arg1 ;
+(id)anonymousID;
+(id)retrievePersistedAnonymousID;
+(void)persistAnonymousID:(id)arg1 ;
+(char)regexValidateIdentifier:(id)arg1 ;
+(void)clearLibraryFiles;
@end

