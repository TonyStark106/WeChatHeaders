//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WXTalkDNSController : NSObject
{
    unsigned int _netType;
    unsigned int relayPort;
    NSString *relayIP;
    NSArray *relayIPList;
}

@property(retain, nonatomic) NSArray *relayIPList; // @synthesize relayIPList;
@property(nonatomic) unsigned int relayPort; // @synthesize relayPort;
@property(retain, nonatomic) NSString *relayIP; // @synthesize relayIP;
- (void).cxx_destruct;
- (void)GetIPFromDNSWithNetType:(unsigned int)arg1;
- (id)getIpListFromHost:(id)arg1;
- (void)dealloc;
- (id)init;

@end

