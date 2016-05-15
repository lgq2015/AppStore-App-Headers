/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDLogger;
#import <Yik Yak/Yik Yak-Structs.h>
@interface DDLoggerNode : NSObject {

	id<DDLogger> _logger;
	unsigned _level;
	dispatch_queue_sRef _loggerQueue;

}

@property (nonatomic,readonly) id<DDLogger> logger;                          //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) unsigned level;                               //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) dispatch_queue_sRef loggerQueue;              //@synthesize loggerQueue=_loggerQueue - In the implementation block
+(id)nodeWithLogger:(id)arg1 loggerQueue:(dispatch_queue_sRef)arg2 level:(unsigned)arg3 ;
-(dispatch_queue_sRef)loggerQueue;
-(id)initWithLogger:(id)arg1 loggerQueue:(dispatch_queue_sRef)arg2 level:(unsigned)arg3 ;
-(id<DDLogger>)logger;
-(void)dealloc;
-(unsigned)level;
@end

