/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFRetryingCommandRunner : NSObject
+(id)runCommandAsync:(id)arg1 inOperation:(id)arg2 ;
+(id)runCommandAsync:(id)arg1 ;
+(id)runCommandAsync:(id)arg1 inOperation:(id)arg2 attemptsMade:(int)arg3 delay:(double)arg4 ;
+(void)setInitialDelay:(double)arg1 ;
@end

