/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface FBSDKGraphRequestBody : NSObject {

	NSMutableData* _data;

}

@property (nonatomic,retain,readonly) NSData * data; 
+(id)mimeContentType;
-(void)appendUTF8:(id)arg1 ;
-(void)_appendWithKey:(id)arg1 filename:(id)arg2 contentType:(id)arg3 contentBlock:(/*^block*/id)arg4 ;
-(void)appendWithKey:(id)arg1 formValue:(id)arg2 logger:(id)arg3 ;
-(void)appendWithKey:(id)arg1 imageValue:(id)arg2 logger:(id)arg3 ;
-(void)appendWithKey:(id)arg1 dataValue:(id)arg2 logger:(id)arg3 ;
-(void)appendWithKey:(id)arg1 dataAttachmentValue:(id)arg2 logger:(id)arg3 ;
-(id)init;
-(NSData *)data;
@end

