/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/DDLogFileManager.h>

@class NSString;

@interface DDLogFileManagerDefault : NSObject <DDLogFileManager> {

	unsigned maximumNumberOfLogFiles;
	NSString* _logsDirectory;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned maximumNumberOfLogFiles; 
-(id)initWithLogsDirectory:(id)arg1 ;
-(id)defaultLogsDirectory;
-(id)sortedLogFileInfos;
-(unsigned)maximumNumberOfLogFiles;
-(id)logsDirectory;
-(char)isLogFile:(id)arg1 ;
-(id)unsortedLogFilePaths;
-(id)unsortedLogFileInfos;
-(id)generateShortUUID;
-(id)unsortedLogFileNames;
-(id)sortedLogFilePaths;
-(id)sortedLogFileNames;
-(id)createNewLogFile;
-(void)setMaximumNumberOfLogFiles:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)deleteOldLogFiles;
@end

