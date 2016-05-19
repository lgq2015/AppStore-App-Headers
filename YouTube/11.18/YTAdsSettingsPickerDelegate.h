/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@class NSArray, NSString;

@interface YTAdsSettingsPickerDelegate : NSObject <UIPickerViewDelegate, UIPickerViewDataSource> {

	NSArray* _options;
	/*^block*/id _selectBlock;
	unsigned _selected;

}

@property (assign,nonatomic) unsigned selected;                     //@synthesize selected=_selected - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSelectBlock:(/*^block*/id)arg1 options:(id)arg2 ;
-(void)didSelectRow:(int)arg1 inComponent:(int)arg2 ;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3 ;
-(void)setSelected:(unsigned)arg1 ;
-(unsigned)selected;
@end

