//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSString, SKBuiltinBuffer_t;

@interface CDNUploadMsgImgPrepareRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *attachedContent; // @dynamic attachedContent;
@property(retain, nonatomic) NSString *clientImgId; // @dynamic clientImgId;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientStat; // @dynamic clientStat;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) int scene; // @dynamic scene;
@property(nonatomic) int thumbHeight; // @dynamic thumbHeight;
@property(nonatomic) int thumbWidth; // @dynamic thumbWidth;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;

@end

