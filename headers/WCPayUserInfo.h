//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, WCPayCredInfo;

@interface WCPayUserInfo : NSObject <NSCoding>
{
    int m_regFlag;
    NSString *m_usrName;
    WCPayCredInfo *m_usrCredInfo;
    NSString *m_usrIDNumber;
    NSString *m_usrPhoneNumber;
    unsigned int m_cardUserFlag;
    _Bool m_bHadCard;
    NSString *m_nsFacingReceiverQRCode;
    _Bool m_bCanUseNewCardToResetPwd;
    NSString *m_nsResetPwdNeedToOpenUrl;
    _Bool _m_bTouchIDOpen;
    _Bool _m_bTouchIDEnable;
    NSString *m_nsTouchIDForbidword;
}

@property(nonatomic) _Bool m_bTouchIDEnable; // @synthesize m_bTouchIDEnable=_m_bTouchIDEnable;
@property(nonatomic) _Bool m_bTouchIDOpen; // @synthesize m_bTouchIDOpen=_m_bTouchIDOpen;
@property(retain, nonatomic) NSString *m_nsTouchIDForbidword; // @synthesize m_nsTouchIDForbidword;
@property(retain, nonatomic) NSString *m_nsResetPwdNeedToOpenUrl; // @synthesize m_nsResetPwdNeedToOpenUrl;
@property(nonatomic) _Bool m_bCanUseNewCardToResetPwd; // @synthesize m_bCanUseNewCardToResetPwd;
@property(retain, nonatomic) NSString *m_nsFacingReceiverQRCode; // @synthesize m_nsFacingReceiverQRCode;
@property(nonatomic) _Bool m_bHadCard; // @synthesize m_bHadCard;
@property(nonatomic) unsigned int m_cardUserFlag; // @synthesize m_cardUserFlag;
@property(retain, nonatomic) NSString *m_usrPhoneNumber; // @synthesize m_usrPhoneNumber;
@property(retain, nonatomic) NSString *m_usrName; // @synthesize m_usrName;
@property(retain, nonatomic) NSString *m_usrIDNumber; // @synthesize m_usrIDNumber;
@property(retain, nonatomic) WCPayCredInfo *m_usrCredInfo; // @synthesize m_usrCredInfo;
@property(nonatomic) int m_regFlag; // @synthesize m_regFlag;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

