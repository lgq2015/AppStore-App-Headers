/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotStatusCursorController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class PTHTweetbotUser, NSString;

@interface PTHTweetbotFavoritesController : PTHTweetbotStatusCursorController <UIGestureRecognizerDelegate> {

	PTHTweetbotUser* _tweetbotUser;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTweetbotUser:(id)arg1 ;
-(id)searchTitle;
-(id)nothingFoundTitle;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
@end

