//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

@interface GetContactRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *antispamTicket; // @dynamic antispamTicket;
@property(nonatomic) unsigned int antispamTicketCount; // @dynamic antispamTicketCount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *fromChatRoom; // @dynamic fromChatRoom;
@property(nonatomic) unsigned int fromChatRoomCount; // @dynamic fromChatRoomCount;
@property(nonatomic) unsigned int userCount; // @dynamic userCount;
@property(retain, nonatomic) NSMutableArray *userNameList; // @dynamic userNameList;

@end

