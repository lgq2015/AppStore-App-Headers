/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectContentRealtimeUploadable.h>

@class IGDirectContentUploadInfo, NSString;

@interface IGDirectLike : IGDirectContent <IGDirectContentRealtimeUploadable> {

	IGDirectContentUploadInfo* _uploadInfo;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGDirectContentUploadInfo * uploadInfo;              //@synthesize uploadInfo=_uploadInfo - In the implementation block
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(id)dictionaryForRealtimeUpload;
-(id)contentTypeString;
-(id)initAsUploadWithRecipient:(id)arg1 ;
-(char)isUploading;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)digestDescription;
@end

