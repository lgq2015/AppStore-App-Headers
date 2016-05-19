/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTResponderEvent.h>
#import <YouTube/YTNavigationMetadataProtocol.h>

@class YTINavigationEndpoint, NSString;

@interface YTInlinePlaybackMiniplayerResponderEvent : YTResponderEvent <YTNavigationMetadataProtocol> {

	YTINavigationEndpoint* _navigationEndpoint;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) YTINavigationEndpoint * navigationEndpoint;              //@synthesize navigationEndpoint=_navigationEndpoint - In the implementation block
+(id)eventWithNavigationEndpoint:(id)arg1 firstResponder:(id)arg2 ;
-(YTINavigationEndpoint *)navigationEndpoint;
-(int)watchSource;
-(id)initWithNavigationEndpoint:(id)arg1 firstResponder:(id)arg2 ;
@end

