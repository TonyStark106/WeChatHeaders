//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayPayUCreateAccountRequest : NSObject
{
    NSString *m_dial_code;
    NSString *m_number;
    NSString *m_pwd;
    NSString *m_secret_question_id;
    NSString *m_secret_question_answer;
    NSString *m_payu_ref;
}

@property(retain, nonatomic) NSString *m_secret_question_id; // @synthesize m_secret_question_id;
@property(retain, nonatomic) NSString *m_secret_question_answer; // @synthesize m_secret_question_answer;
@property(retain, nonatomic) NSString *m_dial_code; // @synthesize m_dial_code;
@property(retain, nonatomic) NSString *m_number; // @synthesize m_number;
@property(retain, nonatomic) NSString *m_payu_ref; // @synthesize m_payu_ref;
@property(retain, nonatomic) NSString *m_pwd; // @synthesize m_pwd;
- (void).cxx_destruct;
- (void)dealloc;

@end
