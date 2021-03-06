//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ChatRoomMemberGridViewDelegate.h"
#import "IAutoSetRemarkExt.h"
#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"
#import "IOplogExt.h"
#import "MMTableViewInfoDelegate.h"
#import "MultiSelectContactsViewControllerDelegate.h"
#import "ShareFriendOnChatDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "contactInfoDelegate.h"
#import "contactVerifyLogicDelegate.h"
#import "tableViewDelegate.h"

@class CContact, CContactVerifyLogic, DelaySwitchSettingLogic, MMTableViewInfo, NSArray, NSIndexPath, NSMutableArray, NSString, NameEditorViewController, ShareFriendOnChatLogicController, UIButton, UIView;

@interface ChatRoomInfoViewController : MMUIViewController <tableViewDelegate, ChatRoomMemberGridViewDelegate, MMTableViewInfoDelegate, contactInfoDelegate, MultiSelectContactsViewControllerDelegate, IContactMgrExt, contactVerifyLogicDelegate, ShareFriendOnChatDelegate, IGroupMgrExt, UIAlertViewDelegate, WCActionSheetDelegate, IAutoSetRemarkExt, IOplogExt>
{
    CContact *m_chatRoomContact;
    NSArray *m_arrMemberList;
    id <chatRoomInfoDelegate><chatRoomSettingDelegate><ShareFriendOnChatDelegate> m_delegate;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSMutableArray *m_arrNeedVerifyUsrName;
    UIButton *m_muteButton;
    UIView *m_titleView;
    _Bool m_bDeleteStatus;
    _Bool m_bFromAddressBook;
    _Bool m_isChatStatusNotifyOpen;
    MMTableViewInfo *m_tableViewInfo;
    ShareFriendOnChatLogicController *m_shareMyFriendLogic;
    _Bool m_isShowDislayName;
    _Bool m_bIsShowNotificationSectionIndexAtFirst;
    NSIndexPath *m_notificationSectionIndex;
    _Bool m_bIsShowNickNameSectionIndexAtFirst;
    NSIndexPath *m_showNicknameSectionIndex;
    unsigned long long m_nCellCnt;
    unsigned long long m_nCellCol;
    NameEditorViewController *m_CurrentVC;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
}

@property(nonatomic) _Bool m_bIsShowNickNameSectionIndexAtFirst; // @synthesize m_bIsShowNickNameSectionIndexAtFirst;
@property(nonatomic) _Bool m_bIsShowNotificationSectionIndexAtFirst; // @synthesize m_bIsShowNotificationSectionIndexAtFirst;
@property(nonatomic) _Bool m_bFromAddressBook; // @synthesize m_bFromAddressBook;
@property(retain, nonatomic) ShareFriendOnChatLogicController *m_shareMyFriendLogic; // @synthesize m_shareMyFriendLogic;
@property(retain, nonatomic) UIButton *m_muteButton; // @synthesize m_muteButton;
@property(nonatomic) __weak id <chatRoomInfoDelegate><chatRoomSettingDelegate><ShareFriendOnChatDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
- (void).cxx_destruct;
- (void)changeSetting;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)processModContact:(id)arg1;
- (id)genErrorString:(id)arg1 needVerify:(_Bool *)arg2;
- (id)getErrorContactName:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)quitChatRoom;
- (void)verifyContact;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned int)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)addMembersToChatRoom:(id)arg1;
- (void)OnAddGroupMember:(id)arg1 withStatus:(unsigned int)arg2 memberList:(id)arg3 contactList:(id)arg4 Error:(id)arg5;
- (_Bool)canShowUpgradeStatus;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)setShowDisplayName:(id)arg1;
- (void)showSetRoomDisplayName;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)setChatRoomDisplayName:(id)arg1 vc:(id)arg2;
- (id)getDisplayName;
- (void)bindCardUpgradeChatRoom;
- (void)setShowRemoveMember;
- (void)onDeleteMember:(id)arg1;
- (void)addMember;
- (void)openContactInfo:(id)arg1;
- (void)onEnterChat;
- (void)dealloc;
- (id)init;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadMemberListAndView;
- (void)removeCoverView;
- (void)hideCoverView;
- (void)startCoverAnimOnIndexPath:(id)arg1;
- (void)initView;
- (void)doReset;
- (void)updateMemberView;
- (void)initFooterView;
- (void)showImageBrowser;
- (void)setTopSession;
- (void)onOpenWXTalk;
- (void)onEditAndSearch;
- (void)onQuit:(id)arg1;
- (void)onQRCodeView;
- (void)makeQRInfoCell:(id)arg1;
- (void)makeUpgradeCell:(id)arg1;
- (void)showSetTopicView;
- (void)setChatRoomTopic:(id)arg1;
- (void)initData;
- (id)makeEnterBtn;
- (void)reloadTableData;
- (void)reloadProfileTableData;
- (id)makeMemListSection;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)updateBgView:(id)arg1 atIndex:(unsigned long long)arg2 CellInfo:(id)arg3;
- (void)updateToNormalStatusEx;
- (unsigned long long)getBtnList:(id)arg1;
- (void)loadMemberList;
- (void)resortMemList;
- (void)tryGetContactUsrImg;
- (void)initTitleView;
- (void)updateTitleView;
- (void)onFinishedShareMyFriend:(_Bool)arg1;
- (id)getMyFriendContact;
- (id)getShareMyFriendParentViewController;
- (void)OnInviteChatRoomMember:(id)arg1 Ret:(int)arg2 Error:(id)arg3;
- (_Bool)isTopSessionCountExceed;
- (void)onTopSession:(_Bool)arg1;
- (_Bool)getSessionTopped;
- (void)OnChangeMemberDisplayName:(id)arg1;
- (void)checkNeedReload:(id)arg1;
- (void)OnChangeGroup:(id)arg1;
- (void)onExpose;
- (void)switchSaveToAddressBook:(id)arg1;
- (void)onClear:(id)arg1;
- (void)showChatBackgroundConfig;
- (void)setMuteStatus:(id)arg1;
- (_Bool)setUpdateNotifyMuted:(_Bool)arg1;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)startLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

