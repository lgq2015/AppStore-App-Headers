/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTCollectionViewCell.h>
#import <YouTube/YTAccessibilityMixinEmbedder.h>
#import <YouTube/YTThumbnailMapping.h>
#import <YouTube/YTFeedViewCellProtocol.h>
#import <YouTube/YTOfflinePlaylistProgress.h>
#import <YouTube/YTResponder.h>
#import <YouTube/YTCellActionProtocol.h>

@protocol YTResponder, YTAccessibilityMixinImpl;
@class YTICompactPlaylistRenderer, YTCompactPlaylistMetadataView, YTPlaylistThumbnailView, YTProgressOverlayView, YTButton, UILongPressGestureRecognizer, NSString;

@interface YTCompactPlaylistCell : YTCollectionViewCell <YTAccessibilityMixinEmbedder, YTThumbnailMapping, YTFeedViewCellProtocol, YTOfflinePlaylistProgress, YTResponder, YTCellActionProtocol> {

	YTICompactPlaylistRenderer* _playlist;
	YTCompactPlaylistMetadataView* _metadataView;
	YTPlaylistThumbnailView* _thumbnailView;
	YTProgressOverlayView* _progressOverlayView;
	YTButton* _actionButton;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	id<YTResponder> _parentResponder;
	id<YTAccessibilityMixinImpl> _accessibilityMixin;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<YTAccessibilityMixinImpl> accessibilityMixin;              //@synthesize accessibilityMixin=_accessibilityMixin - In the implementation block
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder; 
+(CGSize)cellSizeForEntry:(id)arg1 size:(CGSize)arg2 ;
+(char)isWideLayout;
-(id<YTResponder>)parentResponder;
-(void)downloadDidProgressWithPlaylistID:(id)arg1 completedVideos:(unsigned)arg2 totalVideos:(unsigned)arg3 ;
-(id)thumbnailMappings;
-(void)removeActionTarget;
-(id)accessibleViews;
-(id<YTAccessibilityMixinImpl>)accessibilityMixin;
-(void)removeLongPressTarget;
-(void)setActionTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setParentResponder:(id<YTResponder>)arg1 ;
-(void)setLongPressTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setEntry:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(char)isAccessibilityElement;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(id)entry;
@end

