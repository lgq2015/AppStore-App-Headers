/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WATaskManager;

@interface WATask : NSObject {

	char _active;
	/*^block*/id _block;
	WATaskManager* _manager;

}

@property (assign,getter=isActive,nonatomic) char active;                 //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) id block;                                  //@synthesize block=_block - In the implementation block
@property (assign,nonatomic,__weak) WATaskManager * manager;              //@synthesize manager=_manager - In the implementation block
-(void)rescheduleIfNeeded;
-(void)setManager:(WATaskManager *)arg1 ;
-(WATaskManager *)manager;
-(id)block;
-(char)isActive;
-(void)setActive:(char)arg1 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
@end

