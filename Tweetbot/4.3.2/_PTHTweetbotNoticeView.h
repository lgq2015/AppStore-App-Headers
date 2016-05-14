/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <PTHCommon/PTHShapeView.h>

@class PTHTweetbotNotice, PTHTweetbotNoticeController;

@interface _PTHTweetbotNoticeView : PTHShapeView {

	PTHTweetbotNotice* _notice;
	PTHTweetbotNoticeController* _noticeController;

}

@property (nonatomic,readonly) PTHTweetbotNotice * notice;                                       //@synthesize notice=_notice - In the implementation block
@property (assign,nonatomic,__weak) PTHTweetbotNoticeController * noticeController;              //@synthesize noticeController=_noticeController - In the implementation block
-(id)initWithNotice:(id)arg1 ;
-(void)setNoticeController:(PTHTweetbotNoticeController *)arg1 ;
-(void)_tap;
-(PTHTweetbotNoticeController *)noticeController;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didMoveToWindow;
-(void)_tapAction:(id)arg1 ;
-(PTHTweetbotNotice *)notice;
@end

