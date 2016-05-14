/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager;

@interface IGDirectoryFinder : NSObject {

	NSFileManager* _fileManager;

}

@property (nonatomic,readonly) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
-(id)initWithFileManager:(id)arg1 ;
-(id)URLforUserDomainDirectory:(unsigned)arg1 ;
-(id)temporaryDirectoryURL;
-(id)cachesDirectoryURL;
-(id)trashDirectoryURL;
-(id)init;
-(NSFileManager *)fileManager;
-(id)documentsDirectoryURL;
@end

