/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/PF_AFHTTPRequestOperation.h>

@class NSError;

@interface PF_AFPropertyListRequestOperation : PF_AFHTTPRequestOperation {

	id _responsePropertyList;
	unsigned _propertyListReadOptions;
	unsigned _propertyListFormat;
	NSError* _propertyListError;

}

@property (nonatomic,retain) id responsePropertyList;                       //@synthesize responsePropertyList=_responsePropertyList - In the implementation block
@property (assign,nonatomic) unsigned propertyListReadOptions;              //@synthesize propertyListReadOptions=_propertyListReadOptions - In the implementation block
@property (assign,nonatomic) unsigned propertyListFormat;                   //@synthesize propertyListFormat=_propertyListFormat - In the implementation block
@property (nonatomic,retain) NSError * propertyListError;                   //@synthesize propertyListError=_propertyListError - In the implementation block
+(id)acceptableContentTypes;
+(char)canProcessRequest:(id)arg1 ;
+(id)propertyListRequestOperationWithRequest:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)setCompletionBlockWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(id)responsePropertyList;
-(void)setPropertyListReadOptions:(unsigned)arg1 ;
-(unsigned)propertyListReadOptions;
-(void)setResponsePropertyList:(id)arg1 ;
-(void)setPropertyListFormat:(unsigned)arg1 ;
-(void)setPropertyListError:(NSError *)arg1 ;
-(NSError *)propertyListError;
-(unsigned)propertyListFormat;
-(id)error;
-(id)initWithRequest:(id)arg1 ;
@end

