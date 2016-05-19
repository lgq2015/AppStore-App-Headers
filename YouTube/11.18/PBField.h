/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
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

