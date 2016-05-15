/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLLocation, NSString;

@interface Yik_Yak.YYUser : NSObject {

	 userIDExistedInUserDefaults;
	 apiDataSource;

}

@property (assign,nonatomic) char userIDExistedInUserDefaults; 
@property (retain,nonatomic) CLLocation * location; 
@property (copy,nonatomic) NSString * yakkerID; 
@property (assign,nonatomic) char hasRegisteredDevice; 
@property (readonly,nonatomic) char hasNickname; 
@property (copy,nonatomic) NSString * nickname; 
@property (readonly,nonatomic) NSString * nicknameDisplayString; 
@property (assign,nonatomic) long yakarma; 
+(id)nicknameKeyPath;
+(id)defaultNickname;
+(id)currentUser;
-(void)setYakarma:(long)arg1 ;
-(NSString *)nicknameDisplayString;
-(char)hasRegisteredDevice;
-(void)fetchUserInfo;
-(long)yakarma;
-(char)hasNickname;
-(NSString *)yakkerID;
-(void)setHasRegisteredDevice:(char)arg1 ;
-(char)userIDExistedInUserDefaults;
-(void)setUserIDExistedInUserDefaults:(char)arg1 ;
-(id)initWithApiDataSource:(id)arg1 ;
-(void)setYakkerID:(NSString *)arg1 ;
-(id)init;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
@end

