/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursorController.h>

@interface PTHTweetbotUserSearchController : PTHTweetbotCursorController {

	char _userSelectMode;

}

@property (assign) char userSelectMode;              //@synthesize userSelectMode=_userSelectMode - In the implementation block
-(id)searchTitle;
-(id)nothingFoundTitle;
-(char)userSelectMode;
-(void)setUserSelectMode:(char)arg1 ;
-(id)initWithAccount:(id)arg1 query:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(Class)cellClass;
@end

