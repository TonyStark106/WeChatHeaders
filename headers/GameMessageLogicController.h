//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IMsgExt.h"

@class GameCenterDB, GameCenterMsgTips;

@interface GameMessageLogicController : MMObject <IMsgExt>
{
    id <GameMessageLogicControllerDelegate> _delegate;
    GameCenterDB *_gameDB;
    GameCenterMsgTips *_gameMsgTips;
}

- (void).cxx_destruct;
- (void)loadGameCenterMsgTips;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)cleanRedDot;
- (_Bool)hasRedDot;
- (_Bool)setAllMsgRead;
- (unsigned int)getUnreadMsgCount;
- (id)getInnerMsgPageDataFromLocalID:(unsigned int)arg1;
- (id)getOuterMsgPageDataFromLocalID:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 gameDB:(id)arg2;

@end

