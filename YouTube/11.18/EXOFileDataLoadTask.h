/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/EXODataLoadTask.h>

@protocol OS_dispatch_queue, EXODataLoadTaskDelegate, EXODataLoadTaskStatsDelegate;
@class NSURLRequest, NSURLResponse, EXORangedURL, NSString, NSObject;

@interface EXOFileDataLoadTask : NSObject <EXODataLoadTask> {

	EXORangedURL* _rangedURL;
	NSString* _path;
	NSObject*<OS_dispatch_queue> _fileReadQueue;
	char _expectedDataLengthCalculated;
	unsigned _expectedDataLength;
	id<EXODataLoadTaskDelegate> _delegate;
	id<EXODataLoadTaskStatsDelegate> _statsDelegate;
	double _startTime;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startTime;                                          //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) long long expectedDataLength; 
@property (nonatomic,readonly) NSURLRequest * request; 
@property (nonatomic,readonly) NSURLResponse * response; 
@property (nonatomic,retain) id<EXODataLoadTaskDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<EXODataLoadTaskStatsDelegate> statsDelegate;              //@synthesize statsDelegate=_statsDelegate - In the implementation block
-(id<EXODataLoadTaskStatsDelegate>)statsDelegate;
-(void)setStatsDelegate:(id<EXODataLoadTaskStatsDelegate>)arg1 ;
-(long long)expectedDataLength;
-(id)initWithRangedURL:(id)arg1 fileReadQueue:(id)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<EXODataLoadTaskDelegate>)arg1 ;
-(id)init;
-(id<EXODataLoadTaskDelegate>)delegate;
-(NSURLRequest *)request;
-(void)start;
-(NSURLResponse *)response;
-(double)startTime;
@end

