//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class DeviceRankDetailResonse, NSString;

@interface DeviceRankProfileMgr : MMService <MMService, PBMessageObserverDelegate, ICdnComMgrExt>
{
    DeviceRankDetailResonse *m_selfDeviceRank;
    NSString *m_nsCDNClientID;
}

@property(retain, nonatomic) NSString *m_nsCDNClientID; // @synthesize m_nsCDNClientID;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleRankGetUserRankDetailResponse:(id)arg1;
- (void)handleUpdateCoverResponse:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)UpdateDeviceRankProfile;
- (void)saveRankProfile;
- (id)getRankProfileCacheOldPath;
- (id)getRankProfileCacheFilePath;
- (id)getRankCoverCacheOldPath;
- (id)getRankCoverCacheFilePath;
- (unsigned int)saveCoverImg:(id)arg1;
- (id)loadCoverImgCache;
- (void)tryLoadDeviceRankProfile;
- (void)UpdateDeviceRankMotto:(id)arg1;
- (id)GetDeviceRankMotto;
- (void)UpdateDeviceRankCoverWithImg:(id)arg1;
- (id)GetDeviceRankCoverImg;
- (id)GetDeviceRankProfileWithBrandUser:(id)arg1 UserName:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
