//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "APAccessDelegate.h"
#import "APAuthDelegate.h"
#import "APCheckDelegate.h"
#import "APCheckPwdDelegate.h"
#import "APProtalDelegate.h"
#import "INetworkStatusMgrExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "MMWebViewDelegate.h"
#import "PublicWifiApInfoListViewControllerDelegate.h"
#import "PublicWifiConnectedViewControllerDelegate.h"
#import "PublicWifiFrontInfoViewControllerDelegate.h"
#import "PublicWifiGetA8KeyLogicDelegate.h"
#import "PublicWifiNetworkLogicMgrDelegate.h"
#import "PublicWifiReportLocationLogicDelegate.h"
#import "PublicWifiViewControllerDelegate.h"

@class APAccess, APAuth, APCheck, APCheckPwd, APPortal, CContact, MMWebViewController, NSString, PublicWifiCache, PublicWifiGetA8KeyLogic, PublicWifiNetworkLogicMgr, PublicWifiReportLocationLogic;

@interface PublicWifiManager : MMService <APAuthDelegate, APCheckDelegate, APAccessDelegate, APProtalDelegate, PublicWifiGetA8KeyLogicDelegate, PublicWifiViewControllerDelegate, PublicWifiFrontInfoViewControllerDelegate, PublicWifiConnectedViewControllerDelegate, INetworkStatusMgrExt, APCheckPwdDelegate, PublicWifiNetworkLogicMgrDelegate, PublicWifiReportLocationLogicDelegate, PublicWifiApInfoListViewControllerDelegate, MMService, MMKernelExt, MMWebViewDelegate>
{
    _Bool _isOnWifi;
    _Bool _isWifiChanged;
    _Bool _hasDoWifiManager;
    _Bool _isWaitingUserConfirm;
    _Bool _isOpenUrlProcessing;
    NSString *_currSSID;
    NSString *_currMAC;
    PublicWifiCache *_cache;
    CContact *_currContact;
    PublicWifiGetA8KeyLogic *_getA8KeyLogic;
    APAuth *_apAuth;
    APCheck *_apCheck;
    APAccess *_apAccess;
    APCheckPwd *_apCheckPwd;
    APPortal *_apPortal;
    APCheckPwd *_successedPwd;
    APPortal *_successedPortal;
    PublicWifiNetworkLogicMgr *_networkLogic;
    PublicWifiReportLocationLogic *_wifiReportLogic;
    MMWebViewController *_abroadApAuthWebViewController;
    MMWebViewController *_connectWebViewControler;
}

