/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTCollectionViewCell.h>
#import <YouTube/YTFeedViewCellProtocol.h>
#import <YouTube/YTCellActionProtocol.h>
#import <YouTube/YTCellLinkProtocol.h>
#import <YouTube/YTResponder.h>
#import <YouTube/YTThumbnailMapping.h>

@protocol YTResponder;
@class YTIVideoRenderer, YTVideoView, NSString;

@interface YTVideoCell : YTCollectionViewCell <YTFeedViewCellProtocol, YTCellActionProtocol, YTCellLinkProtocol, YTResponder, YTThumbnailMapping> {

	YTIVideoRenderer* _videoRenderer;
	YTVideoView* _videoView;
	id<YTResponder> _parentResponder;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder; 
@property (assign,nonatomic,__weak) id<YTCellLinkDelegate> cellLinkDelegate; 
+(CGSize)cellSizeForEntry:(id)arg1 size:(CGSize)arg2 ;
+(CGSize)cellSizeForEntry:(id)arg1 size:(CGSize)arg2 locator:(id)arg3 ;
-(id<YTResponder>)parentResponder;
-(id)thumbnailMappings;
-(void)removeActionTarget;
-(void)setLocator:(id)arg1 ;
-(void)removeLongPressTarget;
-(void)setActionTarget:(id)arg1 action:(SEL)arg2 ;
-(id<YTCellLinkDelegate>)cellLinkDelegate;
-(void)setCellLinkDelegate:(id<YTCellLinkDelegate>)arg1 ;
-(void)setParentResponder:(id<YTResponder>)arg1 ;
-(void)setLongPressTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setEntry:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(id)entry;
@end

