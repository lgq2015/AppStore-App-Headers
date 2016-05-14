/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class WAGroupMember, WAProfilePictureThumbnailView, NSString, WAContactNameLabel, UILabel, UIImageView;

@interface ContactTableViewCell : UITableViewCell {

	WAGroupMember* _groupMember;
	WAProfilePictureThumbnailView* _imageViewContact;
	char _alwaysShowsPicture;
	char _displaysWhatsAppContact;
	char _useItalicsForStatusText;
	NSString* _jid;
	WAContactNameLabel* _nameLabel;
	UILabel* _statusLabel;
	UILabel* _detailLabel;
	UILabel* _pushNameLabel;
	float _accessoryViewInset;

}

@property (nonatomic,copy) NSString * jid;                                  //@synthesize jid=_jid - In the implementation block
@property (nonatomic,readonly) UIImageView * imageViewContact; 
@property (nonatomic,readonly) WAContactNameLabel * nameLabel;              //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * statusLabel;                       //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                       //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) UILabel * pushNameLabel;                     //@synthesize pushNameLabel=_pushNameLabel - In the implementation block
@property (assign,nonatomic) char alwaysShowsPicture;                       //@synthesize alwaysShowsPicture=_alwaysShowsPicture - In the implementation block
@property (assign,nonatomic) char displaysWhatsAppContact;                  //@synthesize displaysWhatsAppContact=_displaysWhatsAppContact - In the implementation block
@property (assign,nonatomic) char useItalicsForStatusText;                  //@synthesize useItalicsForStatusText=_useItalicsForStatusText - In the implementation block
@property (assign,nonatomic) float accessoryViewInset;                      //@synthesize accessoryViewInset=_accessoryViewInset - In the implementation block
-(NSString *)jid;
-(void)setJid:(NSString *)arg1 ;
-(void)reloadFonts;
-(void)setAlwaysShowsPicture:(char)arg1 ;
-(void)configureWithWAFavorite:(id)arg1 ;
-(void)setDisplaysWhatsAppContact:(char)arg1 ;
-(void)setUseItalicsForStatusText:(char)arg1 ;
-(float)accessoryViewInset;
-(char)alwaysShowsPicture;
-(char)useItalicsForStatusText;
-(char)displaysWhatsAppContact;
-(UILabel *)pushNameLabel;
-(UIImageView *)imageViewContact;
-(void)configureWithGroupMember:(id)arg1 ;
-(void)configureWithContactInfo:(id)arg1 ;
-(void)setAccessoryViewInset:(float)arg1 ;
-(WAContactNameLabel *)nameLabel;
-(UILabel *)detailLabel;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(id)accessibilityLabel;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(void)willTransitionToState:(unsigned)arg1 ;
-(void)didTransitionToState:(unsigned)arg1 ;
-(id)accessibilityValue;
-(char)isAccessibilityElement;
-(UILabel *)statusLabel;
@end

