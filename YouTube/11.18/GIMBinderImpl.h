/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GIMBinder.h>

@class NSMutableArray, NSArray;

@interface GIMBinderImpl : NSObject <GIMBinder> {

	NSMutableArray* _bindingBuilders;
	NSMutableArray* _moduleNames;
	NSArray* _bindings;
	GIMBinderImpl* _overriddenBinder;
	GIMBinderImpl* _overridingBinder;

}

@property (nonatomic,readonly) GIMBinderImpl * overriddenBinder;              //@synthesize overriddenBinder=_overriddenBinder - In the implementation block
@property (nonatomic,readonly) GIMBinderImpl * overridingBinder;              //@synthesize overridingBinder=_overridingBinder - In the implementation block
@property (nonatomic,readonly) NSArray * bindings;                            //@synthesize bindings=_bindings - In the implementation block
-(id)bindType:(id)arg1 ;
-(NSArray *)bindings;
-(id)bindArrayOfType:(id)arg1 ;
-(id)bindDictionaryFromType:(id)arg1 toType:(id)arg2 ;
-(id)bindKey:(id)arg1 ;
-(void)installModule:(id)arg1 ;
-(GIMBinderImpl *)overriddenBinder;
-(GIMBinderImpl *)overridingBinder;
-(id)init;
@end

