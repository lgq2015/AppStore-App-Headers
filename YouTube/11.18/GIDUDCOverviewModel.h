/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GTLUserdatacontrolsFetchOverviewConfigResponse, NSError, GIDUDCService, NSArray;

@interface GIDUDCOverviewModel : NSObject {

	int _status;
	GTLUserdatacontrolsFetchOverviewConfigResponse* _overviewConfig;
	NSError* _error;
	GIDUDCService* _service;
	NSArray* _settingIDs;

}

@property (nonatomic,readonly) int status;                                                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) GTLUserdatacontrolsFetchOverviewConfigResponse * overviewConfig;              //@synthesize overviewConfig=_overviewConfig - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) GIDUDCService * service;                                                      //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSArray * settingIDs;                                                         //@synthesize settingIDs=_settingIDs - In the implementation block
-(NSArray *)settingIDs;
-(GTLUserdatacontrolsFetchOverviewConfigResponse *)overviewConfig;
-(id)initWithService:(id)arg1 settingIDs:(id)arg2 ;
-(NSError *)error;
-(void)reload;
-(int)status;
-(GIDUDCService *)service;
@end

