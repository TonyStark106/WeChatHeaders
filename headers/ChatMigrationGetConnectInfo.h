//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@interface ChatMigrationGetConnectInfo : MMObject <PBMessageObserverDelegate>
{
    id <ChatMigrationGetConnectInfoDelegate> m_delegate;
}

@property(nonatomic) __weak id <ChatMigrationGetConnectInfoDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)GetConnectInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end

