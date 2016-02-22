//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MyFavoritesDB.h"

@interface MyFavoritesDB (FavoritesItemDB)
- (_Bool)deleteFavoritesItemByLocalItemId:(unsigned int)arg1;
- (_Bool)deleteFavoritesItemById:(unsigned int)arg1;
- (_Bool)updateItemXML:(id)arg1 ByLocalId:(unsigned int)arg2;
- (_Bool)updateItemLocalStatus:(int)arg1 ByLocalId:(unsigned int)arg2;
- (_Bool)updateItemUpdateTime:(unsigned int)arg1 ByLocalId:(unsigned int)arg2;
- (_Bool)updateUpdateSeq:(unsigned int)arg1 ByFavId:(unsigned int)arg2;
- (_Bool)updateItemInFavItemDBForFavObject:(id)arg1 ByFavId:(unsigned int)arg2;
- (_Bool)updateItemInFavItemDB:(id)arg1 ByLocalItemId:(unsigned int)arg2;
- (void)fillFavItemUpdatePropertiesForFavObject:(vector_24c76cbd *)arg1;
- (void)fillFavItemUpdateProperties:(vector_24c76cbd *)arg1;
- (unsigned int)getMaxLastUpdateTimeByUsrname:(id)arg1;
- (unsigned int)getItemCountByFromUsr:(id)arg1 andToUsr:(id)arg2;
- (unsigned int)getItemCountByUsrname:(id)arg1;
- (id)getNextPageNeedBatchGetFavoritesItemListByType:(int)arg1 andMinUpdateTime:(unsigned int)arg2;
- (id)getFirstPageNeedBatchGetFavoritesItemListByType:(int)arg1;
- (id)getNeedBatchGetFavoritesItemListByType:(int)arg1 andMinUpdateTime:(unsigned int)arg2;
- (id)getNextPageFavoritesItemListByType:(int)arg1 andCurMinUpdateTime:(unsigned int)arg2;
- (id)getFirstPageFavoritesItemListContainUnBatchGet;
- (id)getFirstPageFavoritesItemListByType:(int)arg1;
- (id)getFavoritesItemListFrom:(unsigned int)arg1 Limit:(unsigned int)arg2;
- (id)getDeleteItemList;
- (id)getAllFavoritesItemList;
- (id)getDownloadFailedItemList;
- (id)getAsyncUploadFailedItemList;
- (id)getUploadFailedItemList;
- (id)getDownloadingItemList;
- (id)getAsyncUploadingItemList;
- (id)getUploadingItemList;
- (id)checkBeforeAddItemByFavId:(unsigned int)arg1 andLocalId:(unsigned int)arg2;
- (id)getLastFavoritesItem;
- (id)getFavoritesItemBySourceId:(id)arg1;
- (id)getFavoritesItemByLocalId:(unsigned int)arg1;
- (id)getFavoritesItemById:(unsigned int)arg1;
- (_Bool)insertNewRowInFavoritesItemTable:(id)arg1;
@end

