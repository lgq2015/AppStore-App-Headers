/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTPlayerTransition.h>

@class YTINavigationEndpoint, NSString;

@interface YTInlinePlaybackPlayerTransition : NSObject <YTPlayerTransition> {

	char _autoplay;
	char _autonav;
	char _adPlayback;
	YTINavigationEndpoint* _navigationEndpoint;

}

@property (nonatomic,readonly) char adPlayback;                                         //@synthesize adPlayback=_adPlayback - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) YTINavigationEndpoint * navigationEndpoint;              //@synthesize navigationEndpoint=_navigationEndpoint - In the implementation block
@property (nonatomic,readonly) char autoplay; 
@property (nonatomic,readonly) char flungFromMDX; 
@property (nonatomic,readonly) char autonav; 
-(YTINavigationEndpoint *)navigationEndpoint;
-(char)flungFromMDX;
-(char)hasInfoCardSource;
-(char)autonav;
-(id)initWithNavEndpoint:(id)arg1 forAutonav:(char)arg2 autoplay:(char)arg3 adPlayback:(char)arg4 ;
-(char)adPlayback;
-(char)autoplay;
@end

