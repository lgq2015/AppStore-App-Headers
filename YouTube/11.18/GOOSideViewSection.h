/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GOOSideViewSection.h>
@class NSString;


@protocol GOOSideViewSection <NSObject>
@property (nonatomic,copy,readonly) NSString * title; 
@required
-(NSString *)title;

@end


@class NSString;

@interface GOOSideViewSection : NSObject <GOOSideViewSection> {

	NSString* _title;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sideViewSectionWithTitle:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 ;
@end

