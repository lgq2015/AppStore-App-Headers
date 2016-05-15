/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class CLSInternalReport, CLSFileManager, NSString;

@interface CLSPackageReportOperation : NSOperation {

	CLSInternalReport* _report;
	CLSFileManager* _fileManager;
	NSString* _finalPath;

}

@property (nonatomic,readonly) CLSInternalReport * report;                //@synthesize report=_report - In the implementation block
@property (nonatomic,readonly) CLSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,copy) NSString * finalPath;                          //@synthesize finalPath=_finalPath - In the implementation block
-(char)writeBytes:(const void*)arg1 length:(unsigned long)arg2 toGZFile:(void*)arg3 ;
-(id)destinationDirectory;
-(void)setFinalPath:(NSString *)arg1 ;
-(id)packagedPathWithName:(id)arg1 ;
-(id)reportPath;
-(void)encode:(id)arg1 data:(id)arg2 fromPath:(id)arg3 ;
-(char)compressData:(id)arg1 toPath:(id)arg2 ;
-(id)initWithReport:(id)arg1 fileManager:(id)arg2 ;
-(NSString *)finalPath;
-(void)main;
-(CLSInternalReport *)report;
-(CLSFileManager *)fileManager;
@end

