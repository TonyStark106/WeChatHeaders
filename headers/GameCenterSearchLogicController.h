//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IGameCenterExt.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GameSearchRecommendItem, MMUISearchBar, NSMutableArray, NSString, UISearchDisplayController, UITableView;

@interface GameCenterSearchLogicController : MMObject <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, IGameCenterExt>
{
    _Bool _isHeaderView;
    NSMutableArray *_resultGroupList;
    UISearchDisplayController *_searchDisplayController;
    UITableView *_recommendTableView;
    unsigned int _searchScene;
    GameSearchRecommendItem *_smartBoxData;
    GameSearchRecommendItem *_rcmData;
    MMUISearchBar *_searchBar;
    id <GameCenterSearchLogicControllerDelegate> _delegate;
    NSString *_searchKeyword;
    long long _returnKeyType;
    NSString *_searchPlaceholder;
}

@property(retain, nonatomic) NSString *searchPlaceholder; // @synthesize searchPlaceholder=_searchPlaceholder;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(nonatomic) __weak id <GameCenterSearchLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)onGameSearchSmartBox:(id)arg1 returnKeywords:(id)arg2 error:(long long)arg3;
- (void)onGameSearchFinishedWithResultGroups:(id)arg1 searchWithText:(id)arg2 error:(long long)arg3;
- (void)cancelSearch;
- (void)searchBarDidEndSearch;
- (void)searchBarBecomeFirstResponder;
- (void)resetRecommendGamesAndShowRecommendTableView;
- (void)popupSearchBar;
- (void)hideDimmingView:(id)arg1;
- (void)adjustDimmingView:(id)arg1;
- (void)finishSearch;
- (void)removeNoResultLabelWhenSearching;
- (void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)sessionHeaderViewForSearchResult:(id)arg1;
- (id)sessionHeaderViewForSmartBox:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)onOpenSearchWebResultItem:(id)arg1;
- (void)onOpenSearchGameResultItem:(id)arg1 resultType:(int)arg2 statExtInfo:(id)arg3;
- (void)handleShowMore:(id)arg1;
- (void)handleSearchWebResultItem:(id)arg1;
- (void)handleSearchGameResultItem:(id)arg1 resultType:(int)arg2 statExtInfo:(id)arg3;
- (void)loadSubviewsForSearchCell:(id)arg1 webResultItem:(id)arg2 separatorX:(double)arg3;
- (void)loadSubviewsForSearchCell:(id)arg1 gameResultItem:(id)arg2 separatorX:(double)arg3;
- (void)loadSubviewsForSearchCell:(id)arg1 showMore:(id)arg2;
- (void)loadSubviewsForSearchCell:(id)arg1 resultTips:(id)arg2;
- (void)loadSubviewsForSearchCell:(id)arg1 separatorColor:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)cellForSmartBoxResult:(id)arg1 IndexPath:(id)arg2;
- (id)cellForSmartBox:(id)arg1 IndexPath:(id)arg2;
- (id)cellForSearchResult:(id)arg1 IndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)keyboardWillShow;
- (void)dealloc;
- (void)relayoutSubviews;
- (id)initWithContentsController:(id)arg1 isHeaderView:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

