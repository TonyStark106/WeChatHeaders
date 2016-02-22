//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMDB;

@interface CMessageDB : NSObject
{
    CMMDB *m_oMMDB;
}

@property(retain, nonatomic) CMMDB *m_oMMDB; // @synthesize m_oMMDB;
- (void).cxx_destruct;
- (void)setMessageUnreadCondition:(struct WCDBConditionBase *)arg1;
- (void)fillDBMsg:(id)arg1 andProperty:(vector_24c76cbd *)arg2 fromMsgWrap:(id)arg3 des:(unsigned int)arg4;
- (void)HandleMessage:(id)arg1 ChatName:(id)arg2 Des:(unsigned int)arg3;
- (id)GetLocalUsrName:(id)arg1;
- (void)InsertNewRowInDuplicateMsg:(long long)arg1 Time:(unsigned int)arg2;
- (void)DelMsgInDuplicateMsg;
- (void)AddMsgToSendTable:(id)arg1 MsgWrap:(id)arg2;
- (unsigned int)GetUnReadCountInHello:(id)arg1;
- (unsigned int)GetCountInHello:(id)arg1;
- (unsigned int)GetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2;
- (_Bool)SetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2 Status:(unsigned int)arg3;
- (_Bool)ClearHelloUnRead:(id)arg1 HelloUser:(id)arg2;
- (void)DelHelloMsg:(id)arg1 HelloUser:(id)arg2;
- (id)GetHelloMsg:(id)arg1 HelloUser:(id)arg2 Limit:(unsigned int)arg3 OnlyTo:(_Bool)arg4;
- (id)GetHelloUsers:(id)arg1 Limit:(unsigned int)arg2 OnlyUnread:(_Bool)arg3;
- (id)GetHelloMsgForSyncRead:(id)arg1 Where:(const struct WCDBConditionBase *)arg2;
- (id)GetHelloMsg:(id)arg1 Where:(const struct WCDBConditionBase *)arg2 Order:(const struct WCDBConditionBase *)arg3 Limit:(unsigned int)arg4;
- (void)AddHelloMsg:(id)arg1 MsgWrap:(id)arg2 HelloUser:(id)arg3 OpCode:(unsigned int)arg4 DES:(unsigned int)arg5 checkCreateTime:(_Bool)arg6 status:(unsigned int)arg7;
- (unsigned int)GetImgOrVideoMsgCount:(id)arg1;
- (unsigned int)GetImgOrVideoMsgCount:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3;
- (id)GetImgOrVideoNextMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 CreateTime:(unsigned int)arg4;
- (id)GetImgOrVideoLastMsg:(id)arg1;
- (id)GetImgOrVideoLastMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 CreateTime:(unsigned int)arg4;
- (id)GetImgAndVideoMsgList:(id)arg1;
- (id)GetImgMsgList:(id)arg1;
- (id)GetMsgForFlowWall:(id)arg1 Where:(const struct WCDBConditionBase *)arg2 Order:(const struct WCDBConditionBase *)arg3 Limit:(unsigned int)arg4;
- (unsigned int)GetImgMsgCount:(id)arg1;
- (unsigned int)GetImgMsgCount:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3;
- (id)GetImgLastMsg:(id)arg1;
- (id)GetImgLastMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 CreateTime:(unsigned int)arg4;
- (id)GetImgNextMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 CreateTime:(unsigned int)arg4;
- (void)UpdatePimMsg:(id)arg1 LocalID:(unsigned int)arg2 Content:(id)arg3 CreateTime:(unsigned int)arg4;
- (void)UpdateVideoMessage:(id)arg1 MsgWrap:(id)arg2;
- (void)UpdateMessage:(id)arg1 MsgWrap:(id)arg2;
- (void)UpdateVoiceMessage:(id)arg1 MsgWrap:(id)arg2;
- (void)UpdateVoiceStatus:(id)arg1 LocalID:(unsigned int)arg2 DownloadStatus:(unsigned int)arg3;
- (_Bool)AddMessageToChatExt:(id)arg1 MsgWrap:(id)arg2;
- (unsigned int)GetMesCount:(id)arg1 MesType:(unsigned int)arg2;
- (unsigned int)GetAllMesCount:(id)arg1;
- (unsigned int)GetUnReadCount:(id)arg1;
- (unsigned int)GetTextMsgCount:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)TransferMsgFromChatToDuplicate:(id)arg1;
- (void)ClearUnReadForSync:(id)arg1 CreateTime:(unsigned int)arg2;
- (_Bool)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)DropChatTable:(id)arg1;
- (void)ModVoipMsgStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)ModLocationMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)GetFirstUnreadMsg:(id)arg1;
- (id)GetLastMsgToUsr:(id)arg1;
- (id)GetLastMsgFromUsr:(id)arg1;
- (id)GetLastMsg:(id)arg1;
- (id)GetTextMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3;
- (id)GetTextMsg:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)GetMsg:(id)arg1 BizMsgClientID:(id)arg2;
- (id)GetMsg:(id)arg1 n64SvrID:(long long)arg2;
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2;
- (id)QueryMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 Where:(const struct WCDBConditionBase *)arg5;
- (id)GetDownMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3;
- (id)GetMsgForSyncRead:(id)arg1 Where:(const struct WCDBConditionBase *)arg2;
- (id)GetMsg:(id)arg1 Where:(const struct WCDBConditionBase *)arg2 order:(const struct WCDBConditionBase *)arg3 Limit:(unsigned int)arg4;
- (const struct WCDBConditionBase *)orderOfAscCreateTimeAndMsgLocalId;
- (const struct WCDBConditionBase *)orderOfDescCreateTimeAndMsgLocalId;
- (void)AddBackupMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2 withTimeFixed:(_Bool)arg3;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)RollbackTransaction;
- (_Bool)CommitTransaction;
- (_Bool)BeginTransaction;
- (id)DBContext;
- (void)InitDB:(id)arg1;
- (id)init;

@end

