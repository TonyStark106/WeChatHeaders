//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMCrashProtectedMgr : MMService <MMService>
{
    _Bool m_stopRemovingUnsedCPKey;
    _Bool m_isInBackground;
    NSMutableArray *m_currRunloopsCPKeys;
    NSMutableDictionary *m_currIncreaseCPKeys;
    NSRecursiveLock *m_lock;
}

- (void).cxx_destruct;
- (void)onSingalCrash;
- (id)lastCPKey;
- (void)removeInfoWithKey:(id)arg1 threadId:(unsigned long long)arg2;
- (void)stopCleaning;
- (void)doCleaningJob;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)decreaseCurrIncreaseCPKeysWithout:(id)arg1;
- (void)clearCrashCountWithKey:(id)arg1;
- (void)decreaseCrashCountWithKey:(id)arg1;
- (void)increaseCrashCountWithKey:(id)arg1;
- (_Bool)isUnsafeWithKey:(id)arg1;
- (void)checkHasCrashAndDoReportJob;
- (void)checkMayCrashAndMarkAsHasCrash;
- (id)reportedCPKeyMemoryMappedKV;
- (id)mayCrashMemoryMappedKV;
- (id)hasCrashMemoryMappedKV;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

