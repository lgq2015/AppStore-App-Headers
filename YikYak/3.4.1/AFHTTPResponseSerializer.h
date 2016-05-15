/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/Yik Yak-Structs.h>
#import <Yik Yak/AFURLResponseSerialization.h>

@class NSIndexSet, NSSet, NSString;

@interface AFHTTPResponseSerializer : NSObject <AFURLResponseSerialization> {

	unsigned _stringEncoding;
	NSIndexSet* _acceptableStatusCodes;
	NSSet* _acceptableContentTypes;

}

@property (assign,nonatomic) unsigned stringEncoding;                       //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,copy) NSIndexSet * acceptableStatusCodes;              //@synthesize acceptableStatusCodes=_acceptableStatusCodes - In the implementation block
@property (nonatomic,copy) NSSet * acceptableContentTypes;                  //@synthesize acceptableContentTypes=_acceptableContentTypes - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)serializer;
-(NSSet *)acceptableContentTypes;
-(void)setAcceptableContentTypes:(NSSet *)arg1 ;
-(id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)setStringEncoding:(unsigned)arg1 ;
-(void)setAcceptableStatusCodes:(NSIndexSet *)arg1 ;
-(NSIndexSet *)acceptableStatusCodes;
-(char)validateResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)stringEncoding;
@end

