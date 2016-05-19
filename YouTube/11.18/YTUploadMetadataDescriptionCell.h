/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTCollectionViewCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <YouTube/YTFeedViewCellProtocol.h>
#import <YouTube/YTResponder.h>

@protocol YTResponder;
@class YTUploadMetadataDescriptionEntry, UITextView, NSString;

@interface YTUploadMetadataDescriptionCell : YTCollectionViewCell <UITextViewDelegate, YTFeedViewCellProtocol, YTResponder> {

	YTUploadMetadataDescriptionEntry* _descriptionEntry;
	UITextView* _descriptionTextView;
	id<YTResponder> _parentResponder;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder; 
+(CGSize)cellSizeForEntry:(id)arg1 size:(CGSize)arg2 ;
-(id<YTResponder>)parentResponder;
-(void)setParentResponder:(id<YTResponder>)arg1 ;
-(void)setEntry:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(id)entry;
@end

