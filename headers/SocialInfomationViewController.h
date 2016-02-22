//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTipsViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "QZoneLoginStatusDelegate.h"
#import "WCActionSheetDelegate.h"

@class CContact, MMTableViewInfo, NSString, QZoneLoginStatus;

@interface SocialInfomationViewController : MMUIViewController <MMTipsViewControllerDelegate, WCActionSheetDelegate, QZoneLoginStatusDelegate, PBMessageObserverDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    QZoneLoginStatus *m_qzone;
    NSString *m_cpKeyForSignature;
    _Bool m_isSignatureUnsafe;
    CContact *m_contact;
}

+ (id)getSourceForContact:(id)arg1;
+ (id)getRegionForContact:(id)arg1;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void).cxx_destruct;
- (void)updateCPState;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onQZoneUrl:(id)arg1;
- (void)onSendQQMsg:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)Call;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onShowWeiDain;
- (void)OnLinkedInAction;
- (void)OnQQAction;
- (void)makeSignCell:(id)arg1 cellInfo:(id)arg2;
- (double)getSignCellHeight;
- (void)reloadTableView;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

