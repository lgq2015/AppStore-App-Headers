/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGPlainTableViewCell.h>

@class UILabel;

@interface IGUserBioInfoCell : IGPlainTableViewCell {

	UILabel* _bioInfoLabel;

}

@property (nonatomic,retain) UILabel * bioInfoLabel;              //@synthesize bioInfoLabel=_bioInfoLabel - In the implementation block
+(id)validateString:(id)arg1 ;
+(id)styledStringForFullName:(id)arg1 bioInfo:(id)arg2 forPK:(id)arg3 withWidth:(float)arg4 ;
-(UILabel *)bioInfoLabel;
-(float)setUserFullName:(id)arg1 bioInfo:(id)arg2 forPK:(id)arg3 withWidth:(float)arg4 ;
-(void)setBioInfoLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

