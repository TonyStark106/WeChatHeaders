//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"

@class NSString;

@interface WCPayTransferMoneyStatusViewController : WCPayBaseViewController <ILinkEventExt>
{
    id <WCPayTransferMoneyStatusViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)OnConfirmTransferMoneyBtnDone;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)OnHistoryOrderDetailBack;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

