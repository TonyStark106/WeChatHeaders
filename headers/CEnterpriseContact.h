//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseContact.h"

#import "WCDBCoding.h"

@class EnterpriseRoomData, NSString;

@interface CEnterpriseContact : CBaseContact <WCDBCoding>
{
    _Bool m_bHeadImageUpdateFlag;
    unsigned int m_uiUserFlag;
    unsigned int m_uiContactType;
    NSString *m_nsContactDisplayName;
    unsigned long long m_uiContactVer;
    NSString *m_nsProfileJumpUrl;
    NSString *m_nsAddMemberUrl;
    EnterpriseRoomData *m_oRoomData;
    NSString *m_nsBrandUserName;
}

+ (id)dummyObject;
+ (void)initialize;
@property(retain, nonatomic) NSString *m_nsBrandUserName; // @synthesize m_nsBrandUserName;
@property(nonatomic) _Bool m_bHeadImageUpdateFlag; // @synthesize m_bHeadImageUpdateFlag;
@property(retain, nonatomic) EnterpriseRoomData *m_oRoomData; // @synthesize m_oRoomData;
@property(nonatomic) unsigned int m_uiContactType; // @synthesize m_uiContactType;
@property(nonatomic) unsigned int m_uiUserFlag; // @synthesize m_uiUserFlag;
@property(retain, nonatomic) NSString *m_nsAddMemberUrl; // @synthesize m_nsAddMemberUrl;
@property(retain, nonatomic) NSString *m_nsProfileJumpUrl; // @synthesize m_nsProfileJumpUrl;
@property(nonatomic) unsigned long long m_uiContactVer; // @synthesize m_uiContactVer;
@property(retain, nonatomic) NSString *m_nsContactDisplayName; // @synthesize m_nsContactDisplayName;
- (void).cxx_destruct;
- (_Bool)isSelf;
- (id)getSessionDisplayName;
- (_Bool)isFavorite;
- (_Bool)isChatStatusNotifyOpen;
- (_Bool)isChatroom;
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
- (const WCDBCondition_22fabacd *)db_m_nsAtUserList;
- (const WCDBCondition_22fabacd *)db_m_nsBrandUserName;
- (const WCDBCondition_d7690721 *)db_m_bHeadImageUpdateFlag;
- (const WCDBCondition_8dd2b00c *)db_m_oRoomData;
- (const WCDBCondition_c6db074e *)db_m_uiContactType;
- (const WCDBCondition_c6db074e *)db_m_uiUserFlag;
- (const WCDBCondition_22fabacd *)db_m_nsAddMemberUrl;
- (const WCDBCondition_22fabacd *)db_m_nsHeadHDImgUrl;
- (const WCDBCondition_22fabacd *)db_m_nsProfileJumpUrl;
- (const WCDBCondition_7786cbb5 *)db_m_uiContactVer;
- (const WCDBCondition_22fabacd *)db_m_nsContactDisplayName;
- (const WCDBCondition_22fabacd *)db_m_nsUsrName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *m_nsAtUserList;
@property(retain, nonatomic) NSString *m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString *m_nsUsrName;
@property(readonly) Class superclass;

@end

