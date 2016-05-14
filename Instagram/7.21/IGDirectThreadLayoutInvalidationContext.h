/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface IGDirectThreadLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	char _igInvalidateCollectionViewContentSize;
	char _igInvalidateAttributes;
	char _igInvalidateEverything;

}

@property (assign,nonatomic) char igInvalidateCollectionViewContentSize;              //@synthesize igInvalidateCollectionViewContentSize=_igInvalidateCollectionViewContentSize - In the implementation block
@property (assign,nonatomic) char igInvalidateAttributes;                             //@synthesize igInvalidateAttributes=_igInvalidateAttributes - In the implementation block
@property (assign,nonatomic) char igInvalidateEverything;                             //@synthesize igInvalidateEverything=_igInvalidateEverything - In the implementation block
-(void)setIgInvalidateEverything:(char)arg1 ;
-(void)mergeWithInvalidationContext:(id)arg1 ;
-(char)igInvalidateAttributes;
-(char)igInvalidateCollectionViewContentSize;
-(void)setIgInvalidateCollectionViewContentSize:(char)arg1 ;
-(char)igInvalidateEverything;
-(void)setIgInvalidateAttributes:(char)arg1 ;
-(id)description;
@end

