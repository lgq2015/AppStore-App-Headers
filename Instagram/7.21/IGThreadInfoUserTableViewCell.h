/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGTableViewCell.h>

@class IGUser, IGProfilePictureImageView;

@interface IGThreadInfoUserTableViewCell : IGTableViewCell {

	IGUser* _user;
	IGProfilePictureImageView* _profilePicture;

}

@property (nonatomic,retain) IGUser * user;                                           //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePicture;              //@synthesize profilePicture=_profilePicture - In the implementation block
+(float)cellHeight;
-(IGProfilePictureImageView *)profilePicture;
-(void)setProfilePicture:(IGProfilePictureImageView *)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end

