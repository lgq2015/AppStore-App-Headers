/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WABackupOperation.h>

@protocol OS_dispatch_semaphore;
@class NSObject;

@interface WAWaitOperation : WABackupOperation {

	int _completionIndex;
	int _count;
	int _waitIndex;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (readonly) int count;                                                       //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) int waitIndex;                                           //@synthesize waitIndex=_waitIndex - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
-(id)initWithDependenciesRequired:(char)arg1 ;
-(id)initWithCount:(int)arg1 dependenciesRequired:(char)arg2 ;
-(void)waitForIndexToFinish:(int)arg1 ;
-(void)finishIndex:(int)arg1 ;
-(int)waitIndex;
-(void)setWaitIndex:(int)arg1 ;
-(id)initWithCount:(int)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)cancel;
-(int)count;
-(id)init;
-(void)run;
-(void)finish;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

