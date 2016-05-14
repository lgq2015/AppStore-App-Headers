/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAssetExportSession, NSTimer, NSURL, UIImage, NSString;

@interface WAAudioTrack : NSObject {

	/*^block*/id _exportCompletionHandler;
	/*^block*/id _exportProgressHandler;
	AVAssetExportSession* _exportSession;
	NSTimer* _progressTimer;
	float _lastProgressValue;
	NSURL* _assetURL;
	UIImage* _artwork;
	NSString* _title;
	NSString* _authorName;
	NSString* _collectionName;
	NSString* _outputFileType;
	NSURL* _outputMediaURLWithoutFileExtension;
	NSURL* _outputMediaURL;
	double _duration;

}

@property (nonatomic,readonly) NSURL * assetURL;                                      //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,readonly) UIImage * artwork;                                     //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * authorName;                                 //@synthesize authorName=_authorName - In the implementation block
@property (nonatomic,readonly) NSString * collectionName;                             //@synthesize collectionName=_collectionName - In the implementation block
@property (nonatomic,readonly) double duration;                                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSString * outputFileType;                             //@synthesize outputFileType=_outputFileType - In the implementation block
@property (nonatomic,retain) NSURL * outputMediaURLWithoutFileExtension;              //@synthesize outputMediaURLWithoutFileExtension=_outputMediaURLWithoutFileExtension - In the implementation block
@property (nonatomic,readonly) NSURL * outputMediaURL;                                //@synthesize outputMediaURL=_outputMediaURL - In the implementation block
+(char)isMediaItemShareable:(id)arg1 error:(out id*)arg2 ;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)outputMediaURLWithoutFileExtension;
-(void)performExport;
-(NSURL *)outputMediaURL;
-(void)handleExportCompletionWithSuccessfulOutcome:(char)arg1 ;
-(void)transferToMediaDirectoryWithProgressHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOutputMediaURLWithoutFileExtension:(NSURL *)arg1 ;
-(NSString *)outputFileType;
-(id)initWithMediaItem:(id)arg1 ;
-(NSURL *)assetURL;
-(void)startProgressTimer;
-(double)duration;
-(NSString *)title;
-(void)updateProgress:(id)arg1 ;
-(UIImage *)artwork;
-(NSString *)authorName;
-(void)stopProgressTimer;
-(NSString *)collectionName;
@end

