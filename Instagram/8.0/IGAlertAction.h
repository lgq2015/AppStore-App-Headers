/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAccessibilityIdentification.h>

@class NSString, UIImage;

@interface IGAlertAction : NSObject <UIAccessibilityIdentification> {

	NSString* accessibilityIdentifier;
	NSString* _title;
	UIImage* _image;
	int _style;
	/*^block*/id _handler;

}

@property (nonatomic,copy,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * image;                             //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) int style;                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) id handler;                             //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * accessibilityIdentifier; 
-(id)initWithTitle:(id)arg1 image:(id)arg2 style:(int)arg3 handler:(/*^block*/id)arg4 ;
-(NSString *)title;
-(UIImage *)image;
-(int)style;
-(NSString *)accessibilityIdentifier;
-(id)handler;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
@end

