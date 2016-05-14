/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGGenericMegaphoneLogger.h>

@interface IGDefaultGenericMegaphoneLogger : NSObject <IGGenericMegaphoneLogger> {

	char _seen;
	unsigned _displaySource;

}

@property (nonatomic,readonly) unsigned displaySource;              //@synthesize displaySource=_displaySource - In the implementation block
@property (assign,nonatomic) char seen;                             //@synthesize seen=_seen - In the implementation block
-(id)initWithDisplaySource:(unsigned)arg1 ;
-(void)logMegaphoneWasSeen:(id)arg1 ;
-(char)seen;
-(void)setSeen:(char)arg1 ;
-(unsigned)displaySource;
-(void)logMegaphoneDismissed:(id)arg1 ;
-(void)logMegaphoneButtonTapped:(id)arg1 withReason:(id)arg2 ;
-(void)logMegaphoneButtonTapped:(id)arg1 ;
-(void)logForMegaphone:(id)arg1 action:(id)arg2 displaySourceString:(id)arg3 reason:(id)arg4 ;
-(void)logForAction:(id)arg1 megaphone:(id)arg2 ;
-(void)logMegaphone:(id)arg1 tappingButton:(id)arg2 ;
@end

