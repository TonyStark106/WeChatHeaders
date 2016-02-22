//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "FTSJSEventDelegate.h"
#import "FTSWebSearchDataSource.h"
#import "UIScrollViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UIWebViewDelegate.h"
#import "WCCommentDetailViewControllerFBDelegate.h"

@class MMUISearchBar, MMUIViewController, NSDictionary, NSMutableArray, NSString, UIImageView, UIView, UIWebView, WXSearchJSLogicImpl;

@interface FTSWebSearchView : MMUIView <UISearchBarDelegate, UIWebViewDelegate, FTSJSEventDelegate, FTSWebSearchDataSource, UIScrollViewDelegate, WCCommentDetailViewControllerFBDelegate>
{
    NSString *_keywordForHomepage;
    NSString *_keywordForDetailPage;
    UIImageView *_searchBarWrap;
    MMUISearchBar *_searchBar;
    UIImageView *_bottomViewShadow;
    UIWebView *_webView;
    UIWebView *_detailWebView;
    WXSearchJSLogicImpl *_jsLogicImpl;
    double _searchTextFieldNormalWidth;
    _Bool _hasMoving;
    double _moveStartOffset;
    double _moveCurOffset;
    double _moveContentOffsetY;
    _Bool _hasReported;
    _Bool _bSearchFromHotword;
    _Bool _isDetailSearch;
    unsigned long long _detailSearchType;
    NSDictionary *_jsonForDetailPage;
    _Bool _shouldHandleTextChanged;
    NSString *_loadingH5Path;
    NSString *_searchID;
    NSString *_browsingTID;
    NSMutableArray *_arrDeletedTID;
    UIView *_searchBarSuperView;
    UIView *_bottomView;
    MMUIViewController *_viewController;
    id <FTSWebSearchViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FTSWebSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *searchBarSuperView; // @synthesize searchBarSuperView=_searchBarSuperView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)onOpenContact:(id)arg1;
- (void)onOpenSnsDetail:(id)arg1;
- (void)onOpenBrandContact:(id)arg1 withParams:(id)arg2;
- (void)onLaunchPage:(id)arg1;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onBeginNextPage:(id)arg1;
- (void)onFailReceiveJson;
- (void)onReceiveJson:(id)arg1;
- (void)onDeleteData;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)onClickSearchButton:(id)arg1;
- (void)enableButton:(id)arg1;
- (void)handleTextChanged:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)loadLocalHtmlForDetailPage:(id)arg1;
- (void)willBeginDetailSearch;
- (void)updateMovingDetailView;
- (void)updateSearchBarPosition;
- (void)moveDetailViewToRight;
- (void)moveWebViewToRight;
- (void)cancelMoveDetailView;
- (void)cancelMoveSearchBar;
- (void)handlePanGestureForDetailView:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)cancelSearch;
- (void)resetSearch;
- (void)asyncSearchForDetail:(id)arg1 businessType:(unsigned long long)arg2;
- (void)asyncSearch:(id)arg1;
- (void)delaySearchImp:(id)arg1;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)showWebview:(id)arg1;
- (void)hideKeyboard;
- (void)remove;
- (void)popWithAnimation;
- (void)popFromDetailSearch;
- (void)onRemoveDetailView;
- (void)pop:(_Bool)arg1;
- (void)onBackBtnClick;
- (double)getSearchTextFieldWidth;
- (id)query;
- (id)detailCache;
- (void)loadWebView;
- (void)loadView;
- (void)show;
- (void)clearResource;
- (void)handleRotateEvent;
- (void)loadLocalHtml:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
