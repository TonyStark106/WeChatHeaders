//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "FavFileDetailDelegate.h"
#import "FavForwardLogicDelegate.h"
#import "FavPostControllerDelegate.h"
#import "FavSearchControllerDelegate.h"
#import "FavTagSearchFilterDelegate.h"
#import "FavTagViewDelegate.h"
#import "FavVideoDetailDelegate.h"
#import "FavoritesDataControllerDelegate.h"
#import "IFavoritesExt.h"
#import "WCActionSheetDelegate.h"

@class FavForwardLogicController, MMFavoritesDataController, MMFavoritesSearchController, MMTableView, NSMutableArray, NSString, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface MyFavoritesViewController : MMSearchBarDisplayController <FavPostControllerDelegate, FavSearchControllerDelegate, FavoritesDataControllerDelegate, IFavoritesExt, FavFileDetailDelegate, FavVideoDetailDelegate, FavTagSearchFilterDelegate, FavForwardLogicDelegate, FavTagViewDelegate, WCActionSheetDelegate>
{
    MMFavoritesDataController *m_dataController;
    MMFavoritesSearchController *m_searchController;
    UIView *m_multiSelectActionView;
    NSMutableArray *m_multiSelectButtons;
    FavForwardLogicController *m_favForwardController;
    MMTableView *m_tableView;
    UIView *m_emptyView;
    UIView *m_loadingView;
    UIView *m_switchLoadingView;
    UIView *m_headView;
    UIImageView *m_tipsView;
    UILabel *m_uploadFailLabel;
    UILabel *m_capFullLabel;
    UIView *m_footerView;
    UIActivityIndicatorView *m_activityView;
    _Bool m_hasLogCostTime;
    id <MyFavoritesViewControllerDelegate> _m_delegate;
}

@property(nonatomic) __weak id <MyFavoritesViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)checkDBAutoRecover;
- (id)getCurrentViewController;
- (void)onLoadingMore;
- (void)reloadTableAtIndexPath:(id)arg1;
- (void)onSelectCountChanged:(unsigned long long)arg1;
- (void)showEmptyView;
- (void)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3 Enable:(_Bool)arg4;
- (void)onShowPostActionSheet:(id)arg1;
- (void)addPostItem:(id)arg1;
- (id)getFavForawrdViewController;
- (void)OnForwardDone;
- (void)onFavTagEditCancel;
- (void)onFavTagEditOK;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addTagForItems;
- (void)onForwardItems;
- (void)forwardItem:(id)arg1;
- (void)onDeleteItems;
- (void)hideSelectActionView;
- (void)onMultiSelectDone;
- (void)initMultiSelectActionView;
- (void)enableBtns;
- (void)disableBtns;
- (void)hideSearchBar;
- (void)onBtnEdit;
- (void)hideTips;
- (void)onShowFailTips;
- (void)showTips;
- (void)showCapacityExceedTips;
- (void)showUploadFailTips;
- (void)OnDelFavoritesItem:(unsigned int)arg1;
- (void)OnAddFavoritesItem:(id)arg1 ErrCode:(int)arg2;
- (void)OnNewFavoritesItemUpdate:(id)arg1;
- (void)OnGetNextPageFavoritesItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetFirstPageFavoritesItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnHasAnyFavoriteData:(_Bool)arg1;
- (void)stopActivityLoading;
- (double)getContentOffsetAfterAdd:(id)arg1;
- (void)OpenVideoFavItem:(id)arg1;
- (void)OpenVideoFile:(id)arg1;
- (_Bool)shouldShowSearchResult:(id)arg1;
- (void)onWillBeginSearch;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)restartAllFailedItem;
- (void)resetTableViewOffset:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onViewControllerBeDeleted;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)initEmptyView;
- (void)initSwithLoadingView;
- (void)initLoadingView;
- (void)initTableFooterView;
- (void)updateTableFooterHasMore:(_Bool)arg1;
- (void)resetHeaderView:(id)arg1;
- (void)initHeaderView;
- (void)initTableView;
- (id)genLabel:(id)arg1;
- (void)setViewTitle;
- (void)initNavigationBar;
- (id)getAddBarButton;
- (id)getCancelBarButton;
- (void)reLayoutSubviews;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)checkForHideFailBanner;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)HideLoadingView;
- (void)reloadTableView;
- (_Bool)isSeachActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

