/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SSOAuthorization;
@class NSURLRequest;

@interface PendingRequestKey : NSObject <NSCopying> {

	NSURLRequest* _request;
	id<SSOAuthorization> _authorizer;

}

@property (nonatomic,readonly) NSURLRequest * request;                       //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) id<SSOAuthorization> authorizer;              //@synthesize authorizer=_authorizer - In the implementation block
+(id)keyWithRequest:(id)arg1 authorizer:(id)arg2 ;
-(id<SSOAuthorization>)authorizer;
-(id)initWithRequest:(id)arg1 authorizer:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSURLRequest *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

