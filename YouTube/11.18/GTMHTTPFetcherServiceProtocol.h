/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSOperationQueue;


@protocol GTMHTTPFetcherServiceProtocol <NSObject>
@property (retain) NSOperationQueue * delegateQueue; 
@optional
-(id)callbackQueue;

@required
-(id)fetcherWithRequest:(id)arg1;
-(char)fetcherShouldBeginFetching:(id)arg1;
-(void)fetcherDidStop:(id)arg1;
-(char)isDelayingFetcher:(id)arg1;
-(NSOperationQueue *)delegateQueue;
-(void)setDelegateQueue:(id)arg1;

@end

