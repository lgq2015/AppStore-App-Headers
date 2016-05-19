/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol YTInnerTubeConfig, YTPlaybackContextDecorator;
@class YTInnerTubeRequestFactory;

@interface YTPlayerRequestFactory : NSObject {

	YTInnerTubeRequestFactory* _requestBuilder;
	id<YTInnerTubeConfig> _innerTubeConfig;
	id<YTPlaybackContextDecorator> _playbackContextDecorator;

}
-(id)innerTubeRequestForPlayerWithVideoID:(id)arg1 playlistID:(id)arg2 playlistIndex:(unsigned)arg3 playbackContext:(id)arg4 forOffline:(char)arg5 clickTrackingParams:(id)arg6 playerParams:(id)arg7 ;
-(id)innerTubePartialPlayerRequestForURLWithPlaybackContext:(id)arg1 ;
-(id)initWithRequestBuilder:(id)arg1 innerTubeConfig:(id)arg2 playbackContextDecorator:(id)arg3 ;
-(void)verifyClickTrackingParams:(id)arg1 ;
-(void)updateContentChecksInPlayerRequest:(id)arg1 ;
-(char)adultContentConfirmed;
-(id)initWithRequestBuilder:(id)arg1 innerTubeConfig:(id)arg2 ;
-(id)requestForPlayerWithPlayerRequest:(id)arg1 ;
@end

