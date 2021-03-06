//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesControlLogic.h"

#import "WCBaseControlLogicDeleagte.h"
#import "WCBaseControlMgrExt.h"
#import "WCRedEnvelopesGreetingReceiveViewDelegate.h"
#import "WCRedEnvelopesGreetingSenderHomeViewDelegate.h"
#import "WCRedEnvelopesMultiSelectContactsViewControllerDelegate.h"
#import "WCRedEnvelopesReceiveHomeViewDelegate.h"
#import "WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate.h"
#import "WCRedEnvelopesSessionSelectViewControllerDelegate.h"

@class NSString, WCRedEnvelopesGreetingReceiveView, WCRedEnvelopesGreetingSenderHomeView, WCRedEnvelopesReceiveHomeView;

@interface WCRedEnvelopesGreetingReceiveControlLogic : WCRedEnvelopesControlLogic <WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesReceiveHomeViewDelegate, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate, WCRedEnvelopesSessionSelectViewControllerDelegate, WCRedEnvelopesMultiSelectContactsViewControllerDelegate, WCRedEnvelopesGreetingReceiveViewDelegate, WCRedEnvelopesGreetingSenderHomeViewDelegate>
{
    int m_scene;
    WCRedEnvelopesReceiveHomeView *introView;
    WCRedEnvelopesGreetingReceiveView *receiveView;
    WCRedEnvelopesGreetingSenderHomeView *senderView;
    _Bool m_bDidStopCoinAnimation;
    _Bool m_bDidCompleteOpen;
}

- (void).cxx_destruct;
- (void)WCRedEnvelopesGreetingSenderHomeViewBack;
- (id)WCRedEnvelopesGreetingReceiveViewGetData;
- (void)WCRedEnvelopesGreetingReceiveViewBack;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)dismissCurrentViewSendShareRedEnvelopes;
- (void)OnThanksForRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnClearserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)showReceiveView:(_Bool)arg1 NoShowIcon:(_Bool)arg2;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (void)OnOpenRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnReceiverQueryRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)showDetailView;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)OnSelectMutilContactsButton;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)OnGoToBalanceDetail;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (_Bool)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)WCRedEnvelopesReceiveHomeViewOpenList;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)stopLogic;
- (void)startLogic;
- (void)stopLoading;
- (id)initWithData:(id)arg1 Scene:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

