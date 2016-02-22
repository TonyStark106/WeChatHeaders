//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class WCDataBase, WCDataBaseTable;

@interface WCOutDataBase : MMObject
{
    WCDataBase *_dbBase;
    WCDataBaseTable *_recentCallTable;
}

- (void).cxx_destruct;
- (_Bool)deleteAllRecentCall;
- (_Bool)deleteRecentCallByPhoneNum:(id)arg1 withCountryCode:(id)arg2;
- (_Bool)deleteRecentCallById:(int)arg1;
- (_Bool)updateRecentCall:(id)arg1;
- (id)compositeForLastCallItemsAndCountryCodeUseCountDic;
- (id)arrayForLastCallItem;
- (id)dicFromPhoneNumToLastCallTime;
- (id)dicFromCountryCodeToCount;
- (id)selectRecentCallForPhoneNum:(id)arg1 withCountryCode:(id)arg2 limit:(unsigned int)arg3;
- (int)insertCall:(id)arg1;
- (unsigned int)getRecentCallCount;
- (id)init;

@end
