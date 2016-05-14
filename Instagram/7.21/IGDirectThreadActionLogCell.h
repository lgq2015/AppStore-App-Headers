/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>

@class IGCoreTextView;

@interface IGDirectThreadActionLogCell : IGDirectContentCell {

	IGCoreTextView* _titleTextLabel;

}

@property (nonatomic,retain) IGCoreTextView * titleTextLabel;              //@synthesize titleTextLabel=_titleTextLabel - In the implementation block
+(id)styledTitleStringForActionLog:(id)arg1 ;
+(float)heightForCellWithActionLog:(id)arg1 withWidth:(float)arg2 ;
-(void)setShowUsername:(char)arg1 ;
-(void)setHideProfilePicture:(char)arg1 ;
-(void)setTitleTextLabel:(IGCoreTextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setContent:(id)arg1 ;
-(IGCoreTextView *)titleTextLabel;
@end

