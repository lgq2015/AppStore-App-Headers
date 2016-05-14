/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface DDLogMessage : NSObject {

	int logLevel;
	int logFlag;
	int logContext;
	NSString* logMsg;
	NSDate* timestamp;
	const char* file;
	const char* className;
	const char* function;
	int lineNumber;
	unsigned machThreadID;
	char threadName[65];
	NSString* logTag;
	char* queueLabel;
	NSString* threadID;
	NSString* fileName;
	NSString* methodName;
	NSString* classNameNSString;
	NSString* threadNameNSString;

}
-(id)methodName;
-(id)initWithLogMsg:(id)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 tag:(id)arg5 file:(const char*)arg6 className:(const char*)arg7 function:(const char*)arg8 line:(int)arg9 ;
-(id)initWithLogMsg:(id)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char*)arg5 className:(const char*)arg6 function:(const char*)arg7 line:(int)arg8 ;
-(void)dealloc;
-(id)className;
-(id)threadName;
-(id)threadID;
-(id)fileName;
@end

