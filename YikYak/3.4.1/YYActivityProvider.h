/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityItemProvider.h>

@class NSString;

@interface YYActivityProvider : UIActivityItemProvider {

	char _isYak;
	NSString* _shareYikYakCopy;

}

@property (assign,nonatomic) char isYak;                              //@synthesize isYak=_isYak - In the implementation block
@property (nonatomic,retain) NSString * shareYikYakCopy;              //@synthesize shareYikYakCopy=_shareYikYakCopy - In the implementation block
-(void)setShareYikYakCopy:(NSString *)arg1 ;
-(char)isYak;
-(NSString *)shareYikYakCopy;
-(void)setIsYak:(char)arg1 ;
-(id)init;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
@end

