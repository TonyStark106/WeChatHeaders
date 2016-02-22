//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseEmoticonViewDelegate.h"
#import "ILinkEventExt.h"
#import "IMsgExt.h"
#import "IStrangerContactMgrExt.h"
#import "ITranslateSnsMgrExt.h"
#import "MMGrowTextViewDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCAdvertiseActionFloatForABTestDelegate.h"
#import "WCCommentViewDelegate.h"
#import "WCFacadeExt.h"
#import "WCImageFullScreeViewMgrExt.h"
#import "tableViewDelegate.h"

@class EmoticonBoardView, MMAdaptiveLabel, MMGrowTextView, MMHeadImageView, MMTableView, MMUILabel, MMURLHandler, NSMutableArray, NSMutableDictionary, NSObject<WCCommentDetailViewControllerFBDelegate>, NSString, RichTextView, UIButton, UIImageView, UILabel, UIView, UrlLabel, WCADPageWrap, WCAdvertiseActionFloatForABTest, WCAdvertiseActionFloatView, WCCommentView, WCContentItem, WCContentItemBaseView, WCDataItem, WCHeaderGridView, WCInputController, WCOperateFloatView, WCUserComment;

@interface WCCommentDetailViewControllerFB : MMUIViewController <RichTextLayoutDelegate, UITableViewDelegate, UITableViewDataSource, WCFacadeExt, IMsgExt, MMGrowTextViewDelegate, tableViewDelegate, BaseEmoticonViewDelegate, WCActionSheetDelegate, ILinkEventExt, WCCommentViewDelegate, UIAlertViewDelegate, WCImageFullScreeViewMgrExt, IStrangerContactMgrExt, ITranslateSnsMgrExt, WCAdvertiseActionFloatForABTestDelegate>
{
    MMTableView *_tableView;
    NSMutableArray *_contentViews;
    UIView *_likeListView;
    WCHeaderGridView *_headerGridView;
    UIImageView *_inputView;
    EmoticonBoardView *_emoticonBoardView;
    UIButton *_expressionButton;
    MMUILabel *_remainWordCountLabel;
    MMGrowTextView *_growTextView;
    WCOperateFloatView *_floatOperateView;
    WCAdvertiseActionFloatView *_advertiseActionFloatView;
    WCAdvertiseActionFloatForABTest *_advertiseFloadForABTest;
    WCInputController *_inputController;
    WCDataItem *_dataItem;
    WCContentItem *_contentItem;
    NSMutableArray *_arrMediaList;
    NSMutableArray *_arrCommentList;
    NSMutableArray *_arrLikeList;
    _Bool _bStranger;
    NSString *_nsStrangerUsrName;
    _Bool _bForbideComment;
    MMURLHandler *_urlHandler;
    _Bool _bIsShow;
    WCUserComment *_refComment;
    WCUserComment *_defaultRefComment;
    double _defaultRefCommentContentOffset;
    _Bool _hasFoundDefaultRefComment;
    NSObject<WCCommentDetailViewControllerFBDelegate> *m_delegate;
    NSString *_copyedText;
    RichTextView *_contentDescView;
    RichTextView *m_translateView;
    UIButton *m_translateStatusView;
    UIImageView *m_translateLineView;
    int eTranslateStatus;
    double fTranslateViewHeight;
    WCUserComment *curLongPressedComment;
    WCUserComment *curTranslateComment;
    UIButton *_resendBtn;
    MMHeadImageView *_headImageView;
    UrlLabel *_nickLabel;
    WCContentItemBaseView *_mediaCellView;
    MMAdaptiveLabel *_withLabel;
    UILabel *_locationLabel;
    UIButton *_privacyBtn;
    UILabel *_timeLabel;
    UIButton *_operateBtn;
    UIButton *_deleteBtn;
    UIButton *_advertiseLogo;
    UIButton *_adDetailBtn;
    WCCommentView *_commentViewForDelete;
    WCADPageWrap *_floatViewPageWrap;
    WCADPageWrap *_abTestPageWrap;
    int m_commentWordLimit;
    _Bool m_bHasClickFloat;
    _Bool m_bHaveActionSheet;
    NSMutableDictionary *m_dicUserCommentsUICache;
    _Bool _bJustShowContent;
    NSString *_nsUsrName;
    long long _uiSource;
}

+ (id)makeDataWrapForWCTranslate:(id)arg1;
+ (id)getReplyNickNameFromComment:(id)arg1;
@property(nonatomic) _Bool bJustShowContent; // @synthesize bJustShowContent=_bJustShowContent;
@property(retain, nonatomic) WCUserComment *defaultRefComment; // @synthesize defaultRefComment=_defaultRefComment;
@property(retain, nonatomic) WCUserComment *refComment; // @synthesize refComment=_refComment;
@property(nonatomic) __weak NSObject<WCCommentDetailViewControllerFBDelegate> *m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool bForbideComment; // @synthesize bForbideComment=_bForbideComment;
@property(nonatomic) _Bool bStranger; // @synthesize bStranger=_bStranger;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) long long uiSource; // @synthesize uiSource=_uiSource;
@property(retain, nonatomic) NSString *nsUsrName; // @synthesize nsUsrName=_nsUsrName;
@property(retain, nonatomic) NSString *nsStrangerUsrName; // @synthesize nsStrangerUsrName=_nsStrangerUsrName;
- (void).cxx_destruct;
- (void)abTestViewHiddenWrap;
- (void)floatViewHiddenWrap;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (double)initTranslateStatusButton:(_Bool)arg1 withTitle:(id)arg2 andReferView:(id)arg3;
- (void)makeTranslateShowAnimation;
- (double)initContentTranslateView:(id)arg1 andSuperView:(id)arg2;
- (void)onTranslateComment:(id)arg1;
- (void)onTranslateAction:(id)arg1;
- (id)GetMyTranslateSnsKeyID;
- (void)onNetworkActivityStatusChanged;
- (void)willDisshow;
- (void)willDisappear;
- (void)willShow;
- (void)willAppear;
- (void)adjustTableViewRect;
- (void)updateNetworkStatus;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onResendBtnClicked:(id)arg1;
- (void)onViewAnimationWillHide;
- (void)onCommentPhoto:(id)arg1;
- (void)onClickCommentBtnOnFloatView;
- (void)onClickContent:(id)arg1 confirmDelete:(_Bool)arg2;
- (void)onShowGroup;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onDeletePhoto:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onHeadImageClicked:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateHeaderGridView;
- (id)FormCommentTipsView:(id)arg1;
- (id)getCommentsUICacheKey:(id)arg1;
- (void)onClickWithBtn;
- (void)initTableView;
- (void)initTableFooterView;
- (int)getInputViewHeight;
- (double)layoutHeadInnerView;
- (double)getOperateBtnRightMargin;
- (double)getCommentViewLeftMargin;
- (double)getHeadImageViewLeftMargin;
- (id)getContactDisplayName;
- (void)initTableHeaderView;
- (void)onActionLocation:(id)arg1;
- (void)initData;
- (void)dealloc;
- (void)hideFloatView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

