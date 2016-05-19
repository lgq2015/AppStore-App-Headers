/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/GSKAudioCaptureInterface.h>

@protocol GSKAudioCaptureDelegate;
@class GSKAudioLog, NSMutableArray, GSKFeederThread, NSCondition, NSString;

@interface GSKAudioCapture : NSObject <GSKAudioCaptureInterface> {

	AudioStreamBasicDescription _dataFormat;
	int _numberOfSamplesRecorded;
	char _capturing;
	unsigned _outputSampleRate;
	NSMutableArray* _audioBuffers;
	unsigned long _audioBufferCapacity;
	unsigned short _audioBufferReadIndex;
	unsigned short _audioBufferWriteIndex;
	OpaqueAudioComponentInstanceRef _remoteIOUnit;
	GSKFeederThread* _runLoopFeeder;
	NSCondition* _feederCondition;
	CFRunLoopSourceRef _runLoopSource;
	unsigned long _bytesPerSample;
	id<GSKAudioCaptureDelegate> _delegate;
	GSKAudioLog* _log;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<GSKAudioCaptureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned sampleRate; 
@property (nonatomic,readonly) unsigned long bytesPerSample;                           //@synthesize bytesPerSample=_bytesPerSample - In the implementation block
@property (nonatomic,retain) GSKAudioLog * log;                                        //@synthesize log=_log - In the implementation block
-(void)initializeRunLoopFeeder;
-(char)createAudioUnit;
-(void)stopRunLoopFeeder;
-(void)receivedInterruptionNotification:(id)arg1 ;
-(void)endLog;
-(void)shutDownAudioUnit;
-(void)feedRunLoop;
-(void)didFailToStart;
-(long)audioUnitCallbackWithActionFlags:(unsigned long*)arg1 timeStamp:(const AudioTimeStamp*)arg2 busNumber:(unsigned long)arg3 numberFrames:(unsigned long)arg4 bufferList:(AudioBufferList*)arg5 ;
-(void)runLoopCallback;
-(void)abortCapture;
-(id)initWithSampleRate:(unsigned)arg1 ;
-(unsigned long)bytesPerSample;
-(void)handleRecordedData:(id)arg1 ;
-(void)captureDidStop;
-(void)startCapture;
-(void)setDelegate:(id<GSKAudioCaptureDelegate>)arg1 ;
-(void)dealloc;
-(id<GSKAudioCaptureDelegate>)delegate;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(GSKAudioLog *)log;
-(unsigned)sampleRate;
-(void)stopCapture;
-(void)setLog:(GSKAudioLog *)arg1 ;
@end

