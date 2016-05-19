/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface YTSpaceCastDevice : NSObject {

	char _showUX;
	char _available;
	NSString* _deviceID;
	NSString* _corpusSummary;
	NSString* _FQDN;
	NSString* _securePort;
	int _consecutiveErrorCount;

}

@property (nonatomic,copy,readonly) NSString * deviceID;                       //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * corpusSummary;                  //@synthesize corpusSummary=_corpusSummary - In the implementation block
@property (nonatomic,copy,readonly) NSString * FQDN;                           //@synthesize FQDN=_FQDN - In the implementation block
@property (nonatomic,copy,readonly) NSString * securePort;                     //@synthesize securePort=_securePort - In the implementation block
@property (nonatomic,readonly) char showUX;                                    //@synthesize showUX=_showUX - In the implementation block
@property (getter=isAvailable,nonatomic,readonly) char available;              //@synthesize available=_available - In the implementation block
@property (assign,nonatomic) int consecutiveErrorCount;                        //@synthesize consecutiveErrorCount=_consecutiveErrorCount - In the implementation block
-(void)setConsecutiveErrorCount:(int)arg1 ;
-(id)getCachedStreamURLForVideoID:(id)arg1 originalStreamURL:(id)arg2 ;
-(char)showUX;
-(int)consecutiveErrorCount;
-(NSString *)corpusSummary;
-(NSString *)FQDN;
-(id)getCacheURLForVideos:(id)arg1 ;
-(id)initWithDeviceID:(id)arg1 corpusSummary:(id)arg2 FQDN:(id)arg3 securePort:(id)arg4 showUX:(char)arg5 ;
-(id)getMetadataURLForVideoID:(id)arg1 ;
-(NSString *)securePort;
-(char)isAvailable;
-(void)invalidate;
-(NSString *)deviceID;
@end

