/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PTHCommon/PTHColorGroupTableViewCell.h>

@class UIView;

@interface PTHTweetbotMessageCell : PTHColorGroupTableViewCell {

	UIView* _bottomSeparatorView;
	UIView* _topSeparatorView;

}

@property (assign,getter=hasTopSeparator,nonatomic) char topSeparator; 
@property (assign,getter=hasBottomSeparator,nonatomic) char bottomSeparator; 
+(id)cellWithText:(id)arg1 ;
+(id)reuseIdentifier;
-(char)hasTopSeparator;
-(char)hasBottomSeparator;
-(id)init;
-(id)initWithText:(id)arg1 ;
-(void)setTopSeparator:(char)arg1 ;
-(void)setBottomSeparator:(char)arg1 ;
@end

