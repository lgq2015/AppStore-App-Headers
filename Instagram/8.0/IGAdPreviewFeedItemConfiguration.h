/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGFeedItemConfigurationType.h>

@class IGDefaultFeedItemConfiguration, NSString;

@interface IGAdPreviewFeedItemConfiguration : NSObject <IGFeedItemConfigurationType> {

	IGDefaultFeedItemConfiguration* _defaultConfig;

}

@property (nonatomic,readonly) IGDefaultFeedItemConfiguration * defaultConfig;              //@synthesize defaultConfig=_defaultConfig - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldHideFeedItem:(id)arg1 ;
-(char)allowSponsoredContextForFeedItem:(id)arg1 ;
-(char)showFollowButtonForFeedItem:(id)arg1 ;
-(char)shouldUseChevronMenuForFeedItem:(id)arg1 ;
-(char)shouldMoreSupersedeCustomizableButtonForFeedItem:(id)arg1 ;
-(int)timestampTypeForFeedItem:(id)arg1 ;
-(char)showExploreContextForFeedItem:(id)arg1 ;
-(char)shouldCollapseCaptionForFeedItem:(id)arg1 ;
-(char)enablePivotGridAfterCommentForFeedItem:(id)arg1 ;
-(char)enablePlaceHolderForPivotGrid:(id)arg1 ;
-(int)hiddenCellTypeForFeedItem:(id)arg1 ;
-(char)allowHidingFeedItem:(id)arg1 ;
-(id)likeRequestParametersForFeedItem:(id)arg1 ;
-(char)shouldTightenUpWhiteSpace:(id)arg1 ;
-(char)shouldShowInlineInsightsForFeedItem:(id)arg1 ;
-(char)shouldPopAfterDeletingFeedItem:(id)arg1 ;
-(id)actionSheetConfigurationForFeedItem:(id)arg1 ;
-(char)shouldDisplaySingleCellForFeedItem:(id)arg1 ;
-(id)init;
-(IGDefaultFeedItemConfiguration *)defaultConfig;
@end

