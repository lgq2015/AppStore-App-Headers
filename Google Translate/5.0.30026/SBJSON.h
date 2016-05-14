/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBJSON : NSObject {

	char humanReadable;
	char sortKeys;
	unsigned maxDepth;
	unsigned depth;
	const char* c;
	id parsingLocale;

}

@property (assign) char humanReadable; 
@property (assign) char sortKeys; 
@property (assign) unsigned maxDepth; 
+(void)initialize;
-(void)setMaxDepth:(unsigned)arg1 ;
-(char)appendValue:(id)arg1 into:(id)arg2 error:(id*)arg3 ;
-(id)stringWithObject:(id)arg1 allowScalar:(char)arg2 error:(id*)arg3 ;
-(char)appendDictionary:(id)arg1 into:(id)arg2 error:(id*)arg3 ;
-(char)appendArray:(id)arg1 into:(id)arg2 error:(id*)arg3 ;
-(char)appendString:(id)arg1 into:(id)arg2 error:(id*)arg3 ;
-(char)humanReadable;
-(char)sortKeys;
-(char)scanValue:(id*)arg1 error:(id*)arg2 ;
-(char)scanIsAtEnd;
-(id)objectWithString:(id)arg1 allowScalar:(char)arg2 error:(id*)arg3 ;
-(char)scanRestOfDictionary:(id*)arg1 error:(id*)arg2 ;
-(char)scanRestOfArray:(id*)arg1 error:(id*)arg2 ;
-(char)scanRestOfString:(id*)arg1 error:(id*)arg2 objectkey:(char)arg3 ;
-(char)scanRestOfFalse:(id*)arg1 error:(id*)arg2 ;
-(char)scanRestOfTrue:(id*)arg1 error:(id*)arg2 ;
-(char)scanRestOfNull:(id*)arg1 error:(id*)arg2 ;
-(char)scanNumber:(id*)arg1 error:(id*)arg2 ;
-(char)scanUnicodeChar:(unsigned short*)arg1 error:(id*)arg2 ;
-(char)scanHexQuad:(unsigned short*)arg1 error:(id*)arg2 ;
-(id)stringWithFragment:(id)arg1 error:(id*)arg2 ;
-(id)stringWithObject:(id)arg1 error:(id*)arg2 ;
-(id)fragmentWithString:(id)arg1 error:(id*)arg2 ;
-(id)objectWithString:(id)arg1 error:(id*)arg2 ;
-(void)setHumanReadable:(char)arg1 ;
-(void)setSortKeys:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)indent;
-(unsigned)maxDepth;
@end

