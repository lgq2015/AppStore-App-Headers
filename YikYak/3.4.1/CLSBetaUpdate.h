/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface CLSBetaUpdate : NSObject {

	NSURL* _url;
	NSString* _version;

}

@property (nonatomic,readonly) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                    //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptTitle; 
@property (nonatomic,copy,readonly) NSString * promptMessage; 
@property (nonatomic,copy,readonly) NSString * cancelLabel; 
@property (nonatomic,copy,readonly) NSString * installLabel; 
+(id)betaUpdateWithDictionary:(id)arg1 error:(id*)arg2 ;
-(NSString *)promptMessage;
-(NSString *)promptTitle;
-(NSString *)cancelLabel;
-(NSString *)installLabel;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)version;
@end

