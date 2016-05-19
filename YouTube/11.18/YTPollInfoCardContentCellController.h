/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTInnerTubeCellController.h>

@protocol YTResponder;
@class YTIPollRenderer, YTIdentityController;

@interface YTPollInfoCardContentCellController : YTInnerTubeCellController {

	YTIPollRenderer* _entry;
	YTIdentityController* _identityController;
	id<YTResponder> _parentResponder;

}
-(id)parentResponder;
-(id)initWithEntry:(id)arg1 imageService:(id)arg2 identityController:(id)arg3 parentResponder:(id)arg4 ;
-(void)handleLongPressBegan:(id)arg1 ;
-(CGSize)cellSizeWithSize:(CGSize)arg1 ;
-(void)voteWithChoiceView:(id)arg1 ;
-(void)unselectChoice:(id)arg1 ;
-(void)selectChoice:(id)arg1 ;
-(void)handleAction:(id)arg1 ;
@end

