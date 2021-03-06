//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface GameMsgDBItem : NSObject <WCDBCoding>
{
    _Bool m_isBubbleUnread;
    unsigned int m_localID;
    unsigned int m_msgID;
    unsigned int m_type;
    unsigned int m_localStatus;
    unsigned int m_updateTime;
    unsigned int m_localUpdateSeq;
    unsigned int m_updateSeq;
    unsigned int m_status;
    unsigned int IntRes1;
    unsigned int IntRes2;
    unsigned int IntRes3;
    unsigned int m_displayCount;
    NSString *m_fromUser;
    NSString *m_toUser;
    NSString *m_object;
    NSString *StrRes1;
    NSString *StrRes2;
    NSString *StrRes3;
    NSString *m_pushMsgID;
    NSString *m_appID;
}

+ (id)dummyObject;
+ (void)initialize;
@property(retain, nonatomic) NSString *m_appID; // @synthesize m_appID;
@property(nonatomic) unsigned int m_displayCount; // @synthesize m_displayCount;
@property(nonatomic) _Bool m_isBubbleUnread; // @synthesize m_isBubbleUnread;
@property(retain, nonatomic) NSString *m_pushMsgID; // @synthesize m_pushMsgID;
@property(retain, nonatomic) NSString *StrRes3; // @synthesize StrRes3;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) unsigned int IntRes3; // @synthesize IntRes3;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(retain, nonatomic) NSString *m_object; // @synthesize m_object;
@property(retain, nonatomic) NSString *m_toUser; // @synthesize m_toUser;
@property(retain, nonatomic) NSString *m_fromUser; // @synthesize m_fromUser;
@property(nonatomic) unsigned int m_status; // @synthesize m_status;
@property(nonatomic) unsigned int m_updateSeq; // @synthesize m_updateSeq;
@property(nonatomic) unsigned int m_localUpdateSeq; // @synthesize m_localUpdateSeq;
@property(nonatomic) unsigned int m_updateTime; // @synthesize m_updateTime;
@property(nonatomic) unsigned int m_localStatus; // @synthesize m_localStatus;
@property(nonatomic) unsigned int m_type; // @synthesize m_type;
@property(nonatomic) unsigned int m_msgID; // @synthesize m_msgID;
@property(nonatomic) unsigned int m_localID; // @synthesize m_localID;
- (void).cxx_destruct;
- (void)dealloc;
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
- (const WCDBCondition_22fabacd *)db_m_appID;
- (const WCDBCondition_c6db074e *)db_m_displayCount;
- (const WCDBCondition_d7690721 *)db_m_isBubbleUnread;
- (const WCDBCondition_22fabacd *)db_m_pushMsgID;
- (const WCDBCondition_22fabacd *)db_StrRes3;
- (const WCDBCondition_22fabacd *)db_StrRes2;
- (const WCDBCondition_22fabacd *)db_StrRes1;
- (const WCDBCondition_c6db074e *)db_IntRes3;
- (const WCDBCondition_c6db074e *)db_IntRes2;
- (const WCDBCondition_c6db074e *)db_IntRes1;
- (const WCDBCondition_22fabacd *)db_m_object;
- (const WCDBCondition_22fabacd *)db_m_toUser;
- (const WCDBCondition_22fabacd *)db_m_fromUser;
- (const WCDBCondition_c6db074e *)db_m_status;
- (const WCDBCondition_c6db074e *)db_m_updateSeq;
- (const WCDBCondition_c6db074e *)db_m_localUpdateSeq;
- (const WCDBCondition_c6db074e *)db_m_updateTime;
- (const WCDBCondition_c6db074e *)db_m_localStatus;
- (const WCDBCondition_c6db074e *)db_m_type;
- (const WCDBCondition_c6db074e *)db_m_msgID;
- (const WCDBCondition_c6db074e *)db_m_localID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

