//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseDB.h"

@interface WCPayMsgDB : CBaseDB
{
}

- (unsigned int)getUnreadMsgCount;
- (_Bool)getNewPageMsgList:(id)arg1 EarlierCreateTime:(unsigned int)arg2 LaterCreateTime:(unsigned int)arg3;
- (void)getWCPayMsgValue:(id)arg1 dicInfo:(id)arg2;
- (void)initQueryArray:(id)arg1;
- (_Bool)setAllMsgStatusRead;
- (_Bool)setMsgStatusReadByMsgID:(unsigned int)arg1;
- (_Bool)insertMsg:(id)arg1;
- (_Bool)deleteAllWCPayMsg;
- (_Bool)deleteWCPayMsgByLocalMsgID:(unsigned int)arg1;
- (_Bool)createWCPayMsgTable;
- (void)registerTypeOfCol;
- (_Bool)initDB;
- (void)reloadDataBase;
- (void)dealloc;
- (id)init;

@end

