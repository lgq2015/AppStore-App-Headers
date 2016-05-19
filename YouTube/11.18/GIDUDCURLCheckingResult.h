/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSURL;

@interface GIDUDCURLCheckingResult : NSTextCheckingResult {

	NSRange _range;
	char _needsAuth;
	NSURL* _URL;

}

@property (nonatomic,readonly) char needsAuth;              //@synthesize needsAuth=_needsAuth - In the implementation block
@property (nonatomic,copy) NSURL * URL;                     //@synthesize URL=_URL - In the implementation block
+(id)URLCheckingResultWithRange:(NSRange)arg1 URL:(id)arg2 needsAuth:(char)arg3 ;
-(char)needsAuth;
-(id)description;
-(NSURL *)URL;
-(NSRange)range;
-(void)setURL:(NSURL *)arg1 ;
-(unsigned long long)resultType;
@end

