/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSString;

@interface AMPDeviceInfo : NSObject {

	NSObject* networkInfo;
	NSString* _appVersion;
	NSString* _osVersion;
	NSString* _model;
	NSString* _carrier;
	NSString* _country;
	NSString* _language;
	NSString* _advertiserID;
	NSString* _vendorID;

}

@property (readonly) NSString * appVersion;                //@synthesize appVersion=_appVersion - In the implementation block
@property (readonly) NSString * osName; 
@property (readonly) NSString * osVersion;                 //@synthesize osVersion=_osVersion - In the implementation block
@property (readonly) NSString * manufacturer; 
@property (readonly) NSString * model;                     //@synthesize model=_model - In the implementation block
@property (readonly) NSString * carrier;                   //@synthesize carrier=_carrier - In the implementation block
@property (readonly) NSString * country;                   //@synthesize country=_country - In the implementation block
@property (readonly) NSString * language;                  //@synthesize language=_language - In the implementation block
@property (readonly) NSString * advertiserID;              //@synthesize advertiserID=_advertiserID - In the implementation block
@property (readonly) NSString * vendorID;                  //@synthesize vendorID=_vendorID - In the implementation block
+(id)getPhoneModel;
+(id)getAdvertiserID:(int)arg1 ;
+(id)getVendorID:(int)arg1 ;
+(id)getPlatformString;
-(NSString *)carrier;
-(NSString *)advertiserID;
-(void)dealloc;
-(id)init;
-(NSString *)model;
-(NSString *)language;
-(NSString *)osName;
-(NSString *)country;
-(NSString *)osVersion;
-(NSString *)manufacturer;
-(NSString *)vendorID;
-(NSString *)appVersion;
-(id)generateUUID;
@end

