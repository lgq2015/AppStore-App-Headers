/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PBMutableArray, PBArray;

@interface PBField : NSObject {

	int number_;
	PBMutableArray* mutableVarintList_;
	PBMutableArray* mutableFixed32List_;
	PBMutableArray* mutableFixed64List_;
	PBMutableArray* mutableLengthDelimitedList_;
	PBMutableArray* mutableGroupList_;

}

@property (nonatomic,retain,readonly) PBArray * varintList; 
@property (nonatomic,retain,readonly) PBArray * fixed32List; 
@property (nonatomic,retain,readonly) PBArray * fixed64List; 
@property (nonatomic,retain,readonly) PBArray * lengthDelimitedList; 
@property (nonatomic,retain,readonly) PBArray * groupList; 
@property (nonatomic,readonly) int number; 
-(unsigned long)serializedSize;
-(void)writeToOutput:(id)arg1 ;
-(void)writeAsMessageSetExtensionToOutput:(id)arg1 ;
-(unsigned long)serializedSizeAsMessageSetExtension;
-(PBArray *)varintList;
-(PBArray *)fixed32List;
-(PBArray *)fixed64List;
-(PBArray *)lengthDelimitedList;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(PBArray *)groupList;
-(int)number;
@end

