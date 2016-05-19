/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class GOOHUDMessage;

@interface GOOHUDMessageView : UIView {

	char _dismissing;
	GOOHUDMessage* _message;
	/*^block*/id _dismissalHandler;

}

@property (nonatomic,readonly) float maximumWidth; 
@property (nonatomic,retain) GOOHUDMessage * message;                          //@synthesize message=_message - In the implementation block
@property (assign,getter=isDismissing,nonatomic) char dismissing;              //@synthesize dismissing=_dismissing - In the implementation block
@property (nonatomic,copy) id dismissalHandler;                                //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
-(id)initWithMessage:(id)arg1 dismissHandler:(/*^block*/id)arg2 ;
-(void)dismissWithAction:(id)arg1 userInitiated:(char)arg2 ;
-(char)isDismissing;
-(char)shouldWaitForDismissalDuringVoiceover;
-(void)setDismissing:(char)arg1 ;
-(float)maximumWidth;
-(GOOHUDMessage *)message;
-(void)setMessage:(GOOHUDMessage *)arg1 ;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
@end

