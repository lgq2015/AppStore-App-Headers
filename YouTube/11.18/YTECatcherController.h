/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol YTInnerTubeSharedData;
@class YTGen204Service, NSOperationQueue, NSDate;

@interface YTECatcherController : NSObject {

	id<YTInnerTubeSharedData> _innerTubeSharedData;
	YTGen204Service* _gen204Service;
	NSOperationQueue* _operationQueue;
	NSDate* _lastErrorSentDate;
	unsigned _numErrorsSent;

}
-(void)didSendECatcherLog:(id)arg1 ;
-(char)isThrottled;
-(id)GETParamsWithLog:(id)arg1 ;
-(id)POSTParamsWithLog:(id)arg1 ;
-(char)hasECatcherParameters;
-(void)setLastErrorSentDate:(id)arg1 ;
-(id)initWithGen204Service:(id)arg1 innerTubeSharedData:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

