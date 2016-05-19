/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/DDLogFormatter.h>

@class DDLoggingContextSet, NSArray, NSString;

@interface DDContextBlacklistFilterLogFormatter : NSObject <DDLogFormatter> {

	DDLoggingContextSet* _contextSet;

}

@property (copy,readonly) NSArray * blacklist; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formatLogMessage:(id)arg1 ;
-(char)isOnBlacklist:(unsigned)arg1 ;
-(void)addToBlacklist:(unsigned)arg1 ;
-(void)removeFromBlacklist:(unsigned)arg1 ;
-(NSArray *)blacklist;
-(id)init;
@end

