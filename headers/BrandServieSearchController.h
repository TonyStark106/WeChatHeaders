//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "BSSDetailViewDelegate.h"
#import "BSSHomePageLogicControllerDelegate.h"
#import "BSSItemViewDelegate.h"
#import "MMRefreshTableFooterDelegate.h"
#import "MMSearchBarDelegate.h"

@class BSSHomePageLogicController, MMLoadingView, MMSearchBar, MMUIViewController, NSMutableDictionary, NSString, WCTimeLineFooterView;

@interface BrandServieSearchController : MMObject <MMSearchBarDelegate, MMRefreshTableFooterDelegate, BSSDetailViewDelegate, BSSItemViewDelegate, BSSHomePageLogicControllerDelegate>
{
    MMUIViewController *m_contentVC;
    _Bool _isDetailViewShowing;
    _Bool _isPreSearching;
    unsigned int _entryFlag;
    MMSearchBar *_searchBar;
    WCTimeLineFooterView *_footerView;
    MMLoadingView *_loadingView;
    NSString *_searchKeyword;
    NSString *_detailSearchKeyword;
    BSSHomePageLogicController *_homePageLogicController;
    NSMutableDictionary *_dicItemViews;
}

@property(retain, nonatomic) NSMutableDictionary *dicItemViews; // @synthesize dicItemViews=_dicItemViews;
@property(retain, nonatomic) BSSHomePageLogicController *homePageLogicController; // @synthesize homePageLogicController=_homePageLogicController;
@property(nonatomic) _Bool isPreSearching; // @synthesize isPreSearching=_isPreSearching;
@property(nonatomic) _Bool isDetailViewShowing; // @synthesize isDetailViewShowing=_isDetailViewShowing;
@property(retain, nonatomic) NSString *detailSearchKeyword; // @synthesize detailSearchKeyword=_detailSearchKeyword;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(nonatomic) unsigned int entryFlag; // @synthesize entryFlag=_entryFlag;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)onItemViewInnerSelectWithServiceUrlString:(id)arg1;
- (void)detailViewDidHide;
- (id)getContainerSearchBar;
- (void)onRespErrorWithInfo:(id)arg1;
- (void)onServerError;
- (void)onSelectLoadMoreCellWithResultType:(long long)arg1 andBusinessType:(unsigned long long)arg2 andKeyword:(id)arg3 andLocation:(id)arg4;
- (void)onSelectItemWithProductId:(id)arg1;
- (void)onSelectItemWithContactInfo:(id)arg1 andSearchId:(id)arg2;
- (void)onSelectItemWithUrlAddress:(id)arg1;
- (void)onHomePageResultNeedReload;
- (void)onSearchStart;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)mmsearchBarTextDidBeginEditing:(id)arg1;
- (void)mmsearchBarCancelButtonClicked:(id)arg1;
- (void)mmsearchBarSearchButtonClicked:(id)arg1;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)didScrollViewBeginDragging:(id)arg1;
- (void)didScrollViewScroll:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (_Bool)shouldHighlightRowAtIndexPath:(id)arg1;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (unsigned int)getGo2ProfileScene;
- (void)startSearch;
- (_Bool)isPreSearchingNow;
- (void)stopLoading;
- (void)startLoading;
- (id)getSearchContentViewController;
- (id)getCellItemViewWithResultType:(long long)arg1 dataItem:(id)arg2 keywords:(id)arg3 atIndexPath:(id)arg4;
- (void)resetSearchBarFrame;
- (void)searchBarResignFirstResponder;
- (void)contentViewDidAppear;
- (id)initWithContentViewController:(id)arg1 withEntryFlag:(unsigned int)arg2;
- (void)initFooterView;
- (void)initSearchBarWithContentVC:(id)arg1;
- (void)initViewWithContentVC:(id)arg1;
- (void)initData;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

