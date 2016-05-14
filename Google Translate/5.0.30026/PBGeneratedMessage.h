/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <Translate/PBRootObject.h>
#import <Translate/PBMutableArrayDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_semaphore;
@class PBUnknownFieldSet, NSMutableDictionary, PBFieldDescriptor, PBExtensionField, NSObject, NSString;

@interface PBGeneratedMessage : PBRootObject <PBMutableArrayDelegate, NSCopying, NSMutableCopying, NSSecureCoding> {

	PBUnknownFieldSet* unknownFields_;
	NSMutableDictionary* extensionMap_;
	NSMutableDictionary* autocreatedExtensionMap_;
	PBGeneratedMessage* autocreator_;
	PBFieldDescriptor* autocreatorField_;
	PBExtensionField* autocreatorExtension_;
	PBGeneratedMessage_StorageRef messageStorage_;
	long readOnlySemaphoreCreationOnce_;
	NSObject*<OS_dispatch_semaphore> readOnlySemaphore_;

}

@property (nonatomic,retain) PBUnknownFieldSet * unknownFields; 
@property (getter=isInitialized,nonatomic,readonly) char initialized; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parseFromData:(id)arg1 extensionRegistry:(id)arg2 ;
+(id)newMessageWithAutocreator:(id)arg1 extension:(id)arg2 ;
+(id)newMessageWithAutocreator:(id)arg1 field:(id)arg2 ;
+(id)parseFromData:(id)arg1 ;
+(id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
+(id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
+(char)resolveInstanceMethod:(SEL)arg1 ;
+(char)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(void)initialize;
+(id)message;
+(id)descriptor;
+(id)builder;
-(void)setExtension:(id)arg1 value:(id)arg2 ;
-(char)hasExtension:(id)arg1 ;
-(id)getExtension:(id)arg1 ;
-(void)pbMutableArray:(id)arg1 willAddElements:(unsigned)arg2 ;
-(void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)writeToCodedOutputStream:(id)arg1 ;
-(unsigned long)serializedSize;
-(void)addExtension:(id)arg1 value:(id)arg2 ;
-(id)getExistingExtension:(id)arg1 ;
-(void)internalClear;
-(void)copyFieldsInto:(id)arg1 zone:(NSZone*)arg2 ;
-(void)clearAutocreator;
-(char)isInitialized:(id)arg1 ;
-(void)writeDelimitedToCodedOutputStream:(id)arg1 ;
-(void)writeExtensionsToCodedOutputStream:(id)arg1 range:(id)arg2 ;
-(void)writeField:(id)arg1 toCodedOutputStream:(id)arg2 ;
-(void)clearExtension:(id)arg1 ;
-(void)mergeFromData:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)setUnknownFields:(PBUnknownFieldSet *)arg1 ;
-(void)mergeUnknownFields:(id)arg1 ;
-(id)mutableUnknownFields;
-(void)parseMessageSet:(id)arg1 extensionRegistry:(id)arg2 ;
-(char)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(unsigned)arg3 ;
-(unsigned long)extensionsSerializedSize;
-(id)delimitedData;
-(void)writeToOutputStream:(id)arg1 ;
-(void)writeDelimitedToOutputStream:(id)arg1 ;
-(id)extensionsCurrentlySet;
-(id)sortedExtensionsInUse;
-(void)setExtension:(id)arg1 index:(unsigned)arg2 value:(id)arg3 ;
-(char)wasAutocreatedBy:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)data;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(id)descriptor;
-(id)builder;
-(char)isInitialized;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFieldSet *)unknownFields;
-(id)build;
@end

