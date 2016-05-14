/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSArray;

@interface WAContactMultiValueProperty : NSObject <NSCopying, NSFastEnumeration> {

	NSMutableArray* _deletedProperties;
	int _abPropertyID;
	NSArray* _properties;

}

@property (assign,nonatomic) int abPropertyID;                           //@synthesize abPropertyID=_abPropertyID - In the implementation block
@property (nonatomic,readonly) NSArray * deletedProperties; 
@property (readonly) unsigned count; 
@property (nonatomic,retain) NSArray * properties;                       //@synthesize properties=_properties - In the implementation block
+(id)propertyWithABProperty:(int)arg1 properties:(id)arg2 ;
-(unsigned)indexOfPropertyIdenticalTo:(id)arg1 ;
-(void)addProperty:(id)arg1 ;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(id)propertiesPassingTest:(/*^block*/id)arg1 ;
-(NSArray *)deletedProperties;
-(id)firstProperty;
-(char)isEqualToProperty:(id)arg1 ;
-(void)setAbPropertyID:(int)arg1 ;
-(id)initWithABProperty:(int)arg1 properties:(id)arg2 ;
-(id)lastProperty;
-(id)propertyAtIndex:(unsigned)arg1 ;
-(void)addPropertiesFromArray:(id)arg1 ;
-(void)removePropertyAtIndex:(unsigned)arg1 ;
-(void)enumeratePropertiesWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumeratePropertiesAtIndexes:(id)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(int)abPropertyID;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_WA75*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)properties;
-(void)setProperties:(NSArray *)arg1 ;
@end

