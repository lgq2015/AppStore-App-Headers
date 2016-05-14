/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface NICollectionViewModelSection : NSObject {

	NSString* _headerTitle;
	NSString* _footerTitle;
	NSArray* _rows;

}

@property (nonatomic,copy) NSString * headerTitle;              //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy) NSString * footerTitle;              //@synthesize footerTitle=_footerTitle - In the implementation block
@property (nonatomic,retain) NSArray * rows;                    //@synthesize rows=_rows - In the implementation block
+(id)section;
-(id)mutableRows;
-(NSArray *)rows;
-(void)setRows:(NSArray *)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(NSString *)footerTitle;
-(void)setFooterTitle:(NSString *)arg1 ;
@end

