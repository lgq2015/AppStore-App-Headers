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

@class GPBMessage, NSMutableDictionary;

@interface GPBInt64DoubleDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {

	GPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) unsigned count; 
+(id)dictionaryWithValue:(double)arg1 forKey:(long long)arg2 ;
+(id)dictionaryWithValues:(const double*)arg1 forKeys:(const long long*)arg2 count:(unsigned)arg3 ;
+(id)dictionary;
+(id)dictionaryWithDictionary:(id)arg1 ;
+(id)dictionaryWithCapacity:(unsigned)arg1 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(unsigned long)computeSerializedSizeAsField:(id)arg1 ;
-(void)setGPBGenericValue:(/*function pointer*/void**)arg1 forGPBGenericValueKey:(/*function pointer*/void**)arg2 ;
-(id)initWithValues:(const double*)arg1 forKeys:(const long long*)arg2 count:(unsigned)arg3 ;
-(char)valueForKey:(long long)arg1 value:(double*)arg2 ;
-(void)setValue:(double)arg1 forKey:(long long)arg2 ;
-(void)dealloc;
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
-(void)removeValueForKey:(long long)arg1 ;
@end

