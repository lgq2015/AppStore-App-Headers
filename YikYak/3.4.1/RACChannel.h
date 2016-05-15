/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RACChannelTerminal;

@interface RACChannel : NSObject {

	RACChannelTerminal* _leadingTerminal;
	RACChannelTerminal* _followingTerminal;

}

@property (nonatomic,readonly) RACChannelTerminal * leadingTerminal;                //@synthesize leadingTerminal=_leadingTerminal - In the implementation block
@property (nonatomic,readonly) RACChannelTerminal * followingTerminal;              //@synthesize followingTerminal=_followingTerminal - In the implementation block
-(RACChannelTerminal *)leadingTerminal;
-(RACChannelTerminal *)followingTerminal;
-(id)init;
@end

