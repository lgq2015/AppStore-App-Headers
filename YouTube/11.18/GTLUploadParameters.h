/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSFileHandle, NSURL;

@interface GTLUploadParameters : NSObject <NSCopying> {

	NSString* MIMEType_;
	NSData* data_;
	NSFileHandle* fileHandle_;
	NSURL* fileURL_;
	NSURL* uploadLocationURL_;
	NSString* slug_;
	char shouldSendUploadOnly_;
	char useBackgroundSession_;

}

@property (copy) NSString * MIMEType; 
@property (retain) NSData * data; 
@property (retain) NSFileHandle * fileHandle; 
@property (retain) NSURL * fileURL; 
@property (retain) NSURL * uploadLocationURL; 
@property (copy) NSString * slug; 
@property (assign) char shouldSendUploadOnly; 
@property (assign) char useBackgroundSession; 
+(id)uploadParametersWithData:(id)arg1 MIMEType:(id)arg2 ;
+(id)uploadParametersWithFileHandle:(id)arg1 MIMEType:(id)arg2 ;
+(id)uploadParametersWithFileURL:(id)arg1 MIMEType:(id)arg2 ;
-(void)setUploadLocationURL:(NSURL *)arg1 ;
-(NSURL *)uploadLocationURL;
-(NSString *)slug;
-(char)shouldSendUploadOnly;
-(void)setMIMEType:(NSString *)arg1 ;
-(void)setUseBackgroundSession:(char)arg1 ;
-(void)setSlug:(NSString *)arg1 ;
-(void)setShouldSendUploadOnly:(char)arg1 ;
-(char)useBackgroundSession;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)MIMEType;
-(NSURL *)fileURL;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
@end

