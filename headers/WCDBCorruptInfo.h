//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRecursiveLock, NSString;

@interface WCDBCorruptInfo : NSObject
{
    unsigned int m_dbID;
    id m_dbObject;
    NSRecursiveLock *m_dbLock;
    NSString *m_dbPath;
}

@property(retain, nonatomic) NSString *m_dbPath; // @synthesize m_dbPath;
@property(retain, nonatomic) NSRecursiveLock *m_dbLock; // @synthesize m_dbLock;
@property(nonatomic) __weak id m_dbObject; // @synthesize m_dbObject;
@property(nonatomic) unsigned int m_dbID; // @synthesize m_dbID;
- (void).cxx_destruct;
- (_Bool)closeDB;
- (_Bool)clearCorruptNum;
- (_Bool)isValid;
- (id)description;

@end

