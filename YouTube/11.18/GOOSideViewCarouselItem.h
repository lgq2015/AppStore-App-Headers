/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GOOSideViewProfile;
@class UILabel, GOOSideViewAvatarView, GOOSideViewAvatarBackgroundView;

@interface GOOSideViewCarouselItem : NSObject {

	UILabel* _profileLabel;
	UILabel* _nameLabel;
	GOOSideViewAvatarView* _avatarView;
	GOOSideViewAvatarBackgroundView* _backgroundView;
	UILabel* _notificationLabel;
	char _enabled;
	char _hidden;
	id<GOOSideViewProfile> _profile;
	int _location;
	int _carouselProfileCount;

}

@property (nonatomic,readonly) id<GOOSideViewProfile> profile;                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) UILabel * profileLabel; 
@property (nonatomic,readonly) UILabel * nameLabel; 
@property (nonatomic,readonly) GOOSideViewAvatarView * avatarView; 
@property (nonatomic,readonly) GOOSideViewAvatarBackgroundView * backgroundView; 
@property (nonatomic,readonly) UILabel * notificationLabel; 
@property (assign,nonatomic) int location;                                                    //@synthesize location=_location - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHidden,nonatomic) char hidden;                                     //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) int carouselProfileCount;                                        //@synthesize carouselProfileCount=_carouselProfileCount - In the implementation block
-(void)removeViewsFromSuperviews;
-(UILabel *)profileLabel;
-(UILabel *)notificationLabel;
-(int)carouselProfileCount;
-(void)setCarouselProfileCount:(int)arg1 ;
-(id<GOOSideViewProfile>)profile;
-(UILabel *)nameLabel;
-(void)dealloc;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(id)init;
-(id)description;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(GOOSideViewAvatarBackgroundView *)backgroundView;
-(int)location;
-(void)setLocation:(int)arg1 ;
-(GOOSideViewAvatarView *)avatarView;
-(id)initWithProfile:(id)arg1 ;
@end

