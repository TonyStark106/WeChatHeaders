//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt.h"
#import "IMMFontMgrExt.h"
#import "IMMLanguageMgrExt.h"
#import "IMMNewSessionMgrExt.h"
#import "MMService.h"

@class BaseMsgContentLogicController, NSMutableArray, NSString;

@interface MMMsgLogicManager : MMService <MMService, IMMLanguageMgrExt, IMMFontMgrExt, IContactMgrExt, IMMNewSessionMgrExt>
{
    NSMutableArray *_arrLogicControllers;
    BaseMsgContentLogicController *_topLogicController;
    BaseMsgContentLogicController *_weixinLogicController;
    BaseMsgContentLogicController *_roomLogicController;
    BaseMsgContentLogicController *_lastPeekController;
}

- (void).cxx_destruct;
- (void)finishedPeekingWithController:(id)arg1;
- (id)logicControllerForPeekingWithContact:(id)arg1 messageWrap:(id)arg2;
- (id)GetCurrentLogicController;
- (void)PopLogicController:(id)arg1 withReuse:(_Bool)arg2;
- (void)PopLogicController:(id)arg1;
- (void)PresentMultiSelectLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)PushNewLogicController:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 animated:(_Bool)arg4;
- (void)PushSearchLogicControllerByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 animated:(_Bool)arg4;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 extraInfo:(id)arg4;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 searchScene:(int)arg4;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (void)PushLBSRoomLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (void)PushLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4 reuse:(_Bool)arg5 extraInfo:(id)arg6;
- (void)cleanUnuseLogicController;
- (void)PushLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4 reuse:(_Bool)arg5;
- (void)PushLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4;
- (void)PushLogicController:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)GetReuseableLogicControllerFromCacheWithContact:(Class)arg1;
- (id)GetLogicControllerFromCacheWithContact:(id)arg1;
- (void)setMsgLogicToCache:(id)arg1;
- (Class)GetLogicClassByContact:(id)arg1;
- (_Bool)onServiceMemoryWarning;
- (void)onPluginsChanged:(id)arg1;
- (void)onDeleteSession:(unsigned int)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onFontSizeChange;
- (void)onLanguageChange;
- (void)onServiceReloadData;
- (void)CheckIfTopViewControllerPoped;
- (void)cleanUpLogicByName:(id)arg1;
- (void)cleanUp;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

