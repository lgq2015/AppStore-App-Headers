/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/PFNetworkCommand.h>

@class NSString, NSDictionary;

@interface PFRESTCommand : NSObject <PFNetworkCommand> {

	NSString* _sessionToken;
	NSString* _operationSetUUID;
	NSString* _localId;
	NSString* _httpPath;
	NSString* _httpMethod;
	NSDictionary* _parameters;
	NSDictionary* _additionalRequestHeaders;
	NSString* _cacheKey;

}

@property (nonatomic,copy) NSString * httpPath;                                  //@synthesize httpPath=_httpPath - In the implementation block
@property (nonatomic,copy) NSString * httpMethod;                                //@synthesize httpMethod=_httpMethod - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                            //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestHeaders;              //@synthesize additionalRequestHeaders=_additionalRequestHeaders - In the implementation block
@property (nonatomic,copy) NSString * cacheKey;                                  //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,copy) NSString * localId;                                   //@synthesize localId=_localId - In the implementation block
@property (nonatomic,copy) NSString * sessionToken;                              //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,copy) NSString * operationSetUUID;                          //@synthesize operationSetUUID=_operationSetUUID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandWithHTTPPath:(id)arg1 httpMethod:(id)arg2 parameters:(id)arg3 sessionToken:(id)arg4 ;
+(id)commandWithHTTPPath:(id)arg1 httpMethod:(id)arg2 parameters:(id)arg3 operationSetUUID:(id)arg4 sessionToken:(id)arg5 ;
+(char)isValidDictionaryRepresentation:(id)arg1 ;
+(char)forEachLocalIdIn:(id)arg1 doBlock:(/*^block*/id)arg2 ;
+(id)commandFromDictionaryRepresentation:(id)arg1 ;
-(NSString *)httpPath;
-(void)setHttpPath:(NSString *)arg1 ;
-(void)setOperationSetUUID:(NSString *)arg1 ;
-(void)forEachLocalId:(/*^block*/id)arg1 ;
-(void)maybeChangeServerOperation;
-(void)resolveLocalIds;
-(NSString *)operationSetUUID;
-(NSDictionary *)additionalRequestHeaders;
-(void)setAdditionalRequestHeaders:(NSDictionary *)arg1 ;
-(id)dictionaryRepresentation;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSString *)cacheKey;
-(void)setCacheKey:(NSString *)arg1 ;
-(NSString *)httpMethod;
-(void)setLocalId:(NSString *)arg1 ;
-(NSString *)localId;
-(NSString *)sessionToken;
-(void)setSessionToken:(NSString *)arg1 ;
-(void)setHttpMethod:(NSString *)arg1 ;
@end

