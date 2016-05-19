/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTUserSpecificDataStore.h>

@class GIMMe;

@interface YTOfflinePlaylistStore : YTUserSpecificDataStore {

	GIMMe* _gimme;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;              //@synthesize gimme=_gimme - In the implementation block
+(id)fetchRequestForPredicate:(id)arg1 context:(id)arg2 ;
+(id)fetchRequestForUserID:(id)arg1 context:(id)arg2 ;
+(id)predicateForUserID:(id)arg1 ;
+(id)sortDescriptorForDateAdded;
-(GIMMe *)gimme;
-(void)setGimme:(GIMMe *)arg1 ;
-(void)fetchPlaylistWithID:(id)arg1 responseBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)fetchPlaylistsWithOffset:(unsigned)arg1 fetchLimit:(unsigned)arg2 onlyComplete:(char)arg3 responseBlock:(/*^block*/id)arg4 errorBlock:(/*^block*/id)arg5 ;
-(void)deletePlaylistWithID:(id)arg1 responseBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)fetchHasOfflinePlaylistsOnDeviceWithResponseBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)deleteAllWithResponseBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)deletePlaylistsForUserID:(id)arg1 responseBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)getAllUserIDsWithResponseBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(id)offlinePlaylistEntityWithID:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(int)defaultOfflineVideoQuality;
-(void)fetchPlaylistsWithOffset:(unsigned)arg1 fetchLimit:(unsigned)arg2 onlyComplete:(char)arg3 forCurrentUser:(char)arg4 responseBlock:(/*^block*/id)arg5 errorBlock:(/*^block*/id)arg6 ;
-(id)predicateForPlaylistID:(id)arg1 ;
-(id)fetchRequestForID:(id)arg1 inContext:(id)arg2 ;
-(void)saveMetadataWithPlaylist:(id)arg1 responseBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)saveMetadataWithOfflinePlaylistData:(id)arg1 maximumDownloadQuality:(int)arg2 clickTrackingParams:(id)arg3 responseBlock:(/*^block*/id)arg4 errorBlock:(/*^block*/id)arg5 ;
-(void)updateDateLastSync:(id)arg1 playlistID:(id)arg2 responseBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(void)saveVideoListWithPlaylist:(id)arg1 videoList:(id)arg2 maximumDownloadQuality:(int)arg3 responseBlock:(/*^block*/id)arg4 errorBlock:(/*^block*/id)arg5 ;
-(void)saveVideoListWithOfflinePlaylistData:(id)arg1 maximumDownloadQuality:(int)arg2 clickTrackingParams:(id)arg3 allowNewVideoDownload:(char)arg4 responseBlock:(/*^block*/id)arg5 errorBlock:(/*^block*/id)arg6 ;
-(void)fetchPlaylistStatusWithID:(id)arg1 responseBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)fetchPlaylistCountWithResponseBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)fetchVideoIDsWithPlaylistID:(id)arg1 responseBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)fetchVideoIDsNeedingSyncApprovalWithPlaylistID:(id)arg1 responseBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)fetchOfflinePlaylistNeedingInnerTubeMigrationWithResponseBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)migrateOfflinePlaylistDataForPlaylistId:(id)arg1 responseBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)searchPlaylistsWithString:(id)arg1 searchTypes:(int)arg2 responseBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(id)init;
@end

