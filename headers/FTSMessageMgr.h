//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IAsyncTaskProtocol.h"
#import "IMMNewSessionMgrExt.h"
#import "IMsgExt.h"

@class AsyncTaskQueueEngine, FTSDB, FTSMessageDB, NSArray, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;

@interface FTSMessageMgr : NSObject <IAsyncTaskProtocol, IMsgExt, IMMNewSessionMgrExt>
{
    FTSMessageDB *_ftsMessageDB;
    AsyncTaskQueueEngine *_asyncTaskQueueEngine;
    FTSDB *_ftsDB;
    NSRecursiveLock *_lock;
    _Bool _hasInitTask;
    _Bool _hasForegroundTask;
    _Bool _hasBackgroundTask;
    NSMutableArray *_arrHomePageLastQueryKeywords;
    NSString *_lastHomePageQueryText;
    NSString *_newestHomePageQueryText;
    _Bool _hasSearchDoneForHomePage;
    NSMutableArray *_arrMsgItemForHomePage;
    NSMutableArray *_arrSessionUserForHomePage;
    NSMutableDictionary *_dicSesssionArrMsgItemForHomePage;
    NSMutableArray *_arrDetailPageLastQueryKeywords;
    NSString *_lastDetailPageQueryText;
    NSString *_newestDetailPageQueryText;
    _Bool _hasSearchDoneForDetailPage;
    NSMutableArray *_arrMsgItemForDetailPage;
    NSMutableArray *_arrSessionUserForDetailPage;
    NSMutableDictionary *_dicSesssionArrMsgItemForDetailPage;
    NSMutableArray *_arrSessionUser;
    NSMutableDictionary *_dicLatestSession;
    _Bool _hasNewMessage;
    _Bool _hasLoadedSession;
    unsigned int _curLoadSessionCount;
    _Bool _needMonitorReport;
}

@property(nonatomic) _Bool needMonitorReport; // @synthesize needMonitorReport=_needMonitorReport;
@property(retain, nonatomic) NSMutableDictionary *dicLatestSession; // @synthesize dicLatestSession=_dicLatestSession;
@property(retain, nonatomic) NSMutableArray *arrSessionUser; // @synthesize arrSessionUser=_arrSessionUser;
@property(retain, nonatomic) NSString *newestDetailPageQueryText; // @synthesize newestDetailPageQueryText=_newestDetailPageQueryText;
@property(retain, nonatomic) NSArray *arrDetailPageLastQueryKeywords; // @synthesize arrDetailPageLastQueryKeywords=_arrDetailPageLastQueryKeywords;
@property(retain, nonatomic) NSString *lastDetailPageQueryText; // @synthesize lastDetailPageQueryText=_lastDetailPageQueryText;
@property(retain, nonatomic) NSString *newestHomePageQueryText; // @synthesize newestHomePageQueryText=_newestHomePageQueryText;
@property(retain, nonatomic) NSArray *arrHomePageLastQueryKeywords; // @synthesize arrHomePageLastQueryKeywords=_arrHomePageLastQueryKeywords;
@property(retain, nonatomic) NSString *lastHomePageQueryText; // @synthesize lastHomePageQueryText=_lastHomePageQueryText;
- (void).cxx_destruct;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)updateIndexTaskState;
- (void)updateLatestSession;
- (void)excuteBackgroundTask;
- (_Bool)hasBackgroundTask;
- (void)excuteForegroundTask;
- (_Bool)hasForegroundTask;
- (void)excuteInitTask;
- (_Bool)hasInitTask;
- (void)asyncMonitorReport;
- (unsigned int)getIndexNotReadyCount:(id)arg1;
- (_Bool)hasCreateAllIndex:(id)arg1;
- (void)aggregateMsgItemForDetailPage;
- (id)getSessionMsgItemsForDetailPage:(id)arg1 index:(unsigned long long)arg2;
- (id)getSessionUsersForDetailPage:(id)arg1;
- (_Bool)hasSearchDoneForDetailPage:(id)arg1;
- (void)cancelSearchForDetailPage;
- (void)asyncSearchTextForDetailPage:(id)arg1;
- (void)searchCompletelyForDetailPage:(id)arg1;
- (void)aggregateMsgItemForHomePage;
- (id)getSessionMsgItemsForHomePage:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)getSessionUserCountForHomePage:(id)arg1;
- (_Bool)hasSearchDoneForHomePage:(id)arg1;
- (_Bool)hasSearchResultForHomePage:(id)arg1;
- (void)cancelSearchForHomePage;
- (void)asyncSearchTextForHomePage:(id)arg1;
- (void)searchCompletelyForHomePage:(id)arg1;
- (void)reloadDB;
- (void)initDB:(id)arg1 lock:(id)arg2 asyncTaskQueueEngine:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

