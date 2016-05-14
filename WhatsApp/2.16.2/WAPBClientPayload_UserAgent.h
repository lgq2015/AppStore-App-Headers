/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/GPBMessage.h>

@class WAPBClientPayload_UserAgent_AppVersion, NSString;

@interface WAPBClientPayload_UserAgent : GPBMessage

@property (assign,nonatomic) char hasPlatform; 
@property (assign,nonatomic) int platform; 
@property (assign,nonatomic) char hasAppVersion; 
@property (nonatomic,retain) WAPBClientPayload_UserAgent_AppVersion * appVersion; 
@property (assign,nonatomic) char hasMcc; 
@property (nonatomic,copy) NSString * mcc; 
@property (assign,nonatomic) char hasMnc; 
@property (nonatomic,copy) NSString * mnc; 
@property (assign,nonatomic) char hasOsVersion; 
@property (nonatomic,copy) NSString * osVersion; 
@property (assign,nonatomic) char hasManufacturer; 
@property (nonatomic,copy) NSString * manufacturer; 
@property (assign,nonatomic) char hasDevice; 
@property (nonatomic,copy) NSString * device; 
@property (assign,nonatomic) char hasOsBuildNumber; 
@property (nonatomic,copy) NSString * osBuildNumber; 
@property (assign,nonatomic) char hasPhoneId; 
@property (nonatomic,copy) NSString * phoneId; 
@property (assign,nonatomic) char hasReleaseChannel; 
@property (assign,nonatomic) int releaseChannel; 
@property (assign,nonatomic) char hasLocaleLanguageIso6391; 
@property (nonatomic,copy) NSString * localeLanguageIso6391; 
@property (assign,nonatomic) char hasLocaleCountryIso31661Alpha2; 
@property (nonatomic,copy) NSString * localeCountryIso31661Alpha2; 
+(id)descriptor;
@end

