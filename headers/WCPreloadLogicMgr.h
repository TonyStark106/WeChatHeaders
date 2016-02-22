//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNetworkStatusExt.h"
#import "WCPreloadProviderDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, WCPreloadProvider;

@interface WCPreloadLogicMgr : NSObject <WCPreloadProviderDelegate, CNetworkStatusExt>
{
    NSMutableArray *m_downloadItemID;
    unsigned int m_lastRefreshTime;
    id <WCPreloadLogicDelegate> m_delegate;
    WCPreloadProvider *m_dataProvider;
    unsigned int m_preloadCount;
    _Bool m_enablePreload;
    NSMutableArray *m_waitDownloadItem;
    NSMutableSet *m_setPreDownloadItemIDForBigImage;
    NSMutableSet *m_setPreDownloadItemIDForSmallImage;
    NSMutableDictionary *m_dicPrelDownloadItemNetType;
    unsigned int m_preloadSucFeedCountForSmallImage;
    unsigned int m_viewNewFeedCount;
    unsigned int m_preloadSucImageCountForBigImage;
    unsigned int m_viewNewBigImageCount;
    unsigned int m_preloadBigImageCount;
    unsigned long long m_latestID;
}

@property(nonatomic) __weak id <WCPreloadLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)tryPreloadAdLongVideo:(id)arg1;
- (_Bool)isInPreloadAroundImgLimitTime;
- (void)tryLogPreloadImageResult;
- (void)addBigImageCountForViewNewBigImage;
- (void)addBigImageCountForPreloadSuc;
- (void)addFeedCountForViewNewFeeds;
- (void)addFeedCountForPreloadSmallImageSuc;
- (_Bool)isInPreloadLimitTime;
- (unsigned int)getCheckUpdateTimeSecs;
- (_Bool)couldPreloadImage;
- (_Bool)couldPreloadBigImage;
- (_Bool)couldPreloadSmallImage;
- (void)onDataUpdatedForPreload:(id)arg1 andData:(id)arg2;
- (id)getPreloadNetType:(id)arg1;
- (void)removePreloadDataItemForBigImage:(id)arg1;
- (void)removePreloadDataItemForSmallImage:(id)arg1;
- (_Bool)hasPreloadDataItemForBigImage:(id)arg1;
- (_Bool)hasPreloadDataItemForSmallImage:(id)arg1;
- (void)preloadDataList:(id)arg1;
- (void)downloadImages;
- (int)getCurHistoryClickRatioLimit;
- (unsigned int)getNetworkType;
- (void)tryPreloadData;
- (void)handleLatestWCObjectChanged:(id)arg1;
- (void)updateStatusForPreload:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

