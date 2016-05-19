/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTFeedControllerDataSource.h>

@class YTUploadInnerTubeTaskController, NSString;

@interface YTPendingUploadsDataSource : NSObject <YTFeedControllerDataSource> {

	YTUploadInnerTubeTaskController* _taskController;
	char _haveFetched;
	char _requestInProgress;
	unsigned _requestID;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestNextPageWithBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)refreshWithBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(char)canRefresh;
-(char)requestInProgress;
-(id)initWithTaskController:(id)arg1 ;
-(id)init;
-(char)hasNextPage;
-(void)clear;
@end

