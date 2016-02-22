//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMsgExt.h"
#import "MMRefreshTableFooterDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCommentDetailViewControllerFBDelegate.h"
#import "WCFacadeExt.h"
#import "WCImageFullScreeViewMgrExt.h"
#import "WCImageViewDelegate.h"
#import "tableViewDelegate.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, WCTimeLineFooterView;

@interface WCCommentListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, tableViewDelegate, IMsgExt, WCFacadeExt, WCImageViewDelegate, WCActionSheetDelegate, RichTextLayoutDelegate, MMRefreshTableFooterDelegate, WCCommentDetailViewControllerFBDelegate, WCImageFullScreeViewMgrExt>
{
    MMTableView *_tableView;
    WCTimeLineFooterView *_footerView;
    NSMutableArray *_arrCommentList;
    NSMutableDictionary *_dicDataItems;
    NSMutableArray *_arrCommentListFromDB;
    unsigned int _autoGetMoreCount;
    _Bool _bUnreadOnly;
    _Bool _bHasNullIDs;
    _Bool _bHasMoreItems;
    NSMutableDictionary *_dicCells;
    NSMutableDictionary *_dicCellHeights;
}

@property(nonatomic) _Bool bUnreadOnly; // @synthesize bUnreadOnly=_bUnreadOnly;
- (void).cxx_destruct;
- (void)onReveiceWCDeleteMessage:(id)arg1;
- (void)onViewAnimationWillHide;
- (void)onDeleteData;
- (void)onRestartUpload;
- (void)onClearList:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clearList;
- (void)onClickWCImage:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)openWCCommentDetail:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateCacheBySnsAdNotInterestsMsg:(id)arg1;
- (void)updateCacheBySnsObjDeleteMsg:(id)arg1;
- (void)updateCommentCache:(id)arg1;
- (id)getLoadMoreCell;
- (id)getCellContentViewAtIndexPath:(id)arg1 superView:(id)arg2;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (double)getCellContentViewHeightAtIndexPath:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onLoadMore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)initTableView;
- (void)initTableFooterView;
- (void)getMoreData;
- (void)getData;
- (void)addWCMessagesWithArray:(id)arg1 MoreData:(_Bool)arg2;
- (id)getObjIDByWCMessage:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

