/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/ParseModule.h>

@protocol ParseModule;
@class NSString;

@interface ParseModuleNode : NSObject <ParseModule> {

	id<ParseModule> _module;

}

@property (assign,nonatomic,__weak) id<ParseModule> module;              //@synthesize module=_module - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nodeWithModule:(id)arg1 ;
-(void)setModule:(id<ParseModule>)arg1 ;
-(id<ParseModule>)module;
-(void)parseDidInitializeWithApplicationId:(id)arg1 clientKey:(id)arg2 ;
@end

