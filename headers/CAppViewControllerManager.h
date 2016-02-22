//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IMsgExt.h"
#import "IVoiceReminderExt.h"
#import "MMKernelExt.h"
#import "MMThemeManagerExt.h"
#import "UIAlertViewDelegate.h"
#import "UITabBarControllerDelegate.h"
#import "WCFacadeExt.h"

@class CMMVector, MMTabBarController, NSMutableArray, NSString, PreEnterWechatLogic, SvrErrorTipWindow, UIWindow;

@interface CAppViewControllerManager : MMObject <UITabBarControllerDelegate, MMThemeManagerExt, MMKernelExt, IMsgExt, IVoiceReminderExt, WCFacadeExt, UIAlertViewDelegate>
{
    UIWindow *m_window;
    NSMutableArray *m_arrViewController;
    NSMutableArray *m_arrTabBarBaseViewController;
    unsigned int m_uCurrentTabViewIndex;
    CMMVector *m_vecViewController;
    _Bool m_bFromReg;
    _Bool m_isChangingTheme;
    _Bool m_isInBackground;
    SvrErrorTipWindow *m_svrErrorTipWindow;
    PreEnterWechatLogic *m_PreEnterWechatLogic;
    MMTabBarController *m_tabbarController;
}

+ (id)topMostController;
+ (id)getCurrentNavigationController;
+ (id)getTabBarController;
+ (id)getAppViewControllerManager;
+ (_Bool)hasEnterWechatMain;
@property(readonly, nonatomic) _Bool m_isInBackground; // @synthesize m_isInBackground;
- (void).cxx_destruct;
- (id)getTabBarController;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onNotifyRemindMsg:(id)arg1;
- (void)setupUserInfoAndCategoryForNotification:(id)arg1 message:(id)arg2 username:(id)arg3;
- (void)OnShowPush:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)UIWindowDidResignKeyNotification:(id)arg1;
- (void)UIWindowDidBecomeKeyNotification:(id)arg1;
- (void)UIWindowDidBecomeHiddenNotification:(id)arg1;
- (void)UIWindowDidBecomeVisibleNotification:(id)arg1;
- (void)enterBackground;
- (void)enterForeground;
- (void)onPreQuit;
- (void)jumpToChat:(id)arg1 msgToLocate:(unsigned int)arg2;
- (void)JumpToViewController:(id)arg1;
- (void)HandleMoreJump:(id)arg1;
- (void)HandleFindFriendJump:(id)arg1;
- (void)HandleMainFrameJump:(id)arg1;
- (void)fixOnStatusBarClick;
- (id)getMainWindow;
- (void)changeLanguage;
- (void)refreshLanguage:(int)arg1;
- (void)refreshLanguage:(int)arg1 withChildScene:(id)arg2;
- (void)jumpToAlbum;
- (void)jumpToShake;
- (void)jumpToCameraScan:(int)arg1;
- (void)jumpToURLShardBy3rdApp:(id)arg1;
- (_Bool)isChangingTheme;
- (void)onThemeChanged;
- (unsigned int)getCurTabBarIndex;
- (id)getTopViewController;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (void)removeViewFromRootViewController:(id)arg1;
- (void)addViewControllerToRootView:(id)arg1;
- (void)removeViewFromRootView:(id)arg1;
- (void)addViewToRootView:(id)arg1;
- (_Bool)isInStatusBarShowViewController;
- (unsigned int)getTotalUnReadCount;
- (void)closeMainFrame;
- (void)openMainFrame:(_Bool)arg1 showStyle:(id)arg2;
- (void)openFirstView;
- (void)OnMainFrameDoubleClicked:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setAllTabBarItemEnabled:(_Bool)arg1;
- (void)newMessageByEnterpriseContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(_Bool)arg3 showSessionList:(_Bool)arg4 animated:(_Bool)arg5 extraInfo:(id)arg6;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(_Bool)arg3;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(_Bool)arg3 animated:(_Bool)arg4 extraInfo:(id)arg5;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(_Bool)arg3 animated:(_Bool)arg4;
- (void)moveToTab:(long long)arg1 showMainView:(_Bool)arg2;
- (void)moveToRootViewControllerForIndex:(long long)arg1;
- (void)moveToRootViewController;
- (void)dismissToRootViewControllerForIndex:(long long)arg1;
- (void)dismissToRootViewController;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)dealloc;
- (void)createMainFrameWithShowStyle:(id)arg1;
- (void)resetDefaultImage;
- (void)replaceTwoFile:(id)arg1 desFile:(id)arg2;
- (void)createMoreViewController;
- (void)createFindFriendViewController;
- (void)recreateFindFriendViewController;
- (void)createContactsViewController;
- (void)createNewMainFrameViewController;
- (id)getTabBarBaseViewController:(unsigned long long)arg1;
- (id)getNewMainFrameViewController;
- (void)forceRedrawNavigationViewControllers:(id)arg1;
- (void)forceRedrawNavigationViewControllers;
- (void)forceRedrawNavigationBars;
- (id)initWithWindow:(id)arg1;
- (void)restartAllFailUploadFromLocalNotification;
- (void)reSendAllMsgFromNotificationDone;
- (void)resendAllFailMsgFromLocalNotification:(id)arg1;
- (_Bool)checkResentFailMsg:(id)arg1 isFromLaunch:(_Bool)arg2;
- (void)openView:(unsigned int)arg1 launchOptions:(id)arg2 isAppUpdated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

