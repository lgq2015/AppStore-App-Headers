/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <YouTube/YTCellActionProtocol.h>
#import <YouTube/YTFeedViewCellProtocol.h>
#import <YouTube/YTThumbnailMapping.h>
#import <YouTube/YTTimestampDeltaContainingCellProtocol.h>

@protocol YTResponder;
@class YTIConversationSwitcherItemRenderer, UILongPressGestureRecognizer, YTFormattedStringLabel, YTShareContactImageView, UIImageView, UIView, YTVideoThumbnailView, NSString;

@interface YTConversationSwitcherItemCell : UICollectionViewCell <YTCellActionProtocol, YTFeedViewCellProtocol, YTThumbnailMapping, YTTimestampDeltaContainingCellProtocol> {

	YTIConversationSwitcherItemRenderer* _entry;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	YTFormattedStringLabel* _unreadDotLabel;
	YTFormattedStringLabel* _conversationNameLabel;
	YTFormattedStringLabel* _lastPostActivityLabel;
	YTFormattedStringLabel* _lastPostTimestampTextLabel;
	YTShareContactImageView* _participantsImageView;
	UIImageView* _notificationsOffIconImageView;
	UIImageView* _repliesDisabledIconImageView;
	UIView* _repliesDisabledImageBackground;
	YTVideoThumbnailView* _videoThumbnailView;
	id<YTResponder> _parentResponder;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder; 
+(CGSize)cellSizeForEntry:(id)arg1 size:(CGSize)arg2 ;
-(id<YTResponder>)parentResponder;
-(id)thumbnailMappings;
-(void)removeActionTarget;
-(void)removeLongPressTarget;
-(void)setActionTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setParentResponder:(id<YTResponder>)arg1 ;
-(void)conversationNameDidChange:(id)arg1 ;
-(id)boldIfUnread:(id)arg1 ;
-(id)boldIfUnreadWithString:(id)arg1 ;
-(void)updateTimestampDeltas;
-(void)setAsRead;
-(void)setLongPressTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setEntry:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)updateLabels;
-(id)entry;
@end

