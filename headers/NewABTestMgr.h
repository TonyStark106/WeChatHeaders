//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableArray, NSString;

@interface NewABTestMgr : MMService <PBMessageObserverDelegate, IMsgExt, MMKernelExt, MMService>
{
    _Bool _bABTestCacheLoaded;
    unsigned int _uiNextUpdateTime;
    NSMutableArray *_aryABTestList;
}

@property(nonatomic) _Bool bABTestCacheLoaded; // @synthesize bABTestCacheLoaded=_bABTestCacheLoaded;
@property(nonatomic) unsigned int uiNextUpdateTime; // @synthesize uiNextUpdateTime=_uiNextUpdateTime;
@property(retain, nonatomic) NSMutableArray *aryABTestList; // @synthesize aryABTestList=_aryABTestList;
- (void).cxx_destruct;
- (void)willEnterForeground;
- (void)onAuthOK;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)tryUpdateABTestFromSvr;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getABTestFromSvr;
- (void)dealloc;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)parseExpXMLAndMerge:(id)arg1;
- (_Bool)saveUpdateTimeFromFile:(unsigned int)arg1 fileName:(id)arg2;
- (unsigned int)getUpdateTimeFromFile:(id)arg1;
- (_Bool)saveLastUpdateTimeForCache:(unsigned int)arg1;
- (unsigned int)getLastUpdateTimeFromCache;
- (_Bool)saveNewUpdateTimeForCache:(unsigned int)arg1;
- (unsigned int)getNextUpdateTimeFromCache;
- (void)updateNextUpdateTime:(unsigned int)arg1;
- (void)mergeNewABTestItemFromSvr:(id)arg1;
- (_Bool)saveNewABTestCache;
- (void)filterExpireExp;
- (_Bool)tryLoadNewABTestCache;
- (id)pathForNewABTestCache;
- (void)reportABTestLog:(id)arg1 expId:(id)arg2 logId:(unsigned int)arg3 logExt:(id)arg4;
- (id)getABTestListWithBizId:(id)arg1;
- (id)getABTestItemWithLayerId:(id)arg1;
- (id)getABTestAry;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

