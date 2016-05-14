/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/AFMultipartFormData.h>

@class NSMutableURLRequest, AFMultipartBodyStream, NSString;

@interface AFStreamingMultipartFormData : NSObject <AFMultipartFormData> {

	NSMutableURLRequest* _request;
	AFMultipartBodyStream* _bodyStream;
	unsigned _stringEncoding;
	NSString* _multipartBoundaryString;

}

@property (nonatomic,copy) NSMutableURLRequest * request;                     //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) AFMultipartBodyStream * bodyStream;              //@synthesize bodyStream=_bodyStream - In the implementation block
@property (assign,nonatomic) unsigned stringEncoding;                         //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,copy) NSString * multipartBoundaryString;                //@synthesize multipartBoundaryString=_multipartBoundaryString - In the implementation block
-(void)setStringEncoding:(unsigned)arg1 ;
-(id)initWithURLRequest:(id)arg1 stringEncoding:(unsigned)arg2 ;
-(void)appendPartWithFormData:(id)arg1 name:(id)arg2 ;
-(id)requestByFinalizingMultipartFormData;
-(void)setMultipartBoundaryString:(NSString *)arg1 ;
-(void)setBodyStream:(AFMultipartBodyStream *)arg1 ;
-(char)appendPartWithFileURL:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 error:(id*)arg5 ;
-(NSString *)multipartBoundaryString;
-(AFMultipartBodyStream *)bodyStream;
-(void)appendPartWithHeaders:(id)arg1 body:(id)arg2 ;
-(char)appendPartWithFileURL:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(void)appendPartWithInputStream:(id)arg1 name:(id)arg2 fileName:(id)arg3 length:(long long)arg4 mimeType:(id)arg5 ;
-(void)appendPartWithFileData:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 ;
-(void)throttleBandwidthWithPacketSize:(unsigned)arg1 delay:(double)arg2 ;
-(NSMutableURLRequest *)request;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(unsigned)stringEncoding;
@end

