/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface OAAttachment : NSObject {

	NSString* name;
	NSString* fileName;
	NSString* contentType;
	NSData* data;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * fileName; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSData * data; 
-(id)initWithName:(id)arg1 filename:(id)arg2 contentType:(id)arg3 data:(id)arg4 ;
-(void)setContentType:(NSString *)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)contentType;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end

