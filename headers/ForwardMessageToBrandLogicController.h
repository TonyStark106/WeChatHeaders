//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ForwardMessageToBrandLogicController : NSObject
{
    id <ForwardMessageToBrandLogicControllerDelegate> m_delegate;
}

@property(nonatomic) __weak id <ForwardMessageToBrandLogicControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)forwardMessage:(id)arg1 toContact:(id)arg2;
- (void)dealloc;
- (id)init;

@end

