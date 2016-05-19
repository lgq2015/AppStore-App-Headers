/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIScrollView.h>
#import <YouTube/GOOMultilineTextFieldDelegate.h>
#import <YouTube/YTEditMetadataViewFields.h>

@class YTEditMetadataAccountButton, YTVideoThumbnailView, GOOMultilineTextField, YTEditMetadataPrivacyButton, UIButton, GOOTokenField, YTLabel, GOOTextField, NSString;

@interface YTEditMetadataFullView : UIScrollView <GOOMultilineTextFieldDelegate, YTEditMetadataViewFields> {

	YTEditMetadataAccountButton* _accountButton;
	YTVideoThumbnailView* _videoThumbnailView;
	GOOTextField* _titleTextField;
	GOOMultilineTextField* _descriptionTextField;
	GOOTokenField* _tagsField;
	YTLabel* _tagsLabel;
	YTEditMetadataPrivacyButton* _privacyButton;

}

@property (nonatomic,retain) YTEditMetadataAccountButton * accountButton;               //@synthesize accountButton=_accountButton - In the implementation block
@property (nonatomic,retain) YTVideoThumbnailView * videoThumbnailView;                 //@synthesize videoThumbnailView=_videoThumbnailView - In the implementation block
@property (nonatomic,retain) GOOTextField * titleTextField;                             //@synthesize titleTextField=_titleTextField - In the implementation block
@property (nonatomic,retain) GOOMultilineTextField * descriptionTextField;              //@synthesize descriptionTextField=_descriptionTextField - In the implementation block
@property (nonatomic,retain) GOOTokenField * tagsField;                                 //@synthesize tagsField=_tagsField - In the implementation block
@property (nonatomic,retain) YTLabel * tagsLabel;                                       //@synthesize tagsLabel=_tagsLabel - In the implementation block
@property (nonatomic,retain) YTEditMetadataPrivacyButton * privacyButton;               //@synthesize privacyButton=_privacyButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIButton * advancedDetailsButton; 
-(YTEditMetadataPrivacyButton *)privacyButton;
-(GOOMultilineTextField *)descriptionTextField;
-(void)textFieldContentSizeChanged:(id)arg1 size:(CGSize)arg2 ;
-(void)setDescriptionTextField:(GOOMultilineTextField *)arg1 ;
-(void)applyStyleToTextField:(id)arg1 ;
-(void)setPrivacyButton:(YTEditMetadataPrivacyButton *)arg1 ;
-(GOOTokenField *)tagsField;
-(YTLabel *)tagsLabel;
-(void)setAccountButton:(YTEditMetadataAccountButton *)arg1 ;
-(GOOTextField *)titleTextField;
-(void)setTitleTextField:(GOOTextField *)arg1 ;
-(UIButton *)advancedDetailsButton;
-(void)setVideoThumbnailView:(YTVideoThumbnailView *)arg1 ;
-(void)setTagsField:(GOOTokenField *)arg1 ;
-(void)setTagsLabel:(YTLabel *)arg1 ;
-(YTVideoThumbnailView *)videoThumbnailView;
-(YTEditMetadataAccountButton *)accountButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

