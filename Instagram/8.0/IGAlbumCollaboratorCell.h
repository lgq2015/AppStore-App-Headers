/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGProfilePictureImageView, UIImageView, UILabel, NSString;

@interface IGAlbumCollaboratorCell : UICollectionViewCell {

	char _isPending;
	char _isAddCollaboratorCell;
	IGProfilePictureImageView* _profileImageView;
	UIImageView* _plusImageView;
	UILabel* _primaryTextLabel;
	UILabel* _secondaryTextLabel;

}

@property (nonatomic,retain) UIImageView * plusImageView;                                 //@synthesize plusImageView=_plusImageView - In the implementation block
@property (nonatomic,retain) UILabel * primaryTextLabel;                                  //@synthesize primaryTextLabel=_primaryTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryTextLabel;                                //@synthesize secondaryTextLabel=_secondaryTextLabel - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,retain) NSString * primaryText; 
@property (nonatomic,retain) NSString * secondaryText; 
@property (assign,nonatomic) char isPending;                                              //@synthesize isPending=_isPending - In the implementation block
@property (assign,nonatomic) char isAddCollaboratorCell;                                  //@synthesize isAddCollaboratorCell=_isAddCollaboratorCell - In the implementation block
-(void)setIsAddCollaboratorCell:(char)arg1 ;
-(char)isAddCollaboratorCell;
-(UIImageView *)plusImageView;
-(void)setPlusImageView:(UIImageView *)arg1 ;
-(UILabel *)primaryTextLabel;
-(void)setPrimaryTextLabel:(UILabel *)arg1 ;
-(UILabel *)secondaryTextLabel;
-(void)setSecondaryTextLabel:(UILabel *)arg1 ;
-(IGProfilePictureImageView *)profileImageView;
-(void)setIsPending:(char)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)primaryText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(char)isPending;
-(NSString *)secondaryText;
@end

