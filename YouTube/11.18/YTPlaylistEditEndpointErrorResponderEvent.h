/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTResponderEvent.h>

@class YTIPlaylistEditEndpoint;

@interface YTPlaylistEditEndpointErrorResponderEvent : YTResponderEvent {

	YTIPlaylistEditEndpoint* _playlistEditEndpoint;

}

@property (nonatomic,readonly) YTIPlaylistEditEndpoint * playlistEditEndpoint;              //@synthesize playlistEditEndpoint=_playlistEditEndpoint - In the implementation block
+(id)eventWithPlaylistEditEndpoint:(id)arg1 firstResponder:(id)arg2 ;
-(YTIPlaylistEditEndpoint *)playlistEditEndpoint;
-(id)initWithPlaylistEditEndpoint:(id)arg1 firstResponder:(id)arg2 ;
@end

