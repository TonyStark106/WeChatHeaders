//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EGORefreshTableHeaderDelegate.h"
#import "ILinkEventExt.h"
#import "IMMFacebookMgrExt.h"
#import "INewMsgNotifyExt.h"
#import "ITranslateSnsMgrExt.h"
#import "InputControllerDelegate.h"
#import "MMImagePickerManagerDelegate.h"
#import "MMRefreshTableFooterDelegate.h"
#import "MMTipsViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCAdvertiseActionFloatForABTestDelegate.h"
#import "WCBarMessageWindowDelegate.h"
#import "WCCommentDetailViewControllerFBDelegate.h"
#import "WCCommentStrangerViewControllerDelegate.h"
#import "WCContentItemViewExt.h"
#import "WCFacadeExt.h"
#import "WCImageFullScreeViewMgrExt.h"
#import "WCListHeaderViewDelegate.h"
#import "WCPlainTextTipFullScreenViewDelegate.h"
#import "WCSetPermissionsViewControllerDelegate.h"
#import "WCTimeLineCellViewDelegate.h"
#import "WCTimeLineCommentCellViewDelegate.h"
#import "WCTimelineCellABTestTipExt.h"
#import "WXGestureDelegate.h"
#import "scrollViewDelegate.h"

@class EmoticonBoardView, MMHeadImageView, MMTableView, MMTipsViewController, MMUILabel, MMURLHandler, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UIView, WCADPageWrap, WCAdvertiseActionFloatForABTest, WCAdvertiseActionFloatView, WCBarMessageWindow, WCDataItem, WCInputController, WCListHeaderView, WCOperateFloatView, WCPlainTextTipFullScreenView, WCTimeLineFooterView, WCTimeLineHeaderView, WCUserComment, WXGesture;

@interface WCTimeLineViewController : MMUIViewController <ITranslateSnsMgrExt, INewMsgNotifyExt, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WCFacadeExt, WCTimeLineCellViewDelegate, EGORefreshTableHeaderDelegate, MMRefreshTableFooterDelegate, InputControllerDelegate, scrollViewDelegate, UIGestureRecognizerDelegate, WCListHeaderViewDelegate, MMTipsViewControllerDelegate, WCCommentStrangerViewControllerDelegate, WCCommentDetailViewControllerFBDelegate, WCTimeLineCommentCellViewDelegate, ILinkEventExt, WCSetPermissionsViewControllerDelegate, IMMFacebookMgrExt, MMImagePickerManagerDelegate, WCPlainTextTipFullScreenViewDelegate, WXGestureDelegate, WCContentItemViewExt, WCImageFullScreeViewMgrExt, WCBarMessageWindowDelegate, WCTimelineCellABTestTipExt, UIAlertViewDelegate, WCAdvertiseActionFloatForABTestDelegate>
{
    NSMutableDictionary *m_cellHeightCache;
    NSMutableDictionary *m_cellShowItemCache;
    NSMutableDictionary *m_hasPredownload;
    struct map<long, TimeLineSectionType, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, TimeLineSectionType>>> m_sectionIndexToType;
    MMTableView *m_tableView;
    WCTimeLineHeaderView *m_headRefreshView;
    WCTimeLineFooterView *m_footerView;
    WCListHeaderView *m_headerView;
    MMTipsViewController *m_introView;
    UIButton *m_messageTipView;
    MMHeadImageView *m_messageHeaderView;
    UIView *m_blackView;
    UIImageView *m_animationView;
    WCInputController *_inputController;
    WCOperateFloatView *m_floatOperateView;
    WCAdvertiseActionFloatView *m_advertiseActionFloatView;
    WCAdvertiseActionFloatForABTest *m_advertiseFloadForABTest;
    UIButton *m_advertiseActionBtn;
    WCPlainTextTipFullScreenView *m_plainTextFullScreenView;
    _Bool m_hasRefrashHead;
    _Bool m_isReflashingHead;
    _Bool m_isNoMoreData;
    _Bool m_isDelayStopFooterLoading;
    _Bool m_bTapHeaderView;
    _Bool m_bLongPressRightButton;
    _Bool m_hasSpeedyLoadView;
    _Bool m_shouldReloadData;
    UIImageView *_inputView;
    EmoticonBoardView *_emoticonBoardView;
    UIButton *_expressionButton;
    MMUILabel *_remainWordCountLabel;
    WCDataItem *_inputDataItem;
    WCUserComment *_inputRefComment;
    int scrollCount;
    float m_fLastY;
    MMURLHandler *m_urlHandler;
    WCDataItem *_cacheDateItem;
    UIView *_animationView;
    NSArray *m_arrUploadFailItems;
    NSString *m_userName;
    id <WCTimeLineViewControllerDelegate> m_delegate;
    WXGesture *m_gesture;
    _Bool m_hasBeginTimeline;
    double m_preContentOffset;
    WCBarMessageWindow *m_barMessageWindow;
    _Bool m_forbidShowTip;
    _Bool m_needSetToTopCell;
    WCADPageWrap *_floatViewPageWrap;
    WCADPageWrap *_abTestPageWrap;
    _Bool _isReloadingData;
    NSMutableArray *_adReloadIndexPaths;
    NSMutableArray *_adInitIndexPaths;
    int m_commentWordLimit;
    NSMutableDictionary *_needReportViewId2AdInfo;
    NSMutableArray *m_arrWaitHateItemId;
    NSMutableArray *m_arrHiddenDataItem;
    NSMutableArray *m_arrWaitHiddenTipDataItem;
    _Bool m_hasNewPhotoWhenEnter;
    _Bool m_canLogAdContext;
    _Bool m_canLogDataList;
}

