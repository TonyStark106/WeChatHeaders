//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSThread;

@interface MMMonitorMgr : NSObject
{
    NSThread *m_monitorThread;
    _Bool m_bStop;
    unsigned long long m_nIntervalTime;
    unsigned long long m_nFPSCnt;
    unsigned long long m_nLastFPS;
    _Bool m_bMonitor;
    unsigned long long m_nBlockTime;
    NSString *m_nsLastDumpFilePath;
    struct __CFRunLoopObserver *m_runLoopObserver;
    unsigned long long m_nLastTimeInterval;
    NSArray *m_arrLastMainThreadCallStack;
    struct vector<unsigned long, std::__1::allocator<unsigned long>> m_vecLastMainThreadCallStack;
    unsigned long long m_nSum;
    _Bool m_isBackgroundStartUp;
}

+ (id)shareInstance;
@property(nonatomic) _Bool m_bMonitor; // @synthesize m_bMonitor;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reportDataWithBlockTime:(unsigned long long)arg1;
- (void)threadProc;
- (void)dump:(long long)arg1;
- (_Bool)needFilter;
- (long long)check;
- (unsigned long long)diffTime:(struct timeval *)arg1 endTime:(struct timeval *)arg2;
- (void)logFPS;
- (void)onDisplay:(id)arg1;
- (void)addFPSMonitor;
- (void)addMonitorThread;
- (void)removeRunLoopObserver;
- (void)addRunLoopObserver;
- (void)didEnterBackground;
- (void)didBecomeActive;
- (void)willSuspend;
- (void)willTerminate;
- (void)dealloc;
- (void)stop;
- (id)init;

@end

