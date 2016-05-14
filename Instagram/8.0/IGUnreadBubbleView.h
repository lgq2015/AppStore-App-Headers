/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGPassthroughLabel;

@interface IGUnreadBubbleView : UIView {

	int _unreadCount;
	IGPassthroughLabel* _label;

}

@property (nonatomic,retain) IGPassthroughLabel * label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) int unreadCount;                         //@synthesize unreadCount=_unreadCount - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IGPassthroughLabel *)label;
-(void)setLabel:(IGPassthroughLabel *)arg1 ;
-(int)unreadCount;
-(void)setUnreadCount:(int)arg1 ;
@end

