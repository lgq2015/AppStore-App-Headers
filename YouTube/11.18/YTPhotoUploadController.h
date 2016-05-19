/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol YTIdentityProvider;
@class YTImageService, YTPhotoUploadService, YTChannelEditService, NSHashTable, GIMMe;

@interface YTPhotoUploadController : NSObject {

	id<YTIdentityProvider> _identityProvider;
	YTImageService* _imageService;
	YTPhotoUploadService* _photoUploadService;
	YTChannelEditService* _channelEditService;
	NSHashTable* _observers;
	GIMMe* _gimme;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;              //@synthesize gimme=_gimme - In the implementation block
-(GIMMe *)gimme;
-(void)setGimme:(GIMMe *)arg1 ;
-(void)addPhotoUploadObserver:(id)arg1 ;
-(void)notifyOnBeginAvatarPhotoUpload;
-(id)circularImageFromImage:(id)arg1 ;
-(void)notifyEndAvatarPhotoUploadWithStatus:(int)arg1 image:(id)arg2 ;
-(void)notifyOnBeginBannerPhotoUpload;
-(void)issueEditChannelBannerRequestWithURL:(id)arg1 userID:(id)arg2 image:(id)arg3 invalidationURLs:(id)arg4 ;
-(void)notifyEndBannerPhotoUploadWithStatus:(int)arg1 image:(id)arg2 ;
-(void)uploadAvatarImage:(id)arg1 albumID:(id)arg2 invalidationThumbnails:(id)arg3 ;
-(void)uploadBannerImage:(id)arg1 albumID:(id)arg2 invalidationURLs:(id)arg3 ;
-(void)removePhotoUploadObserver:(id)arg1 ;
-(id)init;
-(id)userID;
@end

