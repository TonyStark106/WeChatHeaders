//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IDeviceRankProfileMgrExt.h"
#import "MMImageLoaderObserver.h"
#import "MMImagePickerManagerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class DeviceRankDetailResonse, MMTableView, MMUILabel, MMWebImageView, NSArray, NSString, NSURL, ShareMessageConfirmLogicHelper, UIImageView, UILabel, UIScrollView, UIView;

@interface BraceletRankProfileViewController : MMUIViewController <MMImagePickerManagerDelegate, IDeviceRankProfileMgrExt, WCActionSheetDelegate, MMImageLoaderObserver, UITableViewDataSource, UITableViewDelegate>
{
    NSString *nsUserName;
    NSString *nsBrandUserName;
    NSArray *arrAffectedUser;
    DeviceRankDetailResonse *_oDataSource;
    NSURL *_coverUrl;
    MMTableView *_tableView;
    MMWebImageView *_coverWebImageView;
    UIImageView *_cameraImageView;
    MMUILabel *_tipLablel;
    UILabel *_headTipLabel;
    UIView *_affectTipView;
    UIScrollView *_affectedUserListView;
    UIView *_tableHeaderView;
    UIScrollView *_affectedUsersInHeaderView;
    _Bool _bCoverChanged;
    _Bool _bMySelf;
    ShareMessageConfirmLogicHelper *_m_shareToFriendHelper;
}

@property(retain, nonatomic) ShareMessageConfirmLogicHelper *m_shareToFriendHelper; // @synthesize m_shareToFriendHelper=_m_shareToFriendHelper;
@property(retain, nonatomic) NSArray *arrAffectedUser; // @synthesize arrAffectedUser;
@property(retain, nonatomic) NSString *nsBrandUserName; // @synthesize nsBrandUserName;
@property(retain, nonatomic) NSString *nsUserName; // @synthesize nsUserName;
- (void).cxx_destruct;
- (void)OnStayAtWeChat:(id)arg1;
- (void)OnBackTo3rdApp:(id)arg1;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (id)genShareFriendMessage:(id)arg1;
- (id)getHeaderImgUrl;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (id)getMyselfHeadImageData;
- (id)genUploadTask;
- (void)shareToTimeline;
- (void)shareToFriend;
- (void)ImageDidLoadWithData:(id)arg1;
- (void)onAffectTipSingleTap:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSingleTap:(id)arg1;
- (void)onShare;
- (void)onUpdateCoverImage:(int)arg1;
- (void)onGotUserRankDetail:(id)arg1 rankDetailResp:(id)arg2 err:(int)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1;
- (id)genRecordView:(struct CGRect)arg1 deviceRankDescItem:(id)arg2 NeedSeperate:(_Bool)arg3;
- (void)updateTableHeaderView;
- (void)clickAffectedImage:(id)arg1;
- (id)getAffectUserListView;
- (id)getAffectTipView;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserName:(id)arg1 withBrandUserName:(id)arg2 AffectedUserList:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
