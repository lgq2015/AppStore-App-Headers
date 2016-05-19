/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTWatchNextService.h>

@protocol YTWatchNextResponseDecorator;
@interface YTSpaceCastWatchNextService : YTWatchNextService {

	id<YTWatchNextResponseDecorator> _responseDecorator;

}
-(void)makeRequest:(id)arg1 refresh:(char)arg2 responseBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(id)initWithRequestFactory:(id)arg1 requestor:(id)arg2 innerTubeConfig:(id)arg3 responseDecorator:(id)arg4 ;
-(id)initWithRequestFactory:(id)arg1 requestor:(id)arg2 innerTubeConfig:(id)arg3 ;
@end

