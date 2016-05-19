/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/EXODASHBaseElementParser.h>

@class EXODASHSegmentBaseElementParser, EXODASHMPDSegmentIndexBuilder, NSString, EXODASHRepresentationBuilder;

@interface EXODASHRepresentationElementParser : EXODASHBaseElementParser {

	EXODASHSegmentBaseElementParser* _segmentBaseParser;
	EXODASHMPDSegmentIndexBuilder* _segmentIndexBuilder;
	NSString* _MIMEType;
	EXODASHRepresentationBuilder* _builder;

}

@property (nonatomic,retain) NSString * MIMEType;                                              //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,retain) EXODASHMPDSegmentIndexBuilder * segmentIndexBuilder;              //@synthesize segmentIndexBuilder=_segmentIndexBuilder - In the implementation block
@property (nonatomic,readonly) EXODASHRepresentationBuilder * builder;                         //@synthesize builder=_builder - In the implementation block
-(void)setMIMEType:(NSString *)arg1 ;
-(void)parseAttributes:(const char**)arg1 numAttributes:(unsigned)arg2 ;
-(id)startElementWithName:(const char*)arg1 ;
-(void)setSegmentIndexBuilder:(EXODASHMPDSegmentIndexBuilder *)arg1 ;
-(EXODASHMPDSegmentIndexBuilder *)segmentIndexBuilder;
-(NSString *)MIMEType;
-(id)initWithFactory:(id)arg1 ;
-(EXODASHRepresentationBuilder *)builder;
-(void)endElement;
@end

