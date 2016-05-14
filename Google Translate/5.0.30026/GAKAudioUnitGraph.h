/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Translate/Translate-Structs.h>
@class NSMutableSet;

@interface GAKAudioUnitGraph : NSObject {

	NSMutableSet* _audioUnits;
	OpaqueAUGraphRef _auGraph;

}

@property (nonatomic,readonly) OpaqueAUGraphRef auGraph;              //@synthesize auGraph=_auGraph - In the implementation block
-(id)addAudioUnit:(id)arg1 ;
-(id)connectOutputFromUnit:(id)arg1 toInputOfUnit:(id)arg2 ;
-(id)connectOutputElement:(GAKElement)arg1 toInputElement:(GAKElement)arg2 ;
-(id)disconnectInputElement:(GAKElement)arg1 ;
-(id)removeAudioUnit:(id)arg1 ;
-(id)disconnectInputOfUnit:(id)arg1 ;
-(OpaqueAUGraphRef)auGraph;
-(void)dealloc;
-(id)init;
-(id)stop;
-(id)initialize;
-(id)start;
-(char)isRunning;
-(id)initWithError:(id*)arg1 ;
@end

