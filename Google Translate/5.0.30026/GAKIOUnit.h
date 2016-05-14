/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <Translate/GAKAudioUnit.h>
#import <Translate/GAKAudioSink.h>
#import <Translate/GAKAudioSourceProtocol.h>

@class GAKIOUnitInputSource, GAKAudioSource, NSString;

@interface GAKIOUnit : GAKAudioUnit <GAKAudioSink, GAKAudioSourceProtocol> {

	AudioStreamBasicDescription _audioFormat;
	GAKIOUnitInputSource* _inputSource;
	GAKAudioSource* _proxySource;
	unsigned long _numberOfInputChannels;
	double _inputSampleRate;

}

@property (assign,nonatomic) double inputSampleRate;                                        //@synthesize inputSampleRate=_inputSampleRate - In the implementation block
@property (assign,nonatomic) unsigned long numberOfInputChannels;                           //@synthesize numberOfInputChannels=_numberOfInputChannels - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) const AudioStreamBasicDescription* audioFormat; 
-(void)removeSink:(id)arg1 ;
-(id)initWithSubtype:(unsigned long)arg1 ;
-(void)addSink:(id)arg1 ;
-(void)handleAudio:(AudioBufferList*)arg1 fromSource:(id)arg2 ;
-(unsigned long)inputElementCount;
-(unsigned long)outputElementCount;
-(id)leaveGraph;
-(id)joinGraph:(id)arg1 ;
-(void)setInputSampleRate:(double)arg1 ;
-(void)setNumberOfInputChannels:(unsigned long)arg1 ;
-(double)inputSampleRate;
-(unsigned long)numberOfInputChannels;
-(id)init;
-(const AudioStreamBasicDescription*)audioFormat;
@end