@property(retain, nonatomic) MMWebViewController *connectWebViewControler; // @synthesize connectWebViewControler=_connectWebViewControler;
@property(retain, nonatomic) MMWebViewController *abroadApAuthWebViewController; // @synthesize abroadApAuthWebViewController=_abroadApAuthWebViewController;
@property(retain, nonatomic) PublicWifiReportLocationLogic *wifiReportLogic; // @synthesize wifiReportLogic=_wifiReportLogic;
@property(retain, nonatomic) PublicWifiNetworkLogicMgr *networkLogic; // @synthesize networkLogic=_networkLogic;
@property(retain, nonatomic) APPortal *successedPortal; // @synthesize successedPortal=_successedPortal;
@property(retain, nonatomic) APCheckPwd *successedPwd; // @synthesize successedPwd=_successedPwd;
@property(retain, nonatomic) APPortal *apPortal; // @synthesize apPortal=_apPortal;
@property(retain, nonatomic) APCheckPwd *apCheckPwd; // @synthesize apCheckPwd=_apCheckPwd;
@property(retain, nonatomic) APAccess *apAccess; // @synthesize apAccess=_apAccess;
@property(retain, nonatomic) APCheck *apCheck; // @synthesize apCheck=_apCheck;
@property(retain, nonatomic) APAuth *apAuth; // @synthesize apAuth=_apAuth;
@property(retain, nonatomic) PublicWifiGetA8KeyLogic *getA8KeyLogic; // @synthesize getA8KeyLogic=_getA8KeyLogic;
@property(nonatomic) _Bool isOpenUrlProcessing; // @synthesize isOpenUrlProcessing=_isOpenUrlProcessing;
@property(nonatomic) _Bool isWaitingUserConfirm; // @synthesize isWaitingUserConfirm=_isWaitingUserConfirm;
@property(nonatomic) _Bool hasDoWifiManager; // @synthesize hasDoWifiManager=_hasDoWifiManager;
@property(nonatomic) _Bool isWifiChanged; // @synthesize isWifiChanged=_isWifiChanged;
@property(retain, nonatomic) CContact *currContact; // @synthesize currContact=_currContact;
@property(nonatomic) _Bool isOnWifi; // @synthesize isOnWifi=_isOnWifi;
@property(retain, nonatomic) PublicWifiCache *cache; // @synthesize cache=_cache;
@property(copy, nonatomic) NSString *currMAC; // @synthesize currMAC=_currMAC;
@property(copy, nonatomic) NSString *currSSID; // @synthesize currSSID=_currSSID;
- (void).cxx_destruct;
- (void)sendCloseEventToObserver;
- (void)onSendAddWiFiBrandContactResponse:(id)arg1;
- (void)showErrorViewControllerWithErrMsg:(id)arg1 fromViewContorller:(id)arg2;
- (void)showViewControllerWithApBase:(id)arg1 fromViewController:(id)arg2 isNeedConfirm:(_Bool)arg3;
- (void)connectToFreeWifiWithQRCode:(id)arg1 viewController:(id)arg2 scene:(unsigned int)arg3;
- (void)onPublicWifiApInfoSelected:(id)arg1;
- (void)onReportLocationFailed:(unsigned long long)arg1;
- (void)onReportLocationAndGetBizWifiInfo:(id)arg1;
- (void)handleLocationInfoReportWithApBase:(id)arg1;
- (_Bool)handleLocateRequestFromViewController:(id)arg1 scene:(unsigned int)arg2;
- (void)handle3rdAppWithUrl:(id)arg1;
- (void)doApPortalAfterGetA8KeyResult:(id)arg1 viewController:(id)arg2 scene:(unsigned int)arg3 pageInfo:(id)arg4 tid:(id)arg5 openid:(id)arg6 appid:(id)arg7;
- (void)doApAuthAfterGetA8KeyResult:(id)arg1 viewController:(id)arg2 scene:(unsigned int)arg3 pageInfo:(id)arg4 isNeedConfirm:(_Bool)arg5;
- (void)refreshApAuthPageIfNeed;
- (_Bool)isBindAboardPhone;
- (void)handleGetA8KeyResult:(id)arg1 withViewController:(id)arg2 withScene:(unsigned int)arg3;
- (void)requestAddContactWithApbase:(id)arg1;
- (_Bool)verifyCurrentSSid;
- (void)setConfirmStateToConnect:(_Bool)arg1;
- (void)logout;
- (void)cleanCache;
- (id)showUrlOfCurrApAuth;
- (_Bool)shouldOpenWebview;
- (void)restartApAuth;
- (id)ssidOfApAuth;
- (int)stateOfApAuth;
- (void)userConfirm;
- (void)onPublicWifiApInfoViewContorllerWillGoBack;
- (void)wifiConnenctedViewControlerWillDone:(_Bool)arg1;
- (void)frontViewControllerWillGoBack:(_Bool)arg1;
- (void)wifiViewControllerWillGoBack;
- (void)didQRCodeExpiredOfGetA8KeyLogic:(id)arg1 qrCode:(id)arg2;
- (void)didFailOfGetA8KeyLogic:(id)arg1;
- (void)didSuccessOfGetA8KeyLogic:(id)arg1 result:(id)arg2;
- (void)didFailedWithApCheckPwd:(id)arg1 errorMsg:(id)arg2;
- (void)gotoApPortalWithApCheckPwd:(id)arg1 tid:(id)arg2 openId:(id)arg3 appid:(id)arg4;
- (void)gotoApAuthWithApCheckPwd:(id)arg1 protolType:(unsigned int)arg2;
- (void)didSuccessOfApCheckPwd:(id)arg1;
- (void)didRunningOfApCheckPwd:(id)arg1;
- (void)didReadyWithApCheckPwd:(id)arg1 protolType:(unsigned int)arg2;
- (void)didFailOfApCheck:(id)arg1 withErrCode:(int)arg2;
- (void)didSuccessOfApCheck:(id)arg1;
- (void)didFailOfAPPortal:(id)arg1 errMsg:(id)arg2;
- (void)didSuccessOfAPPortal:(id)arg1;
- (void)didStartApPortal:(id)arg1;
- (void)didReadyOfApPortal:(id)arg1;
- (void)didExpiredOfApAuth:(id)arg1;
- (void)didFailOfApAuth:(id)arg1 withErrCode:(int)arg2;
- (void)didSuccessOfApAuth:(id)arg1;
- (void)didStartApAuth:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (id)getAbroadApAuthUrlWithSSID:(id)arg1;
- (_Bool)isUserStayOnConnectingView;
- (void)readWifiSetting;
- (void)doGetA8KeyForWifiWithQRCode:(id)arg1 scene:(unsigned int)arg2 viewController:(id)arg3;
- (void)doApAccessWithUrl:(id)arg1;
- (void)doWifiManage;
- (void)handleOffWifi;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onAuthOK;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
