/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>

@class YTFormattedStringLabel;

@interface YTCompactChannelMetadataView : UIView {

	YTFormattedStringLabel* _titleLabel;
	YTFormattedStringLabel* _videoCountLabel;
	YTFormattedStringLabel* _subscriberCountLabel;

}
-(void)setVideoCountText:(id)arg1 ;
-(void)setSubscriberCountText:(id)arg1 ;
-(void)sizeLabelsWithWidth:(float)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

