/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <Translate/GOOCardStyle.h>

@interface GOOTableCellStyle : GOOCardStyle {

	UIEdgeInsets _sectionHeaderInsets;
	char _didSizeSections;

}
+(id)parentTableViewForCell:(id)arg1 ;
+(UIEdgeInsets)contentViewInsetsForTableView:(id)arg1 ;
+(float)backgroundViewHorizontalInsetForTableView:(id)arg1 ;
+(void)layoutSubviewsOfCell:(id)arg1 forTableView:(id)arg2 hasCellDivider:(char)arg3 ;
+(UIEdgeInsets)contentViewInsetsAtIndexPath:(id)arg1 tableView:(id)arg2 ;
+(void)layoutSubviewsOfCell:(id)arg1 hasCellDivider:(char)arg2 ;
+(float)extraHeightForCellAtIndexPath:(id)arg1 tableView:(id)arg2 ;
+(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 sectionTitle:(id)arg3 ;
+(void)prepareTableView:(id)arg1 ;
+(id)nilHeaderViewForTableView:(id)arg1 ;
+(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
+(void)layoutSubviewsOfCell:(id)arg1 ;
-(char)shouldLayoutCellViewsForRTL;
-(id)tableView:(id)arg1 viewForContentViewObject:(id)arg2 forHeaderInSection:(int)arg3 ;
-(void)tableView:(id)arg1 updateBackgroundForHeaderView:(id)arg2 forHeaderInSection:(int)arg3 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
@end

