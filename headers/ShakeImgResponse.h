//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, SKBuiltinBuffer_t;

@interface ShakeImgResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *buffer; // @dynamic buffer;
@property(nonatomic) unsigned int imgId; // @dynamic imgId;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(nonatomic) unsigned int totalLen; // @dynamic totalLen;

@end

