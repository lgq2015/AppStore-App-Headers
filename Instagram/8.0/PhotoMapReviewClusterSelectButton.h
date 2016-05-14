/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class IGQuadtreeCluster, IGPhotoMapEditManager;

@interface PhotoMapReviewClusterSelectButton : UIButton {

	IGQuadtreeCluster* _cluster;
	IGPhotoMapEditManager* _editManager;

}

@property (nonatomic,retain) IGQuadtreeCluster * cluster;                      //@synthesize cluster=_cluster - In the implementation block
@property (nonatomic,retain) IGPhotoMapEditManager * editManager;              //@synthesize editManager=_editManager - In the implementation block
+(id)buttonWithType:(int)arg1 cluster:(id)arg2 editManager:(id)arg3 ;
-(IGPhotoMapEditManager *)editManager;
-(void)setEditManager:(IGPhotoMapEditManager *)arg1 ;
-(void)onClusterSelectionChanged;
-(void)dealloc;
-(void)setCluster:(IGQuadtreeCluster *)arg1 ;
-(IGQuadtreeCluster *)cluster;
@end

