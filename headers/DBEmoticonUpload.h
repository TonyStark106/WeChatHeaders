//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface DBEmoticonUpload : NSObject <WCDBCoding>
{
    unsigned int type;
    unsigned int createTime;
    unsigned int sendTime;
    unsigned int offset;
    unsigned int length;
    unsigned int status;
    unsigned int catalogId;
    unsigned int ConIntRes1;
    unsigned int ConIntRes2;
    unsigned int ConIntRes3;
    NSString *userName;
    NSString *msgLocalId;
    NSString *md5;
    NSString *message;
    NSString *catalog;
    NSString *draft;
    NSString *ConStrRes1;
    NSString *ConStrRes2;
    NSString *ConStrRes3;
}

+ (id)dummyObject;
+ (void)initialize;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1;
@property(nonatomic) unsigned int ConIntRes3; // @synthesize ConIntRes3;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2;
@property(nonatomic) unsigned int ConIntRes1; // @synthesize ConIntRes1;
@property(retain, nonatomic) NSString *draft; // @synthesize draft;
@property(nonatomic) unsigned int catalogId; // @synthesize catalogId;
@property(retain, nonatomic) NSString *catalog; // @synthesize catalog;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(nonatomic) unsigned int length; // @synthesize length;
@property(nonatomic) unsigned int offset; // @synthesize offset;
@property(nonatomic) unsigned int sendTime; // @synthesize sendTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *message; // @synthesize message;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(retain, nonatomic) NSString *msgLocalId; // @synthesize msgLocalId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
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
- (const WCDBCondition_22fabacd *)db_ConStrRes3;
- (const WCDBCondition_22fabacd *)db_ConStrRes2;
- (const WCDBCondition_22fabacd *)db_ConStrRes1;
- (const WCDBCondition_c6db074e *)db_ConIntRes3;
- (const WCDBCondition_c6db074e *)db_ConIntRes2;
- (const WCDBCondition_c6db074e *)db_ConIntRes1;
- (const WCDBCondition_22fabacd *)db_draft;
- (const WCDBCondition_c6db074e *)db_catalogId;
- (const WCDBCondition_22fabacd *)db_catalog;
- (const WCDBCondition_c6db074e *)db_status;
- (const WCDBCondition_c6db074e *)db_length;
- (const WCDBCondition_c6db074e *)db_offset;
- (const WCDBCondition_c6db074e *)db_sendTime;
- (const WCDBCondition_c6db074e *)db_createTime;
- (const WCDBCondition_22fabacd *)db_message;
- (const WCDBCondition_c6db074e *)db_type;
- (const WCDBCondition_22fabacd *)db_md5;
- (const WCDBCondition_22fabacd *)db_msgLocalId;
- (const WCDBCondition_22fabacd *)db_userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

