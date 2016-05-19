/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTUploadInnerTubeCancellationControllerObserver.h>
#import <YouTube/YTUploadInnerTubeCommitVideoControllerObserver.h>
#import <YouTube/YTUploadInnerTubeCompletionControllerObserver.h>
#import <YouTube/YTUploadInnerTubeCreateDraftVideoControllerObserver.h>
#import <YouTube/YTUploadInnerTubeFeedbackControllerObserver.h>
#import <YouTube/YTUploadInnerTubeSaveMetadataControllerObserver.h>
#import <YouTube/YTUploadInnerTubeTaskControllerObserver.h>
#import <YouTube/YTUploadInnerTubeTranscodeControllerObserver.h>
#import <YouTube/YTUploadInnerTubeTransferControllerObserver.h>

@class YTUploadInnerTubeTaskController, YTUploadInnerTubeTranscodeController, YTUploadInnerTubeTransferController, YTUploadInnerTubeCreateDraftVideoController, YTUploadInnerTubeFeedbackController, YTUploadInnerTubeSaveMetadataController, YTUploadInnerTubeCommitVideoController, YTUploadInnerTubeCompletionController, YTUploadInnerTubeCancellationController, NSHashTable, NSString;

@interface YTUploadInnerTubeCoordinator : NSObject <YTUploadInnerTubeCancellationControllerObserver, YTUploadInnerTubeCommitVideoControllerObserver, YTUploadInnerTubeCompletionControllerObserver, YTUploadInnerTubeCreateDraftVideoControllerObserver, YTUploadInnerTubeFeedbackControllerObserver, YTUploadInnerTubeSaveMetadataControllerObserver, YTUploadInnerTubeTaskControllerObserver, YTUploadInnerTubeTranscodeControllerObserver, YTUploadInnerTubeTransferControllerObserver> {

	YTUploadInnerTubeTaskController* _taskController;
	YTUploadInnerTubeTranscodeController* _transcodeController;
	YTUploadInnerTubeTransferController* _transferController;
	YTUploadInnerTubeCreateDraftVideoController* _createDraftController;
	YTUploadInnerTubeFeedbackController* _feedbackController;
	YTUploadInnerTubeSaveMetadataController* _saveMetadataController;
	YTUploadInnerTubeCommitVideoController* _commitVideoController;
	YTUploadInnerTubeCompletionController* _completionController;
	YTUploadInnerTubeCancellationController* _cancellationController;
	NSHashTable* _observers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)uploadProcessingDidCompleteWithAssetURL:(id)arg1 renderer:(id)arg2 ;
-(void)uploadProcessingDidErrorWithAssetURL:(id)arg1 renderer:(id)arg2 ;
-(void)didCompleteUploadForAssetURL:(id)arg1 ;
-(void)didCreateTaskWithAssetURL:(id)arg1 ;
-(void)didEnterMetadataForTaskWithAssetURL:(id)arg1 ;
-(void)didRetryTaskWithAssetURL:(id)arg1 ;
-(void)didBeginCancellationWithAssetURL:(id)arg1 ;
-(void)didRetrieveVideoIdForTaskWithAssetURL:(id)arg1 ;
-(void)didFailVideoIDRegistrationForTaskWithAssetURL:(id)arg1 ;
-(void)didCompleteTranscodeWithAssetURL:(id)arg1 ;
-(void)didRetrieveResourceIDForAssetURL:(id)arg1 ;
-(void)didFinishTransferForAssetURL:(id)arg1 ;
-(void)didFailTransferForAssetURL:(id)arg1 ;
-(void)didSaveMetadataWithAssetURL:(id)arg1 ;
-(void)didFinishCancellationWithAssetURL:(id)arg1 ;
-(void)didFailCancellationWithAssetURL:(id)arg1 ;
-(void)didCommitVideoWithAssetURL:(id)arg1 ;
-(void)didFailToCommitVideoWithAssetURL:(id)arg1 ;
-(void)notifyDidChangeStateForAssetURL:(id)arg1 ;
-(void)notifyDidFailUploadForAssetURL:(id)arg1 ;
-(void)didCreateDraftVideoWithAssetURL:(id)arg1 ;
-(void)didFailToCreateDraftVideoWithAssetURL:(id)arg1 error:(id)arg2 ;
-(void)didFailToSaveMetadataWithAssetURL:(id)arg1 ;
-(id)initWithTaskController:(id)arg1 transcodeController:(id)arg2 transferController:(id)arg3 createDraftVideoController:(id)arg4 feedbackController:(id)arg5 saveMetadataController:(id)arg6 commitVideoController:(id)arg7 completionController:(id)arg8 cancellationController:(id)arg9 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
@end

