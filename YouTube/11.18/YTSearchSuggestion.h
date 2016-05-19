/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface YTSearchSuggestion : NSObject {

	NSString* _text;
	unsigned _type;
	int _source;
	NSString* _deleteURLString;

}

@property (nonatomic,readonly) NSString * text;                         //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) unsigned type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int source;                              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * deleteURLString;              //@synthesize deleteURLString=_deleteURLString - In the implementation block
-(id)initWithText:(id)arg1 type:(unsigned)arg2 source:(int)arg3 deleteURLString:(id)arg4 ;
-(char)isFromSearchHistory;
-(NSString *)deleteURLString;
-(unsigned)type;
-(NSString *)text;
-(int)source;
-(char)isDeletable;
@end

