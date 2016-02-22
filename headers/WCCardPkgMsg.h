//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSMutableArray, NSString, WCCardPkgMsgActivity, WCCardPkgMsgButton;

@interface WCCardPkgMsg : NSObject <WCDBCoding>
{
    unsigned int localID;
    unsigned int status;
    unsigned int updateTime;
    unsigned int IntRes1;
    unsigned int IntRes2;
    unsigned int msgType;
    unsigned int jumpType;
    unsigned int reportScene;
    unsigned int getLayoutScene;
    unsigned long long svr64ID;
    NSString *contentForDB;
    NSString *cardId;
    NSString *StrRes1;
    NSString *StrRes2;
    NSString *cardTpId;
    NSString *logoUrl;
    NSString *webUrl;
    NSString *title;
    NSString *desc;
    NSString *msgID;
    WCCardPkgMsgButton *actionBtn;
    WCCardPkgMsgActivity *activity;
    NSMutableArray *acceptItemList;
}

+ (void)ParseMsgXML:(id)arg1 ToMsg:(id)arg2;
+ (id)dummyObject;
+ (void)initialize;
@property(nonatomic) unsigned int getLayoutScene; // @synthesize getLayoutScene;
@property(retain, nonatomic) NSMutableArray *acceptItemList; // @synthesize acceptItemList;
@property(nonatomic) unsigned int reportScene; // @synthesize reportScene;
@property(retain, nonatomic) WCCardPkgMsgActivity *activity; // @synthesize activity;
@property(retain, nonatomic) WCCardPkgMsgButton *actionBtn; // @synthesize actionBtn;
@property(retain, nonatomic) NSString *msgID; // @synthesize msgID;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId;
@property(nonatomic) unsigned int jumpType; // @synthesize jumpType;
@property(nonatomic) unsigned int msgType; // @synthesize msgType;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(retain, nonatomic) NSString *contentForDB; // @synthesize contentForDB;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(nonatomic) unsigned long long svr64ID; // @synthesize svr64ID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupDataFromDB;
- (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
- (const struct WCDBIndexHelper *)getWCDBIndexArray;
- (unsigned long long)getWCDBIndexArrayCount;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const map_0e718273 *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_0e718273 *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_7a576766 *)getValueNameIndexMap;
- (id)getValueTable;
- (const WCDBCondition_22fabacd *)db_StrRes2;
- (const WCDBCondition_22fabacd *)db_StrRes1;
- (const WCDBCondition_c6db074e *)db_IntRes2;
- (const WCDBCondition_c6db074e *)db_IntRes1;
- (const WCDBCondition_22fabacd *)db_cardId;
- (const WCDBCondition_22fabacd *)db_contentForDB;
- (const WCDBCondition_c6db074e *)db_updateTime;
- (const WCDBCondition_c6db074e *)db_status;
- (const WCDBCondition_7786cbb5 *)db_svr64ID;
- (const WCDBCondition_c6db074e *)db_localID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

