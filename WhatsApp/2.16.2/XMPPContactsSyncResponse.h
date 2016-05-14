/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSError;

@interface XMPPContactsSyncResponse : NSObject {

	NSArray* _contacts;
	NSString* _version;
	int _wait;
	NSError* _error;
	int _backoff;

}

@property (nonatomic,retain) NSArray * contacts;              //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSString * version;                //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) int wait;                        //@synthesize wait=_wait - In the implementation block
@property (nonatomic,retain) NSError * error;                 //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int backoff;                     //@synthesize backoff=_backoff - In the implementation block
-(void)setWait:(int)arg1 ;
-(void)setBackoff:(int)arg1 ;
-(NSArray *)contacts;
-(NSError *)error;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(void)setContacts:(NSArray *)arg1 ;
-(int)backoff;
-(int)wait;
-(void)setError:(NSError *)arg1 ;
@end

