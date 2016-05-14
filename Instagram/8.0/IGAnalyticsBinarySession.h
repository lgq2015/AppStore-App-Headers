/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSDate, NSString, NSArray;

@interface IGAnalyticsBinarySession : NSObject {

	NSMutableArray* _currentBatch;
	NSDate* _startTime;
	NSString* _sessionID;
	NSString* _deviceID;
	NSString* _appID;
	NSString* _deviceSoftwareVersion;
	NSString* _deviceHardwareVersion;
	NSString* _appVersion;

}

@property (nonatomic,readonly) NSString * sessionID;                          //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * deviceID;                           //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) NSString * appID;                              //@synthesize appID=_appID - In the implementation block
@property (nonatomic,readonly) NSString * deviceSoftwareVersion;              //@synthesize deviceSoftwareVersion=_deviceSoftwareVersion - In the implementation block
@property (nonatomic,readonly) NSString * deviceHardwareVersion;              //@synthesize deviceHardwareVersion=_deviceHardwareVersion - In the implementation block
@property (nonatomic,readonly) NSString * appVersion;                         //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,readonly) NSDate * startTime;                            //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSArray * currentBatch; 
-(id)initWithAppID:(id)arg1 appVersion:(id)arg2 deviceID:(id)arg3 deviceSoftwareVersion:(id)arg4 deviceHardwareVersion:(id)arg5 ;
-(id)loggingDataForCurrentBatch;
-(void)beginNewBatch;
-(void)addEvent:(id)arg1 ;
-(NSDate *)startTime;
-(NSString *)deviceSoftwareVersion;
-(NSString *)deviceHardwareVersion;
-(NSArray *)currentBatch;
-(NSString *)sessionID;
-(NSString *)deviceID;
-(NSString *)appVersion;
-(NSString *)appID;
@end

