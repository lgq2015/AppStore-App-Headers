/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectContentSuppressable.h>

@class NSString, NSArray;

@interface IGDirectThreadActionLog : IGDirectContent <IGDirectContentSuppressable> {

	char _hideInThread;
	NSString* _title;
	NSArray* _boldInfo;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * boldInfo;                    //@synthesize boldInfo=_boldInfo - In the implementation block
@property (assign,nonatomic) char hideInThread;                     //@synthesize hideInThread=_hideInThread - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hideInThread;
-(id)contentTypeString;
-(NSArray *)boldInfo;
-(void)setBoldInfo:(NSArray *)arg1 ;
-(void)setHideInThread:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)digestDescription;
@end

