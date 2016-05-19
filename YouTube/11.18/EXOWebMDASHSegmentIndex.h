/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/EXODASHSegmentIndex.h>

@class EXOFormat, NSURL, EXOWebMDASHInitializationChunk, NSString;

@interface EXOWebMDASHSegmentIndex : NSObject <EXODASHSegmentIndex> {

	EXOFormat* _format;
	NSURL* _baseURL;
	vector<EXOWebMCue, std::__1::allocator<EXOWebMCue> >* _cues;
	EXOWebMDASHInitializationChunk* _initializationChunk;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_YT44 duration; 
-(id)mediaChunkForTime:(SCD_Struct_YT44)arg1 ;
-(char)isFinalMediaChunk:(id)arg1 ;
-(id)initWithFormat:(id)arg1 baseURL:(id)arg2 cues:(vector<EXOWebMCue, std::__1::allocator<EXOWebMCue> >*)arg3 initializationChunk:(id)arg4 ;
-(id)init;
-(SCD_Struct_YT44)duration;
@end

