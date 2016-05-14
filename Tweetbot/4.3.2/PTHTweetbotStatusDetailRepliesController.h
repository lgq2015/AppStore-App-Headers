/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotStatusDetailChildController.h>

@class NSMutableArray, NSArray, UIView;

@interface PTHTweetbotStatusDetailRepliesController : PTHTweetbotStatusDetailChildController {

	NSMutableArray* _statusViews;
	char _loadedReplies;
	NSArray* _replyStatuses;

}

@property (nonatomic,readonly) NSArray * replyStatuses;              //@synthesize replyStatuses=_replyStatuses - In the implementation block
@property (nonatomic,readonly) UIView * firstReplyView; 
-(void)swipeLeft:(id)arg1 ;
-(void)statusWasUpdated;
-(NSArray *)replyStatuses;
-(void)_loadReplies;
-(UIView *)firstReplyView;
-(void)previewingStatusDidChange;
@end

