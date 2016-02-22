//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "CNetworkStatusExt.h"
#import "IAudioToMessageExt.h"
#import "IEmoticonDownloadExt.h"
#import "INetworkStatusReportWithGPSExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "PBMessageObserverDelegate.h"

@class CNetworkStatusReportArchive, COOBData, NSDate, NSString, NSTimer, ReportInfo;

@interface CNetworkStatusMgr : MMService <MMService, MessageObserverDelegate, IAudioToMessageExt, CNetworkStatusExt, IEmoticonDownloadExt, MMKernelExt, PBMessageObserverDelegate, INetworkStatusReportWithGPSExt>
{
    _Bool m_bConnecting;
    _Bool m_bConnected;
    _Bool m_bReadToGettingData;
    long long m_n64MsgIdForVoiceMsgToDownload;
    _Bool m_bDownloadingEmoticon;
    _Bool m_bReadOnceAgain;
    unsigned int m_uiConnnectType;
    unsigned int m_uiShortChannelFailCount;
    unsigned int m_uiLastReportTime;
    struct timeval m_tvLastGettingDataTime;
    CNetworkStatusReportArchive *m_reportArchive;
    vector_a9c0768e m_vecMesssageIdToListen;
    int m_eNetworkStatusType;
    COOBData *m_dtOOB;
    NSDate *m_dtLastReport;
    ReportInfo *m_oReportInfo;
    NSTimer *m_oReportTimer;
    NSString *m_nsLastWifiBssid;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)InternalReportWithGPS:(id)arg1 inScene:(unsigned int)arg2;
- (void)InternalReportNetworkInfo:(id)arg1;
- (id)MakeSafeReportString:(id)arg1;
- (void)CheckReportNetworkInfo:(unsigned int)arg1;
- (void)CheckBG2FG;
- (void)onAuthOK;
- (void)OnNetworkStatusReportWithGPS:(id)arg1 inScene:(unsigned int)arg2;
- (void)SaveReportInfo;
- (void)LoadReportInfo;
- (void)ReachabilityChange:(unsigned int)arg1;
- (id)GetOOBUrl;
- (id)GetOOBData;
- (void)doReportIpxx:(id)arg1;
- (void)setReadToGettingData;
- (unsigned int)getNetworkStatusType;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)OnEmoticonDownload:(unsigned int)arg1;
- (void)zeroEmocticonDownloadingStatus;
- (void)OnErrorByReceiver:(id)arg1 ErrNo:(int)arg2;
- (void)OnAddMessageByReceiver:(id)arg1;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (void)unregExt;
- (void)regExt;
- (void)unListenMessageId;
- (void)initMessageIdToListen;
- (void)handleVoiceDowdload:(id)arg1 error:(_Bool)arg2;
- (void)zeroVoiceMsgToDownload;
- (void)handleSyncEnd;
- (void)handleSyncBegin;
- (void)handleNetworkStatusChange:(unsigned int)arg1;
- (void)checkCallStatusChangedExt;
- (void)callDisconnectStatusChangedExt;
- (void)translateStatus;
- (void)translateStatusLongUnConnect;
- (void)translateStatusLongConnect;
- (_Bool)isDuringSync;
- (void)handleReport:(int)arg1;
- (void)handleReportLongUnConnectCount;
- (void)handleReportDisconnected:(int)arg1;
- (void)realCalDisconnected;
- (void)handleReportGettingData:(int)arg1;
- (void)doReportNetworkStatus;
- (_Bool)AddOplogInternal;
- (_Bool)isNeedReport;
- (void)loadNetworkStatusReportArchive;
- (struct timeval)getCurTimeVal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

