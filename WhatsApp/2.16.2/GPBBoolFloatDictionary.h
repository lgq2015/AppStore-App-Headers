/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/GPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage;

@interface GPBBoolFloatDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {

	GPBMessage* _autocreator;
	float _values[2];
	char _valueSet[2];

}

@property (nonatomic,readonly) unsigned count; 
+(id)dictionaryWithValue:(float)arg1 forKey:(char)arg2 ;
+(id)dictionaryWithValues:(const float*)arg1 forKeys:(const char*)arg2 count:(unsigned)arg3 ;
+(id)dictionary;
+(id)dictionaryWithDictionary:(id)arg1 ;
+(id)dictionaryWithCapacity:(unsigned)arg1 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(unsigned long)computeSerializedSizeAsField:(id)arg1 ;
-(void)setGPBGenericValue:(/*function pointer*/void**)arg1 forGPBGenericValueKey:(/*function pointer*/void**)arg2 ;
-(id)initWithValues:(const float*)arg1 forKeys:(const char*)arg2 count:(unsigned)arg3 ;
-(char)valueForKey:(char)arg1 value:(float*)arg2 ;
-(void)setValue:(float)arg1 forKey:(char)arg2 ;
-(unsigned)count;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeAll;
-(void)enumerateKeysAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)removeValueForKey:(char)arg1 ;
@end

