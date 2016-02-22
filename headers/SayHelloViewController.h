//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactsItemViewDelegate.h"
#import "SayHelloDataLogicDelegate.h"
#import "SeePeopleNearByUIDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "VerifyPhoneDelegate.h"
#import "WCActionSheetDelegate.h"
#import "tableViewDelegate.h"

@class CContactVerifyLogic, FindContactSearchViewCellInfo, MMNearByHeaderView, MMTableView, MMTableViewInfo, NSString, SayHelloDataLogic, SeePeopleNearByLogicController, UILabel, UIView;

@interface SayHelloViewController : MMUIViewController <SeePeopleNearByUIDelegate, tableViewDelegate, UITableViewDelegate, UITableViewDataSource, SayHelloDataLogicDelegate, WCActionSheetDelegate, ContactsItemViewDelegate, VerifyPhoneDelegate>
{
    MMTableView *m_tableView;
    MMTableViewInfo *m_tableViewInfoNoHello;
    UIView *m_headerSearchView;
    FindContactSearchViewCellInfo *m_searchInfo;
    unsigned int m_uiScene;
    SayHelloDataLogic *m_DataLogic;
    CContactVerifyLogic *m_oContactVerifyLogic;
    UILabel *m_labelTip;
    MMNearByHeaderView *m_nearByHeaderView;
    SeePeopleNearByLogicController *m_peopleNearByLogicController;
}

+ (void)makeHelloCell:(id)arg1 helloMsg:(id)arg2 delegate:(id)arg3;
+ (void)OnViewDetail:(id)arg1 prarentViewController:(id)arg2;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)OnSayHelloDataSendVerifyMsg:(id)arg1;
- (void)OnSayHelloDataVerifyContactOK:(id)arg1;
- (void)onContactsItemViewRightButtonClick:(id)arg1;
- (void)verifyContactWithOpCode:(id)arg1 opcode:(unsigned int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnClear:(id)arg1;
- (void)OnReturn;
- (id)GetClearTip;
- (void)bindPhoneReturn;
- (id)getViewController;
- (void)OnSayHelloDataChange;
- (void)willAppear;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)onAddContact;
- (void)updateNoHello;
- (void)addQQFriend;
- (void)addGoogleFriend;
- (void)addMobileFriend;
- (void)updateHeaderView;
- (id)makeNewFriendHeaderView;
- (id)makeNearByHeaderView;
- (_Bool)shouldShowNearByHeaderView;
- (void)onClearMyLbsDataFinishedWithResult:(_Bool)arg1;
- (void)onClearNearHeaderClicked:(id)arg1;
- (void)initTableView;
- (void)initData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

