/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTInnerTubeUIService.h>

@class YTInnerTubeMultipleService, NSString;

@interface YTCompositeWatchNextService : NSObject <YTInnerTubeUIService> {

	YTInnerTubeMultipleService* _multipleService;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)makeRequest:(id)arg1 refresh:(char)arg2 responseBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(id)initWithMultipleService:(id)arg1 ;
-(id)optionalRequestFromMandatoryRequest:(id)arg1 ;
-(id)mergeMandatoryResponse:(id)arg1 optionalResponse:(id)arg2 ;
-(void)clearCaches;
-(Class)responseClass;
-(Class)requestClass;
@end

