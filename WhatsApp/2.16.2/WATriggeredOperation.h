/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAWaitOperation.h>

@interface WATriggeredOperation : WAWaitOperation {

	/*^block*/id _action;

}

@property (copy) id action;              //@synthesize action=_action - In the implementation block
-(id)initWithAction:(/*^block*/id)arg1 waitCount:(int)arg2 ;
-(id)initWithCount:(int)arg1 dependenciesRequired:(char)arg2 ;
-(id)initWithAction:(/*^block*/id)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)run;
@end

