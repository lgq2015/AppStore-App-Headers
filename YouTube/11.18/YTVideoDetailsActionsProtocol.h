/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol YTVideoDetailsActionsProtocol <YTOfflineVideoProgress>
@property (nonatomic,readonly) UIView * transferButton; 
@property (nonatomic,readonly) UIView * addToButton; 
@required
-(id)playbackRouteButton;
-(void)setVideoDetailsActionsDelegate:(id)arg1;
-(void)setDislikeCount:(id)arg1;
-(void)setLikesAllowed:(char)arg1;
-(void)setShareAllowed:(char)arg1;
-(UIView *)addToButton;
-(void)setAddToButtonRenderer:(id)arg1;
-(void)setPlaybackRouteButtonAllowed:(char)arg1;
-(UIView *)transferButton;
-(void)setOfflineVideo:(id)arg1;
-(void)setOfflineButtonVisible:(char)arg1 dimmed:(char)arg2 animated:(char)arg3;
-(void)setLikeCount:(id)arg1;
-(void)setLikeStatus:(int)arg1;

@end

