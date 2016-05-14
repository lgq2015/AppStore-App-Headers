/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSData;

@interface GTMMIMEDocumentPart : NSObject {

	NSDictionary* _headers;
	NSData* _headerData;
	NSData* _bodyData;

}

@property (nonatomic,readonly) NSDictionary * headers;              //@synthesize headers=_headers - In the implementation block
@property (nonatomic,readonly) NSData * headerData;                 //@synthesize headerData=_headerData - In the implementation block
@property (nonatomic,readonly) NSData * body;                       //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) unsigned length; 
+(id)partWithHeaders:(id)arg1 body:(id)arg2 ;
-(id)initWithHeaders:(id)arg1 body:(id)arg2 ;
-(char)containsBytes:(const char*)arg1 length:(unsigned)arg2 ;
-(NSDictionary *)headers;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)length;
-(NSData *)body;
-(NSData *)headerData;
@end

