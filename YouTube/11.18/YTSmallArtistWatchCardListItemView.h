/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTBaseWatchCardListItemView.h>
#import <YouTube/YTThumbnailMapping.h>

@class YTImageView, YTPlaylistThumbnailView, NSString;

@interface YTSmallArtistWatchCardListItemView : YTBaseWatchCardListItemView <YTThumbnailMapping> {

	YTImageView* _albumThumbnailView;
	YTPlaylistThumbnailView* _playlistThumbnailView;
	int _type;

}

@property (nonatomic,readonly) int type;                            //@synthesize type=_type - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)thumbnailHeightForType:(int)arg1 ;
+(float)thumbnailWidthForType:(int)arg1 ;
+(CGSize)thumbnailAspectRatioForType:(int)arg1 ;
+(float)preferredHeightForType:(int)arg1 ;
-(id)thumbnailMappings;
-(id)accessibleViews;
-(void)setThumbnail:(id)arg1 type:(int)arg2 videoCountText:(id)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)type;
-(void)prepareForReuse;
-(CGSize)thumbnailSize;
@end

