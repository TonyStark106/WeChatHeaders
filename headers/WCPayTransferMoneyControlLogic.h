//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IContactMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "WCBaseControlLogicDeleagte.h"
#import "WCBaseControlMgrExt.h"
#import "WCPayPayMoneyLogicDelegate.h"
#import "WCPayTransferMoneyViewControllerDelegate.h"
#import "WCPayTransferSelectContactsViewControllerDelegate.h"
#import "WCPayTransferSelectSessionViewControllerDelegate.h"

@class JSEvent, NSString, WCPayPayMoneyLogic;

@interface WCPayTransferMoneyControlLogic : WCPayControlLogic <WCBaseControlLogicDeleagte, WCPayPayMoneyLogicDelegate, WCPayTransferSelectContactsViewControllerDelegate, WCPayTransferSelectSessionViewControllerDelegate, WCPayTransferMoneyViewControllerDelegate, WCBaseControlMgrExt, IContactMgrExt, MMTipsViewControllerDelegate>
{
    WCPayPayMoneyLogic *m_payLogic;
    int m_enWCPayTransferMoneyControlLogicScene;
    NSString *m_nsA8KeyResponseUrl;
    JSEvent *m_jsEvent;
    _Bool _disableEditMoney;
}

- (void).cxx_destruct;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)showTransferChargeTipsView;
- (void)OnThreeInterruptContinueTransfer;
- (void)OnInterruptContinueTransfer;
- (void)onModifyContact:(id)arg1;
- (void)OnGetTransferUserName:(id)arg1 Error:(id)arg2;
- (void)OnRetrySendTransferMessage:(id)arg1 Error:(id)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetTransferPrepayRequest:(id)arg1 Error:(id)arg2;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)WCPayTransferMoneyViewControllerNext:(id)arg1;
- (void)WCPayTransferMoneyViewControllerRightActionCancel:(_Bool)arg1;
- (void)WCPayTransferMoneyViewControllerCancel:(_Bool)arg1;
- (void)OnWCPayTransferSelectChatRoomContactViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnWCPayTransferSelectChatRoomContactViewControllerFilterContactCandidate:(id)arg1;
- (void)OnWCPayTransferSelectChatRoomContactViewControllerBack;
- (void)OnWCPayTransferSelectSessionViewControllerNewSession;
- (void)OnWCPayTransferSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnWCPayTransferSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnWCPayTransferSelectSessionViewControllerBack;
- (void)OnWCPayTransferSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnWCPayTransferSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnWCPayTransferSelectContactsViewControllerBack;
- (void)OnOpenOrderList;
- (void)OnContinueTransfer;
- (_Bool)gotoViewController:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)stopLogic;
- (void)dealloc;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1;
- (id)initWithSessionSelectedUserName:(id)arg1 placeHolderMoney:(long long)arg2 disableEditMoney:(_Bool)arg3;
- (id)initWithSessionSelectedUserName:(id)arg1;
- (id)initWithA8KeyResponseUrl:(id)arg1;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

