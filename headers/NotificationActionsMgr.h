//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class MMToastViewController, NSDictionary, NSMutableDictionary, NSString;

@interface NotificationActionsMgr : MMService <IMsgExt, PBMessageObserverDelegate, MMService>
{
    NSMutableDictionary *_actionCompletions;
    MMToastViewController *_toastView;
    NSDictionary *_actionMaping;
}

@property(readonly, retain, nonatomic) NSDictionary *actionMaping; // @synthesize actionMaping=_actionMaping;
- (void).cxx_destruct;
- (void)handleSendMsgResp:(id)arg1;
- (void)handleSetPushMuteResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)notifyUserSendMessageFailWithClientId:(unsigned int)arg1 toUsername:(id)arg2;
- (void)replyText:(id)arg1 toUsername:(id)arg2 userInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)OnUnReadCountChange:(id)arg1;
- (void)handleReplyYoAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleMuteChatAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleReply1Action:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleConfirmLoginAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleGoToMessageAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleMarkAsReadAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateShortcutsBecauseOfDisturbMayChanged;
- (_Bool)isDontDisturbModeAndCheckRestore:(_Bool)arg1;
- (void)_muteForSeconds:(unsigned int)arg1;
- (void)unmute;
- (void)muteForOneHour;
- (void)showDisturbConfirmViewController;
- (void)handleActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 isRemote:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleRemoteActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleLocalActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)notificationCategoryWithIdentifier:(id)arg1 actions:(id)arg2;
- (void)registerNotification;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

