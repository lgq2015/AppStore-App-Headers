/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSMutableData, NSDictionary, NSString;

@interface DIALRequestHandler : NSObject <NSURLSessionDataDelegate> {

	/*^block*/id _onSuccess;
	/*^block*/id _onError;
	NSMutableData* _responseData;
	NSDictionary* _responseHeaders;
	int _statusCode;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSuccessCallback:(/*^block*/id)arg1 withErrorCallback:(/*^block*/id)arg2 ;
-(void)connectWithRequest:(id)arg1 ;
-(void)cleanUpBlocks;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
@end

