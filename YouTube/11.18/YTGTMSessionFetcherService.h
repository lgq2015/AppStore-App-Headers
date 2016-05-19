/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GTMSessionFetcherService.h>

@class NSArray;

@interface YTGTMSessionFetcherService : GTMSessionFetcherService {

	NSArray* _requestDecorators;
	char _handleBadURLEncodingOnRedirect;

}
+(id)fetcherServiceWithAllowedInsecureSchemes:(id)arg1 authorization:(id)arg2 ;
+(id)fetcherService;
+(id)fetcherServiceWithAllowedInsecureSchemes:(id)arg1 requestDecorators:(id)arg2 handleBadURLEncodingOnRedirect:(char)arg3 maxRunningFetchersPerHost:(unsigned)arg4 ;
+(id)CSIFetcherServiceWithAllowedInsecureSchemes:(id)arg1 requestDecorators:(id)arg2 ;
+(id)adsFetcherServiceWithAllowedInsecureSchemes:(id)arg1 requestDecorators:(id)arg2 ;
+(id)dataFetcherServiceWithAllowedInsecureSchemes:(id)arg1 requestDecorators:(id)arg2 ;
+(id)imageFetcherServiceWithAllowedInsecureSchemes:(id)arg1 requestDecorators:(id)arg2 ;
+(id)callbackQueue;
-(id)fetcherWithRequest:(id)arg1 fetcherClass:(Class)arg2 ;
-(id)initWithAllowedInsecureSchemes:(id)arg1 requestDecorators:(id)arg2 ;
-(id)initWithAllowedInsecureSchemes:(id)arg1 requestDecorators:(id)arg2 handleBadURLEncodingOnRedirect:(char)arg3 ;
-(id)init;
@end

