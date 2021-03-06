//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCCardPkgExt.h"
#import "SessionSelectControllerDelegate.h"
#import "ShareMessageConfirmLogicHelperDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCardDetailViewControllerDelegate.h"
#import "tableViewDelegate.h"

@class NSMutableArray, NSString, ShareMessageConfirmLogicHelper, UIActivityIndicatorView, UIButton, UIScrollView, UIView, WCCardConfigInfo, WCCardPackageTableView, WCCardTitleView;

@interface WCCardPackageViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, tableViewDelegate, IWCCardPkgExt, WCActionSheetDelegate, WCCardDetailViewControllerDelegate, ShareMessageConfirmLogicHelperDelegate, SessionSelectControllerDelegate>
{
    NSMutableArray *_expiringList;
    NSMutableArray *_memberCardList;
    NSMutableArray *_nearbyList;
    NSMutableArray *_layoutList;
    NSMutableArray *_layoutDisplayList;
    NSMutableArray *_cardList;
    NSMutableArray *_displayCardList;
    WCCardConfigInfo *_configInfo;
    NSMutableArray *_emptyList;
    UIScrollView *_loadingView;
    WCCardPackageTableView *_tableView;
    UIView *_footerView;
    UIActivityIndicatorView *_activityView;
    UIButton *_messageTipView;
    UIView *_headView;
    WCCardTitleView *_titleView;
    _Bool _hasMoreData;
    _Bool _isReadyToLoad;
    unsigned int _curMinUpdateTime;
    _Bool _isDeleteHandling;
    ShareMessageConfirmLogicHelper *_SendAppMsgHelper;
    _Bool fromAddEntrance;
    id <WCCardPackageViewControllerDelegate> delegate;
}

@property(nonatomic) __weak id <WCCardPackageViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool fromAddEntrance; // @synthesize fromAddEntrance;
- (void).cxx_destruct;
- (void)checkDBAutoRecover;
- (void)onOpenWebView;
- (void)delayFadeOutCard:(id)arg1;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onDeleteCard:(id)arg1;
- (void)deleteCardDataWithIndexPath:(id)arg1 needDeleteDB:(_Bool)arg2;
- (void)deleteCardDataWithIndexPath:(id)arg1;
- (void)unGiftCardDataWithIndexPath:(id)arg1;
- (id)getEmptyTips;
- (void)sortWCCardList:(id)arg1;
- (void)safeAddCardList:(id)arg1;
- (unsigned int)removeCard:(id)arg1;
- (id)getCardDataByIndexPath:(id)arg1;
- (id)getIndexPathWithCardData:(id)arg1;
- (int)indexOfCardInLayoutDisplayList:(id)arg1;
- (int)indexOfCardInNormalCardList:(id)arg1;
- (_Bool)hasUnreadMessage;
- (id)getContollerTitle:(id)arg1;
- (void)loadEmptyCellSubView:(id)arg1 emptyIndex:(long long)arg2;
- (void)loadCardCellSubView:(id)arg1 cardIndex:(id)arg2;
- (void)stopActivityLoading;
- (void)setHasEnterCardListBefore;
- (_Bool)hasEnterCardListBefore;
- (void)onGiftToFriendWithIndexPath:(id)arg1;
- (void)OnSendMessageOK:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLoadMore;
- (void)showMessageListByNewMsg;
- (void)showMessageListByMore;
- (void)gotoMsgCenterViewControllerForNewMsg:(_Bool)arg1;
- (void)onCancel;
- (void)onRightButtonOP;
- (void)onGetCardLayoutStop;
- (void)onGetCardLayout;
- (void)onWCCardMessageUnreadCountChanged:(id)arg1;
- (void)onWCCardUpdate:(id)arg1;
- (void)onGetNextPageWCCardList:(id)arg1 ErrCode:(int)arg2 HasMore:(_Bool)arg3 HasBatchGeting:(_Bool)arg4;
- (void)onGetFirstPageWCCardList:(id)arg1 ErrCode:(int)arg2 HasMore:(_Bool)arg3 HasBatchGeting:(_Bool)arg4;
- (void)onSyncEnd:(_Bool)arg1;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)updateTableFooterHasMore:(_Bool)arg1;
- (void)showLoadingView;
- (void)showTableView;
- (void)initHeaderViewWithLastMsg:(id)arg1;
- (void)initLoadingView;
- (void)initTableView;
- (void)updateDisplayList;
- (void)genLayoutDisplayList;
- (void)sortLayoutInfo;
- (void)updateLayoutData;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

