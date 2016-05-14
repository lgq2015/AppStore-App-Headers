/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentExpandableCell.h>
#import <Instagram/IGDirectVideoViewDelegate.h>

@class IGDirectVideoView, NSString;

@interface IGDirectVideoExpandableCell : IGDirectContentExpandableCell <IGDirectVideoViewDelegate> {

	IGDirectVideoView* _videoView;

}

@property (nonatomic,retain) IGDirectVideoView * videoView;              //@synthesize videoView=_videoView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)completeAnimation;
-(void)togglePlayStatus;
-(void)stopAnimated:(char)arg1 ;
-(void)videoView:(id)arg1 didFailToPlayWithError:(id)arg2 ;
-(void)setVideoView:(IGDirectVideoView *)arg1 ;
-(void)play;
-(IGDirectVideoView *)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)stop;
-(void)prepareForReuse;
-(void)setContent:(id)arg1 ;
-(void)beginAnimation;
@end

