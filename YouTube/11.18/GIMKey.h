/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class Protocol;

@interface GIMKey : NSObject <NSCopying> {

	unsigned _hash;
	int _bindingType;
	id _fromType;
	id _type;
	Protocol* _label;

}

@property (nonatomic,readonly) int bindingType;               //@synthesize bindingType=_bindingType - In the implementation block
@property (nonatomic,readonly) id fromType;                   //@synthesize fromType=_fromType - In the implementation block
@property (nonatomic,readonly) id type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) Protocol * label;              //@synthesize label=_label - In the implementation block
+(id)keyForType:(id)arg1 label:(id)arg2 ;
+(id)keyForType:(id)arg1 ;
+(id)keyForArrayOfType:(id)arg1 label:(id)arg2 ;
+(id)keyForDictionaryFromType:(id)arg1 toType:(id)arg2 label:(id)arg3 ;
+(id)descriptionOfType:(id)arg1 ;
+(id)keyForArrayOfType:(id)arg1 ;
+(id)keyForDictionaryFromType:(id)arg1 toType:(id)arg2 ;
-(int)bindingType;
-(id)fromType;
-(id)initWithBindingType:(int)arg1 fromType:(id)arg2 type:(id)arg3 label:(id)arg4 ;
-(id)bindingTypeDescription;
-(id)fromTypeDescription;
-(id)labelDescription;
-(id)typeDescription;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Protocol *)label;
@end

