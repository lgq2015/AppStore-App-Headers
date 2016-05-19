/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NIObjectActions : NSObject {

	/*^block*/id _tapAction;
	/*^block*/id _detailAction;
	/*^block*/id _navigateAction;
	SEL _tapSelector;
	SEL _detailSelector;
	SEL _navigateSelector;

}

@property (nonatomic,copy) id tapAction;                        //@synthesize tapAction=_tapAction - In the implementation block
@property (nonatomic,copy) id detailAction;                     //@synthesize detailAction=_detailAction - In the implementation block
@property (nonatomic,copy) id navigateAction;                   //@synthesize navigateAction=_navigateAction - In the implementation block
@property (assign,nonatomic) SEL tapSelector;                   //@synthesize tapSelector=_tapSelector - In the implementation block
@property (assign,nonatomic) SEL detailSelector;                //@synthesize detailSelector=_detailSelector - In the implementation block
@property (assign,nonatomic) SEL navigateSelector;              //@synthesize navigateSelector=_navigateSelector - In the implementation block
-(id)tapAction;
-(SEL)tapSelector;
-(id)detailAction;
-(SEL)detailSelector;
-(id)navigateAction;
-(SEL)navigateSelector;
-(void)setTapAction:(id)arg1 ;
-(void)setDetailAction:(id)arg1 ;
-(void)setNavigateAction:(id)arg1 ;
-(void)setTapSelector:(SEL)arg1 ;
-(void)setDetailSelector:(SEL)arg1 ;
-(void)setNavigateSelector:(SEL)arg1 ;
@end

