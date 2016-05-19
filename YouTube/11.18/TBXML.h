/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <YouTube/YouTube-Structs.h>
@interface TBXML : NSObject {

	TBXMLElement* rootXMLElement;
	TBXMLElementBuffer* currentElementBuffer;
	TBXMLAttributeBuffer* currentAttributeBuffer;
	long currentElement;
	long currentAttribute;
	char* bytes;
	long bytesLength;
	char trimWhitespace;

}

@property (nonatomic,readonly) TBXMLElement* rootXMLElement; 
+(id)newTBXMLWithXMLString:(id)arg1 error:(id*)arg2 ;
+(id)textForElement:(TBXMLElement*)arg1 ;
+(TBXMLElement*)childElementNamed:(id)arg1 parentElement:(TBXMLElement*)arg2 ;
+(id)valueOfAttributeNamed:(id)arg1 forElement:(TBXMLElement*)arg2 ;
+(TBXMLElement*)nextSiblingNamed:(id)arg1 searchFromElement:(TBXMLElement*)arg2 ;
+(id)newTBXMLWithXMLData:(id)arg1 error:(id*)arg2 trimWhitespace:(char)arg3 ;
+(id)elementName:(TBXMLElement*)arg1 ;
+(id)attributeName:(TBXMLAttribute*)arg1 ;
+(id)attributeValue:(TBXMLAttribute*)arg1 ;
+(id)newTBXMLWithURL:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
+(id)newTBXMLWithXMLString:(id)arg1 ;
+(id)newTBXMLWithXMLString:(id)arg1 error:(id*)arg2 trimWhitespace:(char)arg3 ;
+(id)newTBXMLWithXMLData:(id)arg1 ;
+(id)newTBXMLWithXMLData:(id)arg1 error:(id*)arg2 ;
+(id)newTBXMLWithXMLFile:(id)arg1 ;
+(id)newTBXMLWithXMLFile:(id)arg1 error:(id*)arg2 ;
+(id)newTBXMLWithXMLFile:(id)arg1 error:(id*)arg2 trimWhitespace:(char)arg3 ;
+(id)newTBXMLWithXMLFile:(id)arg1 fileExtension:(id)arg2 ;
+(id)newTBXMLWithXMLFile:(id)arg1 fileExtension:(id)arg2 error:(id*)arg3 ;
+(id)newTBXMLWithXMLFile:(id)arg1 fileExtension:(id)arg2 error:(id*)arg3 trimWhitespace:(char)arg4 ;
+(void)iterateElementsForQuery:(id)arg1 fromElement:(TBXMLElement*)arg2 withBlock:(/*^block*/id)arg3 ;
+(id)elementName:(TBXMLElement*)arg1 error:(id*)arg2 ;
+(id)attributeName:(TBXMLAttribute*)arg1 error:(id*)arg2 ;
+(id)attributeValue:(TBXMLAttribute*)arg1 error:(id*)arg2 ;
+(id)textForElement:(TBXMLElement*)arg1 error:(id*)arg2 ;
+(id)valueOfAttributeNamed:(id)arg1 forElement:(TBXMLElement*)arg2 error:(id*)arg3 ;
+(TBXMLElement*)childElementNamed:(id)arg1 parentElement:(TBXMLElement*)arg2 error:(id*)arg3 ;
+(TBXMLElement*)nextSiblingNamed:(id)arg1 searchFromElement:(TBXMLElement*)arg2 error:(id*)arg3 ;
+(void)iterateAttributesOfElement:(TBXMLElement*)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)errorTextForCode:(int)arg1 ;
+(id)errorWithCode:(int)arg1 userInfo:(id)arg2 ;
+(id)errorWithCode:(int)arg1 ;
-(TBXMLElement*)rootXMLElement;
-(id)initWithURL:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)initWithXMLString:(id)arg1 ;
-(id)initWithXMLString:(id)arg1 error:(id*)arg2 ;
-(id)initWithXMLString:(id)arg1 error:(id*)arg2 trimWhitespace:(char)arg3 ;
-(id)initWithXMLData:(id)arg1 ;
-(id)initWithXMLData:(id)arg1 error:(id*)arg2 ;
-(id)initWithXMLData:(id)arg1 error:(id*)arg2 trimWhitespace:(char)arg3 ;
-(id)initWithXMLFile:(id)arg1 ;
-(id)initWithXMLFile:(id)arg1 error:(id*)arg2 ;
-(id)initWithXMLFile:(id)arg1 error:(id*)arg2 trimWhitespace:(char)arg3 ;
-(id)initWithXMLFile:(id)arg1 fileExtension:(id)arg2 ;
-(id)initWithXMLFile:(id)arg1 fileExtension:(id)arg2 error:(id*)arg3 ;
-(id)initWithXMLFile:(id)arg1 fileExtension:(id)arg2 error:(id*)arg3 trimWhitespace:(char)arg4 ;
-(int)allocateBytesOfLength:(long)arg1 error:(id*)arg2 ;
-(void)decodeBytes;
-(int)decodeData:(id)arg1 withError:(id*)arg2 ;
-(TBXMLElement*)nextAvailableElement;
-(TBXMLAttribute*)nextAvailableAttribute;
-(int)decodeData:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

