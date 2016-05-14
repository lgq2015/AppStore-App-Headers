/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGExplorePhotoMapDataSourceDelegate;
#import <Instagram/Instagram-Structs.h>
@interface IGExplorePhotoMapDataSource : NSObject {

	id<IGExplorePhotoMapDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGExplorePhotoMapDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startNearbyLocationRequestWithRegion:(SCD_Struct_IG84)arg1 ;
-(void)startRequestWithRegion:(SCD_Struct_IG84)arg1 isRefresh:(char)arg2 ;
-(void)setDelegate:(id<IGExplorePhotoMapDataSourceDelegate>)arg1 ;
-(id<IGExplorePhotoMapDataSourceDelegate>)delegate;
@end