@property(nonatomic) _Bool m_hasNewPhotoWhenEnter; // @synthesize m_hasNewPhotoWhenEnter;
@property(nonatomic) _Bool m_hasRefrashHead; // @synthesize m_hasRefrashHead;
@property(nonatomic) __weak id <WCTimeLineViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)abTestViewHiddenWrap;
- (void)floatViewHiddenWrap;
- (void)calADCellYVisible:(_Bool *)arg1 centerVisible:(_Bool *)arg2 bottomVisible:(_Bool *)arg3 forRowAtIndexPath:(id)arg4;
- (void)recordADCommentEndInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADCommentMiddleInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADCommentStartInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyEndInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyMiddleInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyStartInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)handleABTestTipClickEvent:(id)arg1 actionItem:(id)arg2 dataItem:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showABTestAlert:(id)arg1 dataItem:(id)arg2;
- (void)tryLogABTestResult:(id)arg1;
- (void)refreshCacheForABTestTip:(id)arg1;
- (void)checkDBAutoRecover;
- (void)onPlayNewMsgNotify;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (_Bool)shouldInteractivePop;
- (void)updateNetworkStatus;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClickedItem:(id)arg1 url:(id)arg2 backupUrl:(id)arg3 withRect:(struct CGRect)arg4;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3 userData:(id)arg4;
- (id)getAppIdFromUrl:(id)arg1;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)gestureWillEndTransition:(id)arg1 isCanceld:(_Bool)arg2;
- (void)onDismissViewController:(id)arg1 userName:(id)arg2;
- (void)onRestoreCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onReloadCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onReplyComment:(id)arg1 ofDataItem:(id)arg2 ofTouchedView:(id)arg3;
- (void)onRestoreTimeLineCellView:(id)arg1;
- (void)cleanCellHeightCache:(id)arg1;
- (void)onActionClearCellCacheAndRefreshCellView:(id)arg1;
- (void)onEditBlackList:(id)arg1;
- (id)getView;
- (void)onActionLocation:(id)arg1;
- (void)onTimeLineCellMoreMenu:(id)arg1 forScene:(unsigned int)arg2;
- (void)onTimeLineCellMoreMenu:(id)arg1;
- (void)onShowDetailViewForDataItem:(id)arg1;
- (void)onUpdateDataItem:(id)arg1 oldHeight:(double)arg2 newHeight:(double)arg3;
- (void)onCommentDataItem:(id)arg1 point:(struct CGPoint)arg2;
- (void)onAdvertiseAction:(id)arg1 point:(struct CGPoint)arg2;
- (void)onAdActoin:(id)arg1;
- (void)onDontLikeWithChoose:(id)arg1;
- (void)onDontLikeWithOtherReason:(id)arg1 QuestionExp:(id)arg2;
- (void)onClickTipBtn:(id)arg1;
- (void)onHideAdvertise:(id)arg1;
- (void)onViewAnimationWillHide;
- (void)onIKnowItBtnClicked;
- (void)onClickCommentBtnOnFloatView;
- (void)showComment:(id)arg1 refComment:(id)arg2 touchedView:(id)arg3;
- (double)totalHeightFromTopToSection:(unsigned long long)arg1;
- (unsigned long long)sectionIndexForDataItemWithTid:(id)arg1;
- (id)visibleTimeLineCellViewWithTid:(id)arg1;
- (void)showContactInfo;
- (void)onReveiceWCMessage:(id)arg1;
- (void)onMessageUnReadCountChanged;
- (void)checkNewMessage;
- (_Bool)hasUnReadMessage;
- (void)shouldUpdateMessageButton:(id)arg1;
- (void)resetHeaderView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)showUploadOption:(id)arg1;
- (void)showPhotoAlert:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getViewController;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)editShield:(id)arg1 forScene:(int)arg2;
- (void)editShield:(id)arg1;
- (void)editBlackList:(id)arg1 forSource:(int)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)openCommitViewController:(_Bool)arg1 arrImage:(id)arg2;
- (void)onBarTipClicked;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)refreshHeadForShowTip;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)hideMenu;
- (void)logUserOpInfoAsScreenShot;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)stopRefreshHeaderView;
- (void)refreshHead;
- (void)onWCGroupModMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onNoMoreTimelineData;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onCommentReturn:(id)arg1;
- (void)onLoadMore;
- (void)initData;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onMenuControllerDidHide:(id)arg1;
- (void)onMenuControllerWillShow:(id)arg1;
- (void)touchesCancelled_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showDetailView:(id)arg1;
- (void)showDetailViewForDataItem:(id)arg1;
- (void)onDeleteData;
- (void)onRestartUpload;
- (void)showMessageList;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tryLogThumbImageLoadedEffiency:(id)arg1;
- (void)genRedHeartCell:(id)arg1 indexPath:(id)arg2;
- (void)genUploadFailCell:(id)arg1 indexPath:(id)arg2;
- (void)genABTestTipCell:(id)arg1 indexPath:(id)arg2;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (_Bool)GetIsLastCommentOrLikeCell:(id)arg1 RowIndex:(long long)arg2;
- (_Bool)GetIsCommentCellRow:(id)arg1 RowIndex:(long long)arg2;
- (void)hideAlbumListLineViewInCell:(id)arg1;
- (void)resetAlbumListLineViewsFrameInCell:(id)arg1 indexPath:(id)arg2;
- (double)getCellLineContentMarginCurOri;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)hideFloatView;
- (long long)calcDataItemIndex:(long long)arg1;
- (long long)getFirstNormalItemIndex;
- (void)willDisshow;
- (void)onNetworkActivityStatusChanged;
- (void)willShow;
- (void)willDisappear;
- (void)didAppear;
- (void)initGestureRecognizer;
- (void)willAppear;
- (id)getNavigationRightButton:(id)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)delayReload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)panned:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)adjustViewAndNavBarRect;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldRotateToInterfaceOrientation:(long long)arg1;
- (void)resetStatus:(_Bool)arg1;
- (void)startLogBrowseInfo:(_Bool)arg1;
- (void)reportBrowseInfo;
- (void)onTimeLineViewReturn;
- (void)handleLongPressEx:(id)arg1;
- (void)openWriteTextViewController;
- (void)OnFinishComment:(_Bool)arg1;
- (void)resetRightButtonStatus;
- (void)reloadTableView;
- (void)didDisshow;
- (void)setToTopCell;
- (void)cacheInputText;
- (void)clearWCCache;
- (void)reloadDataWrap;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

