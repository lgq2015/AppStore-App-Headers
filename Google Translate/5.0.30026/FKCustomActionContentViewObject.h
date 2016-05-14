/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/GOOTextContentViewObject.h>

@protocol NSCopying;
@interface FKCustomActionContentViewObject : GOOTextContentViewObject {

	id _target;
	SEL _action;
	id<NSCopying> _actionContext;

}

@property (assign,nonatomic,__weak) id target;                       //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                             //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id<NSCopying> actionContext;              //@synthesize actionContext=_actionContext - In the implementation block
-(void)setActionContext:(id<NSCopying>)arg1 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(id<NSCopying>)actionContext;
@end

