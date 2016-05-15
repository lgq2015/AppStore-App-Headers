/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/Yik Yak-Structs.h>
#import <Yik Yak/DDAbstractLogger.h>
#import <Yik Yak/DDLogger.h>

@protocol DDLogFileManager;
@class DDLogFileInfo, NSFileHandle, NSString;

@interface DDFileLogger : DDAbstractLogger <DDLogger> {

	id<DDLogFileManager> _logFileManager;
	DDLogFileInfo* _currentLogFileInfo;
	NSFileHandle* _currentLogFileHandle;
	dispatch_source_sRef _currentLogFileVnode;
	dispatch_source_sRef _rollingTimer;
	unsigned long long _maximumFileSize;
	double _rollingFrequency;
	char _doNotReuseLogFiles;
	char _automaticallyAppendNewlineForCustomFormatters;
	id<DDLogFileManager> logFileManager;

}

@property (assign) unsigned long long maximumFileSize; 
@property (assign) double rollingFrequency; 
@property (assign) char doNotReuseLogFiles;                                                   //@synthesize doNotReuseLogFiles=_doNotReuseLogFiles - In the implementation block
@property (nonatomic,readonly) id<DDLogFileManager> logFileManager; 
@property (assign,nonatomic) char automaticallyAppendNewlineForCustomFormatters;              //@synthesize automaticallyAppendNewlineForCustomFormatters=_automaticallyAppendNewlineForCustomFormatters - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<DDLogFormatter> logFormatter; 
@property (nonatomic,readonly) dispatch_queue_sRef loggerQueue; 
@property (nonatomic,readonly) NSString * loggerName; 
-(id<DDLogFileManager>)logFileManager;
-(id)initWithLogFileManager:(id)arg1 ;
-(void)setMaximumFileSize:(unsigned long long)arg1 ;
-(void)setRollingFrequency:(double)arg1 ;
-(void)willRemoveLogger;
-(NSString *)loggerName;
-(void)maybeRollLogFileDueToSize;
-(void)maybeRollLogFileDueToAge;
-(void)rollLogFileWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)rollLogFileNow;
-(void)scheduleTimerToRollLogFileDueToAge;
-(id)currentLogFileInfo;
-(id)currentLogFileHandle;
-(unsigned long long)maximumFileSize;
-(double)rollingFrequency;
-(void)rollLogFile;
-(char)doNotReuseLogFiles;
-(void)setDoNotReuseLogFiles:(char)arg1 ;
-(char)automaticallyAppendNewlineForCustomFormatters;
-(void)setAutomaticallyAppendNewlineForCustomFormatters:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)logMessage:(id)arg1 ;
@end

