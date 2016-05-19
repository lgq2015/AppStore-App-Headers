/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTBaseInnerTubeRequestService.h>

@class YTApiaryResourceParser;

@interface YTOfflinePlaylistSyncCheckService : YTBaseInnerTubeRequestService {

	YTApiaryResourceParser* _resourceParser;

}
-(id)initWithRequestFactory:(id)arg1 requestor:(id)arg2 ;
-(void)makeRequestWithChecks:(id)arg1 clickTrackingParams:(id)arg2 innerTubeResponseBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(void)makeRequestWithChecks:(id)arg1 currentOfflineBytes:(unsigned long long)arg2 availableOfflineBytes:(unsigned long long)arg3 timeSinceLastOfflinePlayback:(unsigned)arg4 currentBatteryLevel:(float)arg5 clickTrackingParams:(id)arg6 innerTubeResponseBlock:(/*^block*/id)arg7 errorBlock:(/*^block*/id)arg8 ;
@end

