/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGDKDiffable.h>

@class IGFeedItemRowIdentifier;

@interface IGFeedItemRow : NSObject <IGDKDiffable> {

	IGFeedItemRowIdentifier* _identifier;
	unsigned _hash;
	int _type;
	int _textType;
	id _value;

}

@property (nonatomic,readonly) int type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int textType;              //@synthesize textType=_textType - In the implementation block
@property (nonatomic,readonly) id value;                  //@synthesize value=_value - In the implementation block
-(id)diffIdentifier;
-(id)initWithType:(int)arg1 textType:(int)arg2 value:(id)arg3 ;
-(id)initWithType:(int)arg1 textType:(int)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)type;
-(id)value;
-(id)initWithType:(int)arg1 ;
-(int)textType;
@end

