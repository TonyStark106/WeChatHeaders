//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMLoadingView, MMTableViewInfo, NSString, RecoverDataManager;

@interface RecoverDataViewController : MMUIViewController
{
    MMTableViewInfo *m_tableViewInfo;
    MMLoadingView *m_loadingView;
    RecoverDataManager *m_recoverDataMgr;
    NSString *_m_selName;
}

@property(retain, nonatomic) NSString *m_selName; // @synthesize m_selName=_m_selName;
- (void).cxx_destruct;
- (id)stringWithSize:(unsigned long long)arg1;
- (void)forceToClose;
- (void)onRecoverFailure;
- (void)onRecoverSuccess;
- (void)onLowSpaceForDBRecover:(id)arg1;
- (void)onDoRecover:(id)arg1;
- (void)selectCell:(id)arg1;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)addRecoverName:(id)arg1 order:(unsigned long long)arg2;
- (void)initView;
- (void)adjustTableViewRect;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

