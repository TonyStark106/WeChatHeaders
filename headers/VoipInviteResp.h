//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, VoipMultiRelayData;

@interface VoipInviteResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int addrCount; // @dynamic addrCount;
@property(retain, nonatomic) NSMutableArray *addrList; // @dynamic addrList;
@property(nonatomic) int audioDtx; // @dynamic audioDtx;
@property(nonatomic) int audioTsdfBeyond3G; // @dynamic audioTsdfBeyond3G;
@property(nonatomic) int audioTsdfEdge; // @dynamic audioTsdfEdge;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int fastPlayRepair; // @dynamic fastPlayRepair;
@property(nonatomic) int netQualityCnt; // @dynamic netQualityCnt;
@property(retain, nonatomic) NSMutableArray *netQualityList; // @dynamic netQualityList;
@property(nonatomic) int newP2S; // @dynamic newP2S;
@property(nonatomic) int passthroughQosAlgorithm; // @dynamic passthroughQosAlgorithm;
@property(retain, nonatomic) VoipMultiRelayData *relayData; // @dynamic relayData;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;
@property(nonatomic) int roomMemberId; // @dynamic roomMemberId;
@property(nonatomic) unsigned int switchInterval; // @dynamic switchInterval;
@property(nonatomic) unsigned int tcpCnt; // @dynamic tcpCnt;
@property(nonatomic) int voipSyncInterval; // @dynamic voipSyncInterval;

@end

