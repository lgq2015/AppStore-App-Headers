/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EXODASHElementParserFactory;

@interface EXODASHBaseElementParser : NSObject {

	EXODASHElementParserFactory* _parserFactory;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)parseAttributes:(const char**)arg1 numAttributes:(unsigned)arg2 ;
-(id)startElementWithName:(const char*)arg1 ;
-(void)handleCharacters:(const char*)arg1 length:(unsigned)arg2 ;
-(id)parserFactory;
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)initWithFactory:(id)arg1 ;
-(void)endElement;
@end

