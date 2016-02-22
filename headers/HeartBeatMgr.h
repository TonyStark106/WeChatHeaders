//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableSet, NSString, NSTimer;

@interface HeartBeatMgr : MMService <PBMessageObserverDelegate, MMService>
{
    _Bool m_isStop;
    NSMutableSet *m_setRequestEventID;
    NSTimer *m_timer;
    unsigned long long m_checkTime;
}

@property(nonatomic) unsigned long long m_checkTime; // @synthesize m_checkTime;
@property(retain, nonatomic) NSTimer *m_timer; // @synthesize m_timer;
@property(retain, nonatomic) NSMutableSet *m_setRequestEventID; // @synthesize m_setRequestEventID;
@property(nonatomic) _Bool m_isStop; // @synthesize m_isStop;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onCheckTime;
- (void)stopTimer;
- (void)resetTimer;
- (void)handleResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)removeRequestEventID:(unsigned int)arg1;
- (_Bool)isLatestRequestEventID:(unsigned int)arg1;
- (void)addRequestEventID:(unsigned int)arg1;
- (void)stopRequest;
- (void)startRequest;
- (void)internalStop;
- (void)internalStart;
- (void)StopHeartBeat;
- (void)StartHeartBeat;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

