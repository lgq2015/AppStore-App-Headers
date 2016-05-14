/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:24:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSDictionary, NSMutableDictionary, NSString, NSHTTPURLResponse;

@interface HTTPMultipartUpload : NSObject {

	NSURL* url_;
	NSDictionary* parameters_;
	NSMutableDictionary* files_;
	NSString* boundary_;
	NSHTTPURLResponse* response_;

}
-(void)addFileContents:(id)arg1 name:(id)arg2 ;
-(void)addFileUploadAttachment:(id)arg1 ;
-(id)send:(id*)arg1 timeoutInterval:(double)arg2 ;
-(id)formDataForKey:(id)arg1 value:(id)arg2 ;
-(id)formDataForFileUploadAttachment:(id)arg1 ;
-(void)addFileAtPath:(id)arg1 name:(id)arg2 ;
-(id)send:(id*)arg1 ;
-(id)multipartBoundary;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)URL;
-(id)response;
-(id)parameters;
-(void)setParameters:(id)arg1 ;
-(id)files;
@end

