/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGConfirmPhoneSettings : NSObject {

	char _robocallEnabled;
	int _smsResendDelay;
	int _numSMSResendsBeforeRobocall;
	int _robocallDelay;

}

@property (assign,nonatomic) int smsResendDelay;                           //@synthesize smsResendDelay=_smsResendDelay - In the implementation block
@property (assign,nonatomic) int numSMSResendsBeforeRobocall;              //@synthesize numSMSResendsBeforeRobocall=_numSMSResendsBeforeRobocall - In the implementation block
@property (assign,nonatomic) char robocallEnabled;                         //@synthesize robocallEnabled=_robocallEnabled - In the implementation block
@property (assign,nonatomic) int robocallDelay;                            //@synthesize robocallDelay=_robocallDelay - In the implementation block
-(id)initWithSMSResendDelay:(int)arg1 numSMSResendsBeforeRobocall:(int)arg2 robocallDelay:(int)arg3 robocallEnabled:(char)arg4 ;
-(void)setSmsResendDelay:(int)arg1 ;
-(int)numSMSResendsBeforeRobocall;
-(void)setNumSMSResendsBeforeRobocall:(int)arg1 ;
-(char)robocallEnabled;
-(void)setRobocallEnabled:(char)arg1 ;
-(int)robocallDelay;
-(void)setRobocallDelay:(int)arg1 ;
-(int)smsResendDelay;
-(id)initWithDictionary:(id)arg1 ;
@end

