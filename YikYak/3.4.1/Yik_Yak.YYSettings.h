/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface Yik_Yak.YYSettings : NSObject {

	 userDefaults;

}
+(id)sharedInstance;
-(void)saveValue:(id)arg1 forSetting:(long)arg2 ;
-(void)saveValue:(id)arg1 forSetting:(long)arg2 toGroup:(long)arg3 ;
-(void)removeSetting:(long)arg1 fromGroup:(long)arg2 ;
-(id)getSetting:(long)arg1 defaultValue:(id)arg2 ;
-(id)getSetting:(long)arg1 ;
-(id)getSetting:(long)arg1 fromGroup:(long)arg2 ;
-(id)getSetting:(long)arg1 fromGroup:(long)arg2 defaultValue:(id)arg3 ;
-(void)removeSetting:(long)arg1 ;
-(id)init;
-(id)initWithUserDefaults:(id)arg1 ;
@end

