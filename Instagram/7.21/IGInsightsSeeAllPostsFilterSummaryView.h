/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface IGInsightsSeeAllPostsFilterSummaryView : UIView {

	NSString* _mediaType;
	NSString* _timeframe;
	NSString* _dataOrdering;
	NSString* _skeleton;
	UILabel* _label;

}

@property (nonatomic,copy) NSString * mediaType;                 //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSString * timeframe;                 //@synthesize timeframe=_timeframe - In the implementation block
@property (nonatomic,copy) NSString * dataOrdering;              //@synthesize dataOrdering=_dataOrdering - In the implementation block
@property (nonatomic,copy) NSString * skeleton;                  //@synthesize skeleton=_skeleton - In the implementation block
@property (nonatomic,readonly) UILabel * label;                  //@synthesize label=_label - In the implementation block
-(void)setTimeframe:(NSString *)arg1 ;
-(void)setDataOrdering:(NSString *)arg1 ;
-(id)generatedLabelTextAttributedString;
-(NSString *)timeframe;
-(NSString *)dataOrdering;
-(void)updateMediaType:(id)arg1 timeframe:(id)arg2 dataOrdering:(id)arg3 skeleton:(id)arg4 ;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(NSString *)skeleton;
-(void)setSkeleton:(NSString *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)label;
@end

