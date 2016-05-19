/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class GTMRegex, NSData;

@interface GTMRegexEnumerator : NSEnumerator {

	GTMRegex* regex_;
	NSData* utf8StrBuf_;
	char allSegments_;
	char treatStartOfNewSegmentAsBeginningOfString_;
	long long curParseIndex_;
	SCD_Struct_GT184* savedRegMatches_;

}
-(id)initWithRegex:(id)arg1 processString:(id)arg2 allSegments:(char)arg3 ;
-(void)treatStartOfNewSegmentAsBeginningOfString:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(id)nextObject;
@end

