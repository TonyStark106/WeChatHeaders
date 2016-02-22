//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt.h"
#import "IEnterpriseContactMgrExt.h"
#import "IEnterpriseGroupMgrExt.h"
#import "IEnterpriseMsgExt.h"
#import "IMMNewSessionMgrExt.h"
#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface EnterpriseSessionMgr : MMService <IEnterpriseMsgExt, IEnterpriseContactMgrExt, IEnterpriseGroupMgrExt, IMMNewSessionMgrExt, IContactMgrExt, MMService>
{
    NSMutableDictionary *m_brandStorages;
    NSMutableDictionary *m_mainSessionInfoItems;
}

- (void).cxx_destruct;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)isUser:(id)arg1 hasSpecalSessionInfo:(id *)arg2;
- (void)isMessage:(id)arg1 Handled:(_Bool *)arg2;
- (void)isUser:(id)arg1 Handled:(_Bool *)arg2;
- (void)loadMainSessionInfo;
- (void)saveMainSessionInfo;
- (id)filePathForMainSessionInfoCache;
- (void)updateMainSessionInfo:(id)arg1 ForBrand:(id)arg2;
- (id)updateMainSessionInfoForBrand:(id)arg1;
- (id)mainSessionForBrand:(id)arg1;
- (id)LastMsgForBrand:(id)arg1;
- (void)onModifyEnterpriseContact:(id)arg1;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2;
- (void)OnUnReadEnterpriseMsgCountChange:(id)arg1 Brand:(id)arg2;
- (void)OnModEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)OnSyncReadMsg:(id)arg1 Brand:(id)arg2 ReadMsgCount:(unsigned int)arg3;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2 DelAll:(_Bool)arg3;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2 MsgWrap:(id)arg3;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2;
- (void)OnAddEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2 Brand:(id)arg3;
- (void)deleteSession:(id)arg1 forBrand:(id)arg2;
- (void)deleteAllSessionForBrand:(id)arg1;
- (void)clearAtMeCountOfSession:(id)arg1 forBrand:(id)arg2;
- (void)clearAllTypeCountOfSession:(id)arg1 forBrand:(id)arg2;
- (void)clearNewAllTypeCountOfAllSessionForBrand:(id)arg1;
- (void)updateSession:(id)arg1 forBrand:(id)arg2;
- (void)updateSessionInfo:(id)arg1 forBrand:(id)arg2;
- (id)sessionInfo:(id)arg1 forBrand:(id)arg2;
- (id)sessionInfoAtIndex:(long long)arg1 forBrand:(id)arg2;
- (unsigned int)sessionCountForBrand:(id)arg1;
- (id)InfoItemForBrand:(id)arg1;
- (id)storageForBrand:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

