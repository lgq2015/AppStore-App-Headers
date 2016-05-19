/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTCollectionViewCell.h>
#import <YouTube/YTInlinePlaybackCellProtocol.h>
#import <YouTube/YTFeedViewCellProtocol.h>
#import <YouTube/YTThumbnailMapping.h>

@protocol YTResponder;
@class YTIInlinePlaybackRenderer, YTInlinePlaybackView, NSString;

@interface YTInlinePlaybackCell : YTCollectionViewCell <YTInlinePlaybackCellProtocol, YTFeedViewCellProtocol, YTThumbnailMapping> {

	YTIInlinePlaybackRenderer* _inlinePlaybackRenderer;
	YTInlinePlaybackView* _videoView;
	int _inlinePlaybackLayout;
	id<YTResponder> _parentResponder;

}

@property (nonatomic,readonly) YTInlinePlaybackView * videoView;                    //@synthesize videoView=_videoView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder; 
+(CGSize)cellSizeForEntry:(id)arg1 size:(CGSize)arg2 ;
+(CGSize)cellSizeForEntry:(id)arg1 size:(CGSize)arg2 inlinePlaybackLayout:(int)arg3 ;
-(id<YTResponder>)parentResponder;
-(id)thumbnailMappings;
-(void)setInlinePlaybackLayout:(int)arg1 ;
-(id)metadataRenderer;
-(void)setParentResponder:(id<YTResponder>)arg1 ;
-(id)playerReferenceContainer;
-(void)setPlayerView:(id)arg1 ;
-(void)showPlayerViewAnimated:(char)arg1 ;
-(id)inlinePlaybackEndpoint;
-(void)setInlinePlaybackGlobalPlayEnabled:(char)arg1 ;
-(void)setInlinePlaybackMDXActive:(char)arg1 ;
-(void)setPlaybackError:(id)arg1 ;
-(void)setCellActive:(char)arg1 ;
-(void)setAdPlaying:(char)arg1 ;
-(id)playerOrSnapshotView;
-(id)metadataContainer;
-(void)setCompanionAdView:(id)arg1 ;
-(void)sizeSubviewsWithWidth:(float)arg1 ;
-(void)showSpinner;
-(YTInlinePlaybackView *)videoView;
-(void)setEntry:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)setSnapshotView:(id)arg1 ;
-(void)hideSpinner;
-(void)setLikeStatus:(int)arg1 ;
-(id)entry;
@end

