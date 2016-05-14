/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <Translate/QTMCollectionViewController.h>
#import <Translate/GOOHeaderNavigationParentViewController.h>

@class GOOHeaderNavigationView, NSArray, GSKVoiceSearchPreferences, GOOFlexibleHeaderViewController, UIColor, NSString;

@interface GSKVoiceSearchLanguageSelectorViewController : QTMCollectionViewController <GOOHeaderNavigationParentViewController> {

	NSArray* _languageList;
	int _selectedLanguageIndex;
	GSKVoiceSearchPreferences* _voiceSearchPreferences;
	GOOFlexibleHeaderViewController* headerViewController;
	GOOHeaderNavigationView* headerNavigationView;

}

@property (nonatomic,retain) UIColor * headerColor; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GOOFlexibleHeaderViewController * headerViewController; 
@property (nonatomic,retain) GOOHeaderNavigationView * headerNavigationView; 
+(id)newLanguageSelectorWithDefaultList;
-(id)initWithLanguageList:(id)arg1 ;
-(int)indexOfCurrentVoiceLocale;
-(void)setupModel;
-(GOOHeaderNavigationView *)headerNavigationView;
-(id)defaultLanguageTitle:(char)arg1 ;
-(id)checkboxForLanguageName:(id)arg1 checked:(char)arg2 ;
-(id)defaultLanguageString;
-(void)setHeaderNavigationView:(GOOHeaderNavigationView *)arg1 ;
-(UIColor *)headerColor;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setHeaderColor:(UIColor *)arg1 ;
-(GOOFlexibleHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(GOOFlexibleHeaderViewController *)arg1 ;
@end

