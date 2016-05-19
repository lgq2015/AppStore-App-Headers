/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, YTIFormattedString, YTIThumbnailDetails;

@interface YTEditAudioTrackMetadata : NSObject {

	NSString* _audioswapId;
	NSURL* _assetURL;
	YTIFormattedString* _artist;
	YTIFormattedString* _title;
	YTIFormattedString* _category;
	NSString* _duration;
	YTIThumbnailDetails* _thumbnail;
	char _isOnDevice;
	int _durationMs;

}

@property (nonatomic,readonly) NSString * audioswapId;                       //@synthesize audioswapId=_audioswapId - In the implementation block
@property (nonatomic,readonly) NSURL * assetURL;                             //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,readonly) YTIFormattedString * artist;                  //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) YTIFormattedString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) YTIFormattedString * category;                //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSString * duration;                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) int durationMs;                               //@synthesize durationMs=_durationMs - In the implementation block
@property (nonatomic,readonly) YTIThumbnailDetails * thumbnail;              //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) char isOnDevice;                              //@synthesize isOnDevice=_isOnDevice - In the implementation block
-(id)initWithAudioTrackRowRenderer:(id)arg1 ;
-(id)initWithAudioTrackRenderer:(id)arg1 ;
-(NSString *)audioswapId;
-(int)durationMs;
-(char)isOnDevice;
-(YTIFormattedString *)artist;
-(id)initWithMediaItem:(id)arg1 ;
-(NSURL *)assetURL;
-(NSString *)duration;
-(YTIFormattedString *)category;
-(YTIFormattedString *)title;
-(YTIThumbnailDetails *)thumbnail;
@end

