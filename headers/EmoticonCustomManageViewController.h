//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CustomEmoticonConflictViewDelegate.h"
#import "CustomEmoticonSynchronizeViewDelegate.h"
#import "EmoticonBackUpMgrExt.h"
#import "EmoticonBackUpMgrViewExt.h"
#import "EmoticonBackupOperateMgrExt.h"
#import "EmoticonCustomManageViewDelegate.h"
#import "IEmoticonMgrExt.h"
#import "MMImagePickerManagerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class EmoticonCustomManageDataLogic, MMTableView, NSString, UIButton, UILabel, UIView;

@interface EmoticonCustomManageViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, EmoticonCustomManageViewDelegate, IEmoticonMgrExt, MMImagePickerManagerDelegate, EmoticonBackupOperateMgrExt, EmoticonBackUpMgrExt, EmoticonBackUpMgrViewExt, UIAlertViewDelegate, CustomEmoticonSynchronizeViewDelegate, CustomEmoticonConflictViewDelegate>
{
    _Bool m_isDeleteMode;
    MMTableView *m_tableView;
    EmoticonCustomManageDataLogic *m_dataLogic;
    UIView *m_bottomBar;
    UIButton *m_deleteButton;
    UIView *m_headerSyncView;
    UILabel *m_bottomLabel;
    UIButton *m_editButton;
}

@property(nonatomic) _Bool m_isDeleteMode; // @synthesize m_isDeleteMode;
@property(retain, nonatomic) UIButton *m_editButton; // @synthesize m_editButton;
@property(retain, nonatomic) UILabel *m_bottomLabel; // @synthesize m_bottomLabel;
@property(retain, nonatomic) UIView *m_headerSyncView; // @synthesize m_headerSyncView;
@property(retain, nonatomic) UIButton *m_deleteButton; // @synthesize m_deleteButton;
@property(retain, nonatomic) UIView *m_bottomBar; // @synthesize m_bottomBar;
@property(retain, nonatomic) EmoticonCustomManageDataLogic *m_dataLogic; // @synthesize m_dataLogic;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
- (void).cxx_destruct;
- (void)checkIfIsOnEmoticonCustomManageViewController:(_Bool *)arg1;
- (void)onCustomEmoticonConflictViewClickClose;
- (void)showHeaderViewWithoutWiFi;
- (void)hideHeaderViewOnWiFi;
- (void)onCustomEmoticonSynchronizeViewClickEdit;
- (void)onCustomEmoticonSynchronizeViewClickClose;
- (void)onEmoticonBackUpMgrRecoverAutoPauseOnWWan;
- (void)onEmoticonBackUpMgrRecoverNetworkChangeToUnreachable;
- (void)onEmoticonBackUpMgrRecoverGoon;
- (void)onEmoticonBackUpMgrRecoverPause;
- (void)onEmoticonBackUpMgrRecoverFailed;
- (void)onEmoticonBackUpMgrSyncOperate;
- (void)onEmoticonBackUpMgrRecoverComplete;
- (void)onEmoticonBackUpMgrRecoverOneEmoticon;
- (void)onDeleteBackupEmoticonFailed:(id)arg1;
- (void)onDeleteBackupEmoticonOK:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)OnUpdateEmoticonList;
- (void)onEmoticonCustomManageViewTaped:(id)arg1 andView:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (unsigned long long)alertViewDeleteTag;
- (void)deleteEmoticonFromServer;
- (void)deleteEmoticon:(id)arg1;
- (void)updateBottomDeleteButton;
- (_Bool)hasAnyEmoticonMarked;
- (void)onDeleteEmoticonConfirm:(id)arg1;
- (void)onAddCustomEmoticon;
- (unsigned long long)localEmoticonLimit;
- (void)changeToRecoveringMode;
- (void)onClickEdit;
- (void)changeToNormalMode;
- (void)changeToDeleteMode;
- (void)closeSyncView:(CDUnknownBlockType)arg1;
- (void)reloadData;
- (void)initData;
- (void)OnCancelModalView:(id)arg1;
- (void)BackButtonDown:(id)arg1;
- (long long)getCellContentViewTag;
- (double)BottomBarHeight;
- (double)GridViewItemWidth;
- (void)initTableView;
- (void)initNavigationItem;
- (void)initBottomBarView;
- (void)initBackground;
- (void)initSyncView;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

