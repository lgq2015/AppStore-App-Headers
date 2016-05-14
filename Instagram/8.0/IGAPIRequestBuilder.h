/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface IGAPIRequestBuilder : NSObject {

	char _HTTPShouldHandleCookies;
	char _isSigned;
	unsigned _HTTPMethod;
	NSString* _path;
	NSMutableDictionary* _parameters;
	NSMutableDictionary* _fileParameters;
	NSMutableDictionary* _headers;

}

@property (assign,nonatomic) unsigned HTTPMethod;                                 //@synthesize HTTPMethod=_HTTPMethod - In the implementation block
@property (nonatomic,copy) NSString * path;                                       //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * parameters;                  //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * fileParameters;              //@synthesize fileParameters=_fileParameters - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * headers;                     //@synthesize headers=_headers - In the implementation block
@property (nonatomic,readonly) char HTTPShouldHandleCookies;                      //@synthesize HTTPShouldHandleCookies=_HTTPShouldHandleCookies - In the implementation block
@property (assign,nonatomic) char isSigned;                                       //@synthesize isSigned=_isSigned - In the implementation block
+(id)builderWithHTTPMethod:(unsigned)arg1 path:(id)arg2 ;
+(id)builderWithHTTPMethod:(unsigned)arg1 format:(id)arg2 ;
-(NSMutableDictionary *)fileParameters;
-(id)setFile:(id)arg1 forParameter:(id)arg2 ;
-(id)sign;
-(char)HTTPShouldHandleCookies;
-(id)setValue:(id)arg1 forParameter:(id)arg2 ;
-(NSMutableDictionary *)headers;
-(id)init;
-(id)request;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSMutableDictionary *)parameters;
-(void)setIsSigned:(char)arg1 ;
-(unsigned)HTTPMethod;
-(id)setHTTPShouldHandleCookies:(char)arg1 ;
-(id)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(char)isSigned;
-(void)setHTTPMethod:(unsigned)arg1 ;
@end

