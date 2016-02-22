//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "DesignerPortfolioCellDelegate.h"
#import "IStrangerContactMgrExt.h"
#import "MMRefreshTableFooterDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "SessionSelectControllerDelegate.h"
#import "ShareMessageConfirmLogicHelperDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCommitViewResultDelegate.h"

@class CContact, EmoticonStoreDetailCoverImageView, EmoticonStoreFootView, MMLoadingView, MMTableView, MMWebImageView, NSData, NSMutableArray, NSString, PublicNumberCell, ShareMessageConfirmLogicHelper, UIImageView, UILabel, UIView;

@interface StoreEmotionDesignerProfileViewController : MMUIViewController <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate, DesignerPortfolioCellDelegate, PBMessageObserverDelegate, IStrangerContactMgrExt, MMRefreshTableFooterDelegate, WCActionSheetDelegate, WCCommitViewResultDelegate, SessionSelectControllerDelegate, ShareMessageConfirmLogicHelperDelegate>
{
    EmoticonStoreDetailCoverImageView *_coverImageView;
    UIView *_designerContainerView;
    UILabel *_designerTitleLabel;
    UILabel *_designerDescLabel;
    PublicNumberCell *_publicNumberCell;
    UILabel *_tipsLabel;
    MMTableView *_portfolioTableView;
    UIView *_publicCellContainer;
    UIImageView *_blackImageView;
    unsigned int _designerUin;
    NSMutableArray *_emotionsList;
    NSString *_bizName;
    UIView *_tipsContainerView;
    MMWebImageView *_designerHeaderView;
    UIView *_headerView;
    UILabel *_designerNameLabel;
    NSString *_descString;
    CContact *_designerBrandContact;
    _Bool _hasLoad;
    EmoticonStoreFootView *_tailView;
    NSData *_currReqBuf;
    UIView *_loadingView;
    NSString *_oldRedirectUrl;
    NSString *_designerHeaderUrl;
    NSString *_designerName;
    ShareMessageConfirmLogicHelper *_shareHelper;
    MMLoadingView *_shareLoadingView;
}

- (void).cxx_destruct;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)OnStayAtWeChat:(id)arg1;
- (void)OnBackTo3rdApp:(id)arg1;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (_Bool)checkMsgControllerFrom:(id)arg1;
- (id)genShareFriendMessage:(id)arg1;
- (id)genTimelineUserData;
- (id)genUploadTask;
- (void)shareToTimeline;
- (void)shareToFriend;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onOperate:(id)arg1;
- (void)updateRightBarButton;
- (void)OnShowAlertWithIKnow:(id)arg1;
- (void)OnShowAlertWithOK:(id)arg1;
- (void)OnStopLoading;
- (void)OnStartLoadingAndShowStringBlocked:(id)arg1;
- (void)OnStopLoadingAndShowError:(id)arg1;
- (void)OnStopLoadingAndShowOK:(id)arg1;
- (void)OnStartLoadingAndShowString:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)OnCancelModalView:(id)arg1;
- (void)jumpToPublicNumber;
- (void)setupPortfolioTableView;
- (void)setupTableHeaderView;
- (void)setupViews;
- (void)updateDesignerBrand;
- (void)onGotPersonalDesignerResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setPreviewUrl:(id)arg1;
- (id)initWithExtContent:(id)arg1;
- (void)setDesignerUin:(unsigned int)arg1 andOldRedirectUrl:(id)arg2 andDesignerName:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

