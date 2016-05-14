/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAURLTaskData.h>

@class NSURL, NSData;

@interface WAURLDownloadTaskData : WAURLTaskData {

	NSURL* _fileURL;
	NSData* _resumeData;

}

@property (nonatomic,copy) NSURL * fileURL;                    //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSData * resumeData;              //@synthesize resumeData=_resumeData - In the implementation block
+(Class)taskClass;
-(void)setResumeData:(NSData *)arg1 ;
-(char)validateResponseForTask:(id)arg1 error:(id*)arg2 ;
-(void)validateDownloadedFileForTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transformDownloadedFileForTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSData *)resumeData;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
@end

