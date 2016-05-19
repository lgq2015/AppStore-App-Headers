/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTResponderEvent.h>

@protocol YTCreatePlaylistViewControllerDelegate;
@class UIView;

@interface YTAddPlaylistResponderEvent : YTResponderEvent {

	UIView* _sender;
	id<YTCreatePlaylistViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIView * sender;                                                         //@synthesize sender=_sender - In the implementation block
@property (nonatomic,__weak,readonly) id<YTCreatePlaylistViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)eventWithView:(id)arg1 delegate:(id)arg2 firstResponder:(id)arg3 ;
-(id)initWithView:(id)arg1 delegate:(id)arg2 firstResponder:(id)arg3 ;
-(id<YTCreatePlaylistViewControllerDelegate>)delegate;
-(UIView *)sender;
@end

