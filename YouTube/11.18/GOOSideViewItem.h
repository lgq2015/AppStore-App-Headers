/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GOOSideViewItem.h>
@class NSString, UIImage, NSNumber, UIColor, UIView, GOOSideViewItemLayoutSource;


@protocol GOOSideViewItem <NSObject>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) UIImage * icon; 
@property (nonatomic,readonly) NSNumber * lineBreakMode; 
@property (nonatomic,readonly) UIImage * selectedIcon; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) UIColor * selectedTextColor; 
@property (nonatomic,readonly) UIView * accessoryView; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) UIView * backgroundView; 
@property (nonatomic,readonly) UIView * selectedBackgroundView; 
@property (nonatomic,readonly) GOOSideViewItemLayoutSource * layoutSource; 
@property (nonatomic,copy,readonly) NSString * accessibilityLabel; 
@optional
-(UIImage *)selectedIcon;
-(GOOSideViewItemLayoutSource *)layoutSource;
-(NSString *)accessibilityLabel;
-(UIView *)backgroundView;
-(NSString *)subtitle;
-(UIColor *)textColor;
-(NSNumber *)lineBreakMode;
-(UIColor *)selectedTextColor;
-(UIView *)selectedBackgroundView;
-(UIView *)accessoryView;

@required
-(NSString *)title;
-(UIImage *)icon;

@end


@class NSString, UIImage, NSNumber, UIColor, UIView, GOOSideViewItemLayoutSource;

@interface GOOSideViewItem : NSObject <GOOSideViewItem> {

	NSString* _title;
	UIImage* _icon;
	NSNumber* _lineBreakMode;
	UIColor* _textColor;
	UIImage* _selectedIcon;
	UIColor* _selectedTextColor;
	UIView* _accessoryView;
	NSString* _subtitle;
	UIView* _backgroundView;
	UIView* _selectedBackgroundView;
	GOOSideViewItemLayoutSource* _layoutSource;
	NSString* _accessibilityLabel;

}

@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                          //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSNumber * lineBreakMode;                                //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                     //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIImage * selectedIcon;                                  //@synthesize selectedIcon=_selectedIcon - In the implementation block
@property (nonatomic,retain) UIColor * selectedTextColor;                             //@synthesize selectedTextColor=_selectedTextColor - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                  //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * selectedBackgroundView;                         //@synthesize selectedBackgroundView=_selectedBackgroundView - In the implementation block
@property (nonatomic,retain) GOOSideViewItemLayoutSource * layoutSource;              //@synthesize layoutSource=_layoutSource - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                             //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layoutSourceForItem:(id)arg1 ;
+(id)sideViewItemWithTitle:(id)arg1 icon:(id)arg2 ;
+(id)sideViewItemWithTitle:(id)arg1 icon:(id)arg2 selectedIcon:(id)arg3 ;
-(UIImage *)selectedIcon;
-(GOOSideViewItemLayoutSource *)layoutSource;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 selectedIcon:(id)arg3 ;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 ;
-(void)setLayoutSource:(GOOSideViewItemLayoutSource *)arg1 ;
-(void)setSelectedIcon:(UIImage *)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setLineBreakMode:(NSNumber *)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(NSString *)subtitle;
-(UIColor *)textColor;
-(void)setSelectedBackgroundView:(UIView *)arg1 ;
-(NSNumber *)lineBreakMode;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setSelectedTextColor:(UIColor *)arg1 ;
-(UIColor *)selectedTextColor;
-(UIView *)selectedBackgroundView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(UIImage *)icon;
@end

