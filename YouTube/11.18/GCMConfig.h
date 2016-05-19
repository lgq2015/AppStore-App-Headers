/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GCMReceiverDelegate;
@interface GCMConfig : NSObject {

	char _logLevel;
	char _useNewRemoteNotificationCallback;
	id<GCMReceiverDelegate> _receiverDelegate;

}

@property (assign,nonatomic,__weak) id<GCMReceiverDelegate> receiverDelegate;              //@synthesize receiverDelegate=_receiverDelegate - In the implementation block
@property (assign,nonatomic) char logLevel;                                                //@synthesize logLevel=_logLevel - In the implementation block
@property (assign,nonatomic) char useNewRemoteNotificationCallback;                        //@synthesize useNewRemoteNotificationCallback=_useNewRemoteNotificationCallback - In the implementation block
+(id)defaultConfig;
-(id)initWithDefaultConfig;
-(void)setUseNewRemoteNotificationCallback:(char)arg1 ;
-(id<GCMReceiverDelegate>)receiverDelegate;
-(void)setReceiverDelegate:(id<GCMReceiverDelegate>)arg1 ;
-(char)useNewRemoteNotificationCallback;
-(char)logLevel;
-(void)setLogLevel:(char)arg1 ;
-(id)init;
@end

