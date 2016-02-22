//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSData, NSString;

@interface MyWCStrangerMessage : NSObject <WCDBCoding>
{
    unsigned int m_localId;
    unsigned int m_type;
    unsigned int m_source;
    unsigned int m_createTime;
    NSString *m_id;
    NSString *m_fromUser;
    NSString *m_fromNickname;
    NSString *m_toUser;
    NSString *m_toNickname;
    NSString *m_content;
    NSData *m_metaData;
}

+ (id)dummyObject;
+ (void)initialize;
@property(retain, nonatomic) NSData *m_metaData; // @synthesize m_metaData;
@property(retain, nonatomic) NSString *m_content; // @synthesize m_content;
@property(retain, nonatomic) NSString *m_toNickname; // @synthesize m_toNickname;
@property(retain, nonatomic) NSString *m_toUser; // @synthesize m_toUser;
@property(retain, nonatomic) NSString *m_fromNickname; // @synthesize m_fromNickname;
@property(retain, nonatomic) NSString *m_fromUser; // @synthesize m_fromUser;
@property(retain, nonatomic) NSString *m_id; // @synthesize m_id;
@property(nonatomic) unsigned int m_createTime; // @synthesize m_createTime;
@property(nonatomic) unsigned int m_source; // @synthesize m_source;
@property(nonatomic) unsigned int m_type; // @synthesize m_type;
@property(nonatomic) unsigned int m_localId; // @synthesize m_localId;
- (void).cxx_destruct;
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
- (const WCDBCondition_91e67114 *)db_m_metaData;
- (const WCDBCondition_22fabacd *)db_m_content;
- (const WCDBCondition_22fabacd *)db_m_toNickname;
- (const WCDBCondition_22fabacd *)db_m_toUser;
- (const WCDBCondition_22fabacd *)db_m_fromNickname;
- (const WCDBCondition_22fabacd *)db_m_fromUser;
- (const WCDBCondition_22fabacd *)db_m_id;
- (const WCDBCondition_c6db074e *)db_m_createTime;
- (const WCDBCondition_c6db074e *)db_m_source;
- (const WCDBCondition_c6db074e *)db_m_type;
- (const WCDBCondition_c6db074e *)db_m_localId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

