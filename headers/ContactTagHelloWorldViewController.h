//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IContactLabelMgrExt.h"
#import "MMTableViewInfoDelegate.h"
#import "MultiSelectContactsViewControllerDelegate.h"

@class MMTableViewInfo, NSString, UIButton, UILabel, UIView;

@interface ContactTagHelloWorldViewController : MMUIViewController <IContactLabelMgrExt, MMTableViewInfoDelegate, MultiSelectContactsViewControllerDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    UILabel *m_labelTipTitle;
    UILabel *m_labelTip;
    UIButton *m_btnTip;
    UIView *_headerView;
    UIView *_footerView;
    _Bool _bNeedReload;
    _Bool _bNeedGetTagFromServer;
    _Bool _bNewTagBtnEnable;
}

- (void).cxx_destruct;
- (void)onAllContactLabelUpdated:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)setNeedReload;
- (void)selectContacts;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)makeNewContactTag:(id)arg1;
- (void)UpdateViewForNoContactTag;
- (void)ResetViews;
- (void)onDismiss:(id)arg1;
- (void)reloadDataAndView;
- (id)makeNoSeparatorLineFooterView:(id)arg1;
- (id)makeExistTagHeaderView;
- (void)onEditContactLabel:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

