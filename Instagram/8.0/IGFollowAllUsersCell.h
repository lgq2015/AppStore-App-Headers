/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGFollowAllUsersCellDelegate;
@class IGFollowAllUsersView;

@interface IGFollowAllUsersCell : UICollectionViewCell {

	id<IGFollowAllUsersCellDelegate> _delegate;
	IGFollowAllUsersView* _followAllUsersView;

}

@property (nonatomic,readonly) IGFollowAllUsersView * followAllUsersView;                   //@synthesize followAllUsersView=_followAllUsersView - In the implementation block
@property (assign,nonatomic) unsigned userCount; 
@property (assign,nonatomic) char followAllButtonEnabled; 
@property (assign,nonatomic,__weak) id<IGFollowAllUsersCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(float)preferredHeight;
+(Class)viewClass;
-(void)setUserCount:(unsigned)arg1 ;
-(char)followAllButtonEnabled;
-(void)setFollowAllButtonEnabled:(char)arg1 ;
-(void)onFollowAllButtonTapped;
-(IGFollowAllUsersView *)followAllUsersView;
-(unsigned)userCount;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFollowAllUsersCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFollowAllUsersCellDelegate>)delegate;
@end

