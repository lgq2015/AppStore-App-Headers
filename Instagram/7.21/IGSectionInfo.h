/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface IGSectionInfo : NSObject <NSCopying> {

	NSString* _title;
	id _sectionType;
	NSArray* _rowsInfoArray;

}

@property (nonatomic,retain) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) id sectionType;                       //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,retain) NSArray * rowsInfoArray;              //@synthesize rowsInfoArray=_rowsInfoArray - In the implementation block
-(void)setRowsInfoArray:(NSArray *)arg1 ;
-(NSArray *)rowsInfoArray;
-(id)sectionType;
-(void)setSectionType:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

