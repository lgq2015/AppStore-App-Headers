/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <YouTube/YTThumbnailMapping.h>

@class UIView, UILabel, YTFormattedStringLabel, NSMutableArray, YTImageView, YTThumbnailMapping, UIActivityIndicatorView, GOOTextField, NSString;

@interface YTChannelCreationFormResponseView : UIView <YTThumbnailMapping> {

	UIView* _profileBackground;
	UILabel* _profileNameLabel;
	UILabel* _profileDescriptionLabel;
	YTFormattedStringLabel* _errorLabel;
	NSMutableArray* _descriptionLabels;
	YTImageView* _profileImageView;
	YTImageView* _birthdayImageView;
	YTThumbnailMapping* _profileThumbnailMapping;
	NSMutableArray* _buttons;
	UIActivityIndicatorView* _spinner;
	GOOTextField* _firstNameTextField;
	GOOTextField* _lastNameTextField;
	GOOTextField* _birthdayTextField;
	GOOTextField* _genderTextField;

}

@property (nonatomic,retain) GOOTextField * firstNameTextField;              //@synthesize firstNameTextField=_firstNameTextField - In the implementation block
@property (nonatomic,retain) GOOTextField * lastNameTextField;               //@synthesize lastNameTextField=_lastNameTextField - In the implementation block
@property (nonatomic,retain) GOOTextField * birthdayTextField;               //@synthesize birthdayTextField=_birthdayTextField - In the implementation block
@property (nonatomic,retain) GOOTextField * genderTextField;                 //@synthesize genderTextField=_genderTextField - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)thumbnailMappings;
-(void)setInputField:(id)arg1 withText:(id)arg2 label:(id)arg3 accessibilityID:(id)arg4 enabled:(char)arg5 ;
-(void)setShowNameInputs:(char)arg1 ;
-(void)setShowBirthdayInput:(char)arg1 ;
-(void)setShowGenderInput:(char)arg1 ;
-(void)setProfilePhoto:(id)arg1 ;
-(void)addDescription:(id)arg1 delegate:(id)arg2 ;
-(void)setInputField:(id)arg1 withText:(id)arg2 ;
-(void)addButtonWithTitle:(id)arg1 accessibilityID:(id)arg2 tapHandlerBlock:(/*^block*/id)arg3 ;
-(void)waitingForResponse:(char)arg1 ;
-(GOOTextField *)firstNameTextField;
-(void)setFirstNameTextField:(GOOTextField *)arg1 ;
-(GOOTextField *)lastNameTextField;
-(void)setLastNameTextField:(GOOTextField *)arg1 ;
-(GOOTextField *)birthdayTextField;
-(void)setBirthdayTextField:(GOOTextField *)arg1 ;
-(GOOTextField *)genderTextField;
-(void)setGenderTextField:(GOOTextField *)arg1 ;
-(void)setProfileName:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setErrorMessage:(id)arg1 ;
-(void)setProfileDescription:(id)arg1 ;
@end

