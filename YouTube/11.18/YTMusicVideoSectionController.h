/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTSectionControllerProtocol.h>
#import <YouTube/YTTappableSectionFooterViewDelegate.h>

@protocol YTSectionControllerDelegate;
@class NSArray, NSString;

@interface YTMusicVideoSectionController : NSObject <YTSectionControllerProtocol, YTTappableSectionFooterViewDelegate> {

	SEL _didSelectVideoAction;
	id _didSelectVideoTarget;
	char _expanded;
	NSArray* _musicVideoSnippets;
	id<YTSectionControllerDelegate> _sectionControllerDelegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<YTSectionControllerDelegate> sectionControllerDelegate;              //@synthesize sectionControllerDelegate=_sectionControllerDelegate - In the implementation block
-(void)setTextForFooter:(id)arg1 ;
-(Class)cellClassForItemAtIndex:(int)arg1 ;
-(id)cellClassesToRegister;
-(CGSize)sizeForItemAtIndex:(int)arg1 withSize:(CGSize)arg2 ;
-(void)updateCell:(id)arg1 forIndex:(int)arg2 ;
-(Class)classForHeader;
-(void)updateHeader:(id)arg1 ;
-(CGSize)sizeForHeaderWithSize:(CGSize)arg1 ;
-(Class)classForFooter;
-(void)updateFooter:(id)arg1 ;
-(CGSize)sizeForFooterWithSize:(CGSize)arg1 ;
-(void)didSelectItemAtIndex:(int)arg1 fromView:(id)arg2 ;
-(char)persistCellSelection;
-(id<YTSectionControllerDelegate>)sectionControllerDelegate;
-(void)setSectionControllerDelegate:(id<YTSectionControllerDelegate>)arg1 ;
-(void)didTapSectionFooterView:(id)arg1 ;
-(id)expandedItems;
-(id)initWithMusicVideoSnippets:(id)arg1 ;
-(void)setDidSelectVideoIDTarget:(id)arg1 action:(SEL)arg2 ;
-(int)numberOfItems;
@end

