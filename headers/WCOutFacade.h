//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IFriendListMgrExt.h"
#import "IMMWebViewControllerDeepLinkExt.h"
#import "IMsgExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "IWCOutAddressBookExt.h"
#import "IWCOutCallExt.h"
#import "MMService.h"

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, OrderedDictionary, PhoneNumberFormatLogic, WCOutAddressBookLogic, WCOutCallLogic, WCOutCountryCodeLogic, WCOutDataBase;

@interface WCOutFacade : MMService <IFriendListMgrExt, IWCOutAddressBookExt, IWCOutCallExt, IMsgExt, IMMWebViewControllerDeepLinkExt, IVOIPUILogicMgrExt, MMService>
{
    NSMutableDictionary *m_hotCountryCodeDic;
    OrderedDictionary *m_lastCallItemOrderDic;
    NSMutableArray *m_wcoutContactItemArray;
    NSMutableDictionary *m_phoneNumToWCOutContact;
    unsigned int m_lastDownloadMFriendListTime;
    unsigned int m_lastReportContactTime;
    WCOutDataBase *m_dataBase;
    WCOutCountryCodeLogic *m_countryCodeLogic;
    WCOutAddressBookLogic *m_addressBookLogic;
    PhoneNumberFormatLogic *m_phoneNumberFormatLogic;
    WCOutCallLogic *m_callLogic;
    NSRecursiveLock *m_oLock;
}

+ (void)reportClickStatWithType:(unsigned long long)arg1;
+ (void)reportCallEntraceWithType:(unsigned long long)arg1;
+ (void)reportRestrictionCountryCode:(id)arg1;
+ (void)reportTalkingClickStatWithType:(unsigned long long)arg1;
+ (_Bool)hasMainFrameTopRightBtn;
+ (_Bool)isOpenWCOutPlugin;
- (void).cxx_destruct;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)accessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3;
- (void)canAccessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3 Ret:(_Bool *)arg4 NeedCheckBitset:(_Bool *)arg5;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onFriendListUpdated:(id)arg1 ErrorCode:(unsigned int)arg2 Message:(id)arg3;
- (void)OnPhoneContactLoadedFail;
- (void)OnPhoneContactLoadedComplete;
- (void)OnCallEndFinish;
- (_Bool)canStartPSTN;
- (void)InternalCallWCoutContact:(id)arg1 FromViewController:(id)arg2 AndEntrance:(unsigned long long)arg3;
- (id)createWCOutRecentCallItemByCallItem:(id)arg1;
- (id)createWCOutRecentCallItemByFullPhoneNum:(id)arg1 CountryCode:(id)arg2 FromContact:(id)arg3;
- (_Bool)updateWCOutContactsInfoWithMfriendList:(id)arg1;
- (_Bool)loadWCOutPhoneContactsMMInfo;
- (void)updateWCOutPhoneContactsMMInfoAsync;
- (_Bool)loadWCOutPhoneContactsFromMMPhoneContacts;
- (void)loadWCOutPhoneContactAsync;
- (void)loadAllDataAsync;
- (void)loadLastCallItemsAndHotCountryCodeDic;
- (void)loadHotCountryCode;
- (void)reportContactAndRecentContactStat;
- (id)getPhoneNumFromFullPhoneNum:(id)arg1 countryCode:(id)arg2;
- (id)getPhoneNumFromFullPhoneNum:(id)arg1;
- (id)getCountryCodeFromFullPhoneNum:(id)arg1;
- (id)getPurePhoneNum:(id)arg1;
- (id)getFormatedForNum:(id)arg1;
- (id)getFormatedForNum:(id)arg1 countryCode:(id)arg2;
- (id)getFormatedForFullPhoneNum:(id)arg1 countryCode:(id)arg2;
- (id)GetHotCountryCodeDicLog;
- (id)countryNameForCountryCode:(id)arg1;
- (_Bool)isValidCountryCode:(id)arg1;
- (_Bool)isRestrictedCountryCode:(id)arg1;
- (id)getAllCountryCodes;
- (id)defaultCoutryCode;
- (id)getHotCountryCodeList;
- (_Bool)addressBookStatusIsDenied;
- (void)deleteLastCallWithPhoneNum:(id)arg1 WithCountryCode:(id)arg2;
- (_Bool)deleteRecentCallByPhoneContact:(id)arg1;
- (_Bool)deleteRecentCallByPhoneNum:(id)arg1 withCountryCode:(id)arg2;
- (_Bool)deleteRecentCallByPhoneNum:(id)arg1;
- (_Bool)deleteRecentCallById:(int)arg1;
- (int)insertRecentCall:(id)arg1;
- (id)findWCOutContactByPhoneNumInput:(id)arg1;
- (id)findWCOutContactByPhoneNum:(id)arg1;
- (id)selectRecentCallForWCOutContact:(id)arg1 limit:(unsigned int)arg2;
- (id)selectAllRecentCallForWCOutContact:(id)arg1;
- (id)getLastRecentCallItems;
- (id)GetNeedShowLog;
- (id)GetCurPhoneContact;
- (id)GetCurCallItem;
- (_Bool)pressKeyWhileCallingWithKeyCode:(int)arg1;
- (void)setSpeaker:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (void)hangUpCall;
- (void)callWCOutCallItem:(id)arg1 FromViewController:(id)arg2 AndEntrance:(unsigned long long)arg3;
- (void)callPhoneNumber:(id)arg1 WithCountryCode:(id)arg2 FromViewController:(id)arg3 AndEntrance:(unsigned long long)arg4;
- (void)callFullPhoneNumber:(id)arg1 OfContact:(id)arg2 FromViewController:(id)arg3 AndEntrace:(unsigned long long)arg4;
- (void)lazyInitLogics;
- (_Bool)loadAllData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

