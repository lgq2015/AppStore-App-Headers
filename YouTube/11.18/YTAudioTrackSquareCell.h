/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTCollectionViewCell.h>
#import <YouTube/YTAudioTrackCell.h>
#import <YouTube/YTThumbnailMapping.h>

@protocol YTResponder;
@class YTIAudioTrackRenderer, YTAudioTrackCellThumbnailButton, YTAudioTrackCellMetadataButton, NSString, YTEditAudioTrackMetadata;

@interface YTAudioTrackSquareCell : YTCollectionViewCell <YTAudioTrackCell, YTThumbnailMapping> {

	YTIAudioTrackRenderer* _renderer;
	YTAudioTrackCellThumbnailButton* _thumbnailButton;
	YTAudioTrackCellMetadataButton* _metadataButton;
	NSString* _trackInfoAccessibilityLabel;
	int _state;
	id<YTResponder> _parentResponder;
	YTEditAudioTrackMetadata* _trackMetadata;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder; 
@property (assign,nonatomic) int state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) YTEditAudioTrackMetadata * trackMetadata;              //@synthesize trackMetadata=_trackMetadata - In the implementation block
+(CGSize)cellSizeForEntry:(id)arg1 size:(CGSize)arg2 ;
-(id<YTResponder>)parentResponder;
-(id)thumbnailMappings;
-(void)setParentResponder:(id<YTResponder>)arg1 ;
-(void)updateAccessibilityLabel;
-(void)setTogglePlayTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setSelectTrackTarget:(id)arg1 action:(SEL)arg2 ;
-(YTEditAudioTrackMetadata *)trackMetadata;
-(void)setEntry:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)entry;
@end

