//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IQQMailExt.h"
#import "MMMailContactSelectViewDelegate.h"
#import "MailAttachmentControlViewDelegate.h"
#import "MailAttachmentViewDelegate.h"
#import "MailContactFilterViewDelegate.h"
#import "MailContentViewDelegate.h"
#import "MailReceiverEditViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class CMail, MMTableView, MailAttachmentControlView, MailContactFilterView, MailContentView, MailReceiverEditView, MailSubjectEditView, NSMutableArray, NSString, NSTimer, UIView;

@interface WriteMailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UITextViewDelegate, WCActionSheetDelegate, UINavigationControllerDelegate, MailContactFilterViewDelegate, MailContentViewDelegate, MailAttachmentViewDelegate, UIAlertViewDelegate, IQQMailExt, MMMailContactSelectViewDelegate, MailReceiverEditViewDelegate, MailAttachmentControlViewDelegate>
{
    MMTableView *m_tableView;
    MailContactFilterView *m_filterView;
    MailContentView *m_contentView;
    MailReceiverEditView *m_receiverView;
    MailReceiverEditView *m_ccView;
    MailReceiverEditView *m_bccView;
    MailSubjectEditView *m_topicView;
    UIView *m_ccBccView;
    NSMutableArray *m_arrShowViews;
    MailAttachmentControlView *m_attachmentControlView;
    int m_firstResponderStatus;
    int m_ccBccFlodStatus;
    CMail *m_mail;
    NSMutableArray *m_arrReceiver;
    NSMutableArray *m_arrCc;
    NSMutableArray *m_arrBcc;
    NSMutableArray *m_arrAttachment;
    unsigned int m_uiMailType;
    double m_fKeyboardHeight;
    NSTimer *m_autoSaveTimer;
    unsigned int m_firstResponderTag;
    NSMutableArray *m_arrAttachmentView;
    NSMutableArray *m_arrAllMailContacts;
    NSString *m_nsMailID;
    _Bool m_bFromReadMail;
    _Bool m_bFirstFixContectHeight;
    _Bool m_bPresentModal;
}

@property(nonatomic) _Bool m_bPresentModal; // @synthesize m_bPresentModal;
@property(nonatomic) _Bool m_bFromReadMail; // @synthesize m_bFromReadMail;
@property(retain, nonatomic) NSMutableArray *m_arrAllMailContacts; // @synthesize m_arrAllMailContacts;
- (void).cxx_destruct;
- (void)onMailContactSelectDone:(id)arg1 userInfo:(id)arg2;
- (void)onMailContactChanged:(id)arg1;
- (void)onTextFieldNextItem:(id)arg1;
- (void)onTextFieldFinishEdit:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onMailReceiverEditViewHeightChanged:(id)arg1;
- (void)onMailContactDoubleClicked:(id)arg1;
- (void)onAddMailContact:(id)arg1;
- (long long)indexForView:(id)arg1;
- (void)onFirstResponderResigned;
- (id)getViewController;
- (id)initWithMail:(id)arg1 mailID:(id)arg2 mailType:(unsigned int)arg3;
- (void)uploadAttachment:(id)arg1 name:(id)arg2;
- (id)initWithMail:(id)arg1 mailType:(unsigned int)arg2;
- (id)initWithNewEmptyMail:(id)arg1;
- (id)initWithEmptyMail:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)releaseAutoSaveTimer;
- (void)initAutoSaveTimer;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)ReleaseTextField;
- (void)viewDidUnload;
- (_Bool)isTextFirstResponder;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnUploadData:(id)arg1 filename:(id)arg2 ErrNo:(int)arg3;
- (void)OnGetAllMailContact:(id)arg1 ErrNo:(int)arg2;
- (void)OnDeleteAttachment:(id)arg1;
- (void)doDeleteAttachment:(unsigned int)arg1;
- (void)OnResend:(id)arg1;
- (void)OnUploadSuccess;
- (void)contentViewDidFinishEdit;
- (void)filterViewBeginDragging;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)contactReturn:(id)arg1;
- (void)didStartWriteMailContent;
- (void)contentLengthChanged:(id)arg1;
- (void)contentViewNeedSetContentOffset:(double)arg1;
- (id)getFilterName:(id)arg1;
- (void)reloadTableView;
- (void)setContentResponderStatus;
- (void)onMainContentTap:(id)arg1;
- (void)initView;
- (void)initTableItemViews;
- (void)updateRightBarButton;
- (void)OnReturn;
- (void)CheckCancel:(id)arg1;
- (void)initData;
- (_Bool)SendBtnEnable;
- (void)RealSend;
- (void)onSend;
- (void)OnComposeSend:(int)arg1;
- (void)doSearch:(id)arg1;
- (void)fixFilterView;
- (void)onAutoSaveTimer;
- (void)deleteDraft;
- (void)loadDraft;
- (void)saveDraft;
- (void)setccBccFlodStatus:(int)arg1;
- (void)setNextFirstRespondStatus:(int)arg1;
- (void)setNewFirstResponse;
- (void)setFirstRespondStatus:(int)arg1;
- (int)getFirstResponderStatusForRow:(long long)arg1;
- (int)getNextResponderStautsForFirstResponderStatus:(int)arg1;
- (id)getViewForFirstResponderStatus:(int)arg1;
- (void)staticReloadTableView;
- (id)getSelfMailContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

