/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventUiAction : WAFieldStatsEvent {

	double _ui_action_type;
	double _ui_action_preloaded;
	double _ui_action_t;

}

@property (assign,nonatomic) double ui_action_type;                   //@synthesize ui_action_type=_ui_action_type - In the implementation block
@property (assign,nonatomic) double ui_action_preloaded;              //@synthesize ui_action_preloaded=_ui_action_preloaded - In the implementation block
@property (assign,nonatomic) double ui_action_t;                      //@synthesize ui_action_t=_ui_action_t - In the implementation block
-(double)ui_action_type;
-(void)setUi_action_type:(double)arg1 ;
-(double)ui_action_preloaded;
-(void)setUi_action_preloaded:(double)arg1 ;
-(double)ui_action_t;
-(void)setUi_action_t:(double)arg1 ;
-(id)init;
-(void)submit;
@end

