//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCDataBase, WCDataBaseTable;

@interface MyFavoritesDB : NSObject
{
    WCDataBase *m_db;
    WCDataBaseTable *m_tableFavItem;
    WCDataBaseTable *m_tableCdnUpload;
    WCDataBaseTable *m_tableCdnDownload;
    WCDataBaseTable *m_tableFileRetainCount;
    WCDataBaseTable *m_tableSearch;
    WCDataBaseTable *m_tableTag;
}

@property(retain, nonatomic) WCDataBaseTable *m_tableTag; // @synthesize m_tableTag;
@property(retain, nonatomic) WCDataBaseTable *m_tableSearch; // @synthesize m_tableSearch;
@property(retain, nonatomic) WCDataBaseTable *m_tableFileRetainCount; // @synthesize m_tableFileRetainCount;
@property(retain, nonatomic) WCDataBaseTable *m_tableCdnDownload; // @synthesize m_tableCdnDownload;
@property(retain, nonatomic) WCDataBaseTable *m_tableCdnUpload; // @synthesize m_tableCdnUpload;
@property(retain, nonatomic) WCDataBaseTable *m_tableFavItem; // @synthesize m_tableFavItem;
@property(retain, nonatomic) WCDataBase *m_db; // @synthesize m_db;
- (void).cxx_destruct;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (_Bool)createTables;
- (void)closeDBBeforeInit;
- (void)clearTables;
- (id)DBContext;
- (void)closeDB;
- (_Bool)initDB;
- (void)reloadDataBase;
- (void)dealloc;
- (id)init;

@end

