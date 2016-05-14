/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol IGAlbumCreationAlbumSelectorCellDelegate;
@class IGTapButton;

@interface IGAlbumCreationAlbumSelectorCell : UITableViewCell {

	char _showInfoButton;
	id<IGAlbumCreationAlbumSelectorCellDelegate> _delegate;
	IGTapButton* _infoButton;

}

@property (nonatomic,retain) IGTapButton * infoButton;                                                  //@synthesize infoButton=_infoButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCreationAlbumSelectorCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showInfoButton;                                                       //@synthesize showInfoButton=_showInfoButton - In the implementation block
-(void)infoButtonTapped;
-(void)setDelegate:(id<IGAlbumCreationAlbumSelectorCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<IGAlbumCreationAlbumSelectorCellDelegate>)delegate;
-(void)prepareForReuse;
-(IGTapButton *)infoButton;
-(void)setInfoButton:(IGTapButton *)arg1 ;
-(char)showInfoButton;
-(void)setShowInfoButton:(char)arg1 ;
@end

