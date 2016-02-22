//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface FTSFavSearchItem : NSObject <WCDBCoding>
{
    unsigned int localId;
    unsigned int updateTime;
    unsigned int FavItemReservedInt;
    NSString *searchTitle;
    NSString *searchDesc;
    NSString *searchSource;
    NSString *searchTag;
    NSString *FavItemReservedText;
}

+ (id)getWCDBTableHelperDictionary;
+ (id)dummyObject;
+ (void)initialize;
@property(retain, nonatomic) NSString *FavItemReservedText; // @synthesize FavItemReservedText;
@property(nonatomic) unsigned int FavItemReservedInt; // @synthesize FavItemReservedInt;
@property(retain, nonatomic) NSString *searchTag; // @synthesize searchTag;
@property(retain, nonatomic) NSString *searchSource; // @synthesize searchSource;
@property(retain, nonatomic) NSString *searchDesc; // @synthesize searchDesc;
@property(retain, nonatomic) NSString *searchTitle; // @synthesize searchTitle;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned int localId; // @synthesize localId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)copyFromItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (long long)compareSearchItemAscending:(id)arg1;
- (id)init;
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
- (const WCDBCondition_22fabacd *)db_FavItemReservedText;
- (const WCDBCondition_c6db074e *)db_FavItemReservedInt;
- (const WCDBCondition_22fabacd *)db_searchTag;
- (const WCDBCondition_22fabacd *)db_searchSource;
- (const WCDBCondition_22fabacd *)db_searchDesc;
- (const WCDBCondition_22fabacd *)db_searchTitle;
- (const WCDBCondition_c6db074e *)db_updateTime;
- (const WCDBCondition_c6db074e *)db_localId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

