/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGCollectionViewLayoutApplier : NSObject {

	char _didApply;
	/*^block*/id _applyLayoutBlock;

}

@property (nonatomic,copy) id applyLayoutBlock;              //@synthesize applyLayoutBlock=_applyLayoutBlock - In the implementation block
@property (assign,nonatomic) char didApply;                  //@synthesize didApply=_didApply - In the implementation block
-(void)applyChangedLayoutState;
-(id)applyLayoutBlock;
-(void)setApplyLayoutBlock:(id)arg1 ;
-(char)didApply;
-(void)setDidApply:(char)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

