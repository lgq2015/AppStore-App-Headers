/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFObject, NSString, NSMutableSet, NSObject;

@interface PFRelation : NSObject {

	PFObject* _parent;
	NSString* _parentClassName;
	NSString* _parentObjectId;
	NSMutableSet* _knownObjects;
	NSObject* _lock;
	NSString* _key;
	NSString* _targetClass;

}

@property (nonatomic,retain) NSString * targetClass;              //@synthesize targetClass=_targetClass - In the implementation block
+(id)relationForObject:(id)arg1 forKey:(id)arg2 ;
+(id)relationFromDictionary:(id)arg1 withDecoder:(id)arg2 ;
+(id)relationWithTargetClass:(id)arg1 ;
-(id)encodeIntoDictionary;
-(void)ensureParentIs:(id)arg1 andKeyIs:(id)arg2 ;
-(char)_hasKnownObject:(id)arg1 ;
-(id)initWithParent:(id)arg1 key:(id)arg2 ;
-(id)initWithTargetClass:(id)arg1 ;
-(id)initFromDictionary:(id)arg1 withDecoder:(id)arg2 ;
-(void)_addKnownObject:(id)arg1 ;
-(void)_removeKnownObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)description;
-(id)query;
-(void)setTargetClass:(NSString *)arg1 ;
-(NSString *)targetClass;
-(void)setParent:(id)arg1 ;
@end

