/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol IGWebViewTableViewCellDelegate;
@class IGNewsStory, UIWebView, NSString;

@interface IGNewsFallbackTableViewCell : UITableViewCell <UIWebViewDelegate> {

	IGNewsStory* _story;
	id<IGWebViewTableViewCellDelegate> _delegate;
	UIWebView* _webView;

}

@property (nonatomic,retain) IGNewsStory * story;                                             //@synthesize story=_story - In the implementation block
@property (assign,nonatomic,__weak) id<IGWebViewTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                             //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) char hasPayloadSize; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStory:(IGNewsStory *)arg1 ;
-(IGNewsStory *)story;
-(void)setDelegate:(id<IGWebViewTableViewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<IGWebViewTableViewCellDelegate>)delegate;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(char)hasPayloadSize;
@end

