//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PrtlBase.h"

@class NSString;

@interface CSendCardPrtl : PrtlBase
{
    NSString *m_nsUsrName;
    NSString *m_nsContent;
    unsigned int m_uiSendCardType;
    unsigned int m_uiStyle;
}

@property(nonatomic) unsigned int m_uiStyle; // @synthesize m_uiStyle;
@property(nonatomic) unsigned int m_uiSendCardType; // @synthesize m_uiSendCardType;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (void).cxx_destruct;
- (_Bool)HandleResp:(void *)arg1;
- (void)InitReq:(void *)arg1;
- (id)init;

@end

