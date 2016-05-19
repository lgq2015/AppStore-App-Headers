/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTInnerTubeSectionController.h>
#import <YouTube/YTSectionListDrawerObserver.h>

@class YTIDrawerListRenderer, NSHashTable, NSString;

@interface YTDrawerListSectionController : YTInnerTubeSectionController <YTSectionListDrawerObserver> {

	YTIDrawerListRenderer* _model;
	NSHashTable* _headers;
	char _headerRemoved;

}

@property (assign,nonatomic) char headerRemoved;                    //@synthesize headerRemoved=_headerRemoved - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)classForHeader;
-(void)updateHeader:(id)arg1 indexPath:(id)arg2 ;
-(CGSize)sizeForHeaderWithSize:(CGSize)arg1 ;
-(id)initWithGlobals:(id)arg1 dataServices:(id)arg2 service:(id)arg3 parentResponder:(id)arg4 ;
-(void)clearAndHandleEntries:(id)arg1 totalResults:(unsigned)arg2 ;
-(void)loadWithModel:(id)arg1 ;
-(CGSize)sizeForHeaderWithSize_regular:(CGSize)arg1 ;
-(CGSize)sizeForHeaderWithSize_compact:(CGSize)arg1 ;
-(int)numberOfItems_regular;
-(int)numberOfItems_compact;
-(id)drawerProvider;
-(void)didTapToggleExpand:(id)arg1 ;
-(void)didTapDropDown:(id)arg1 ;
-(void)drawerViewStateDidChange:(int)arg1 ;
-(void)didSelectDrawerWithEntry:(id)arg1 ;
-(char)headerRemoved;
-(void)setHeaderRemoved:(char)arg1 ;
-(void)dealloc;
-(int)numberOfItems;
-(char)viewState;
@end

