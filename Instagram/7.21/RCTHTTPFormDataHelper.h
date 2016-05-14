/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableData, NSString, RCTNetworking;

@interface RCTHTTPFormDataHelper : NSObject {

	NSMutableArray* _parts;
	NSMutableData* _multipartBody;
	/*^block*/id _callback;
	NSString* _boundary;
	RCTNetworking* _networker;

}

@property (assign,nonatomic,__weak) RCTNetworking * networker;              //@synthesize networker=_networker - In the implementation block
-(/*^block*/id)handleResult:(id)arg1 error:(id)arg2 ;
-(/*^block*/id)process:(id)arg1 callback:(/*^block*/id)arg2 ;
-(RCTNetworking *)networker;
-(void)setNetworker:(RCTNetworking *)arg1 ;
@end

