//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSRecursiveLock;

@interface WCOutAddressBookLogic : MMObject
{
    long long m_addressBookStatus;
    void *m_addressBook;
    _Bool m_isLoadingAddressBook;
    _Bool m_hasLoadAddressBook;
    _Bool m_localAddressBookChanged;
    NSArray *m_phoneContacts;
    double m_lastUpdateAddressBookTime;
    NSRecursiveLock *m_oLock;
}

@property(nonatomic) void *addressBook; // @synthesize addressBook=m_addressBook;
@property(readonly, nonatomic) _Bool hasLoadPhoneContacts; // @synthesize hasLoadPhoneContacts=m_hasLoadAddressBook;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)localAddressBookChanged;
- (void)addCacheWithPhoneContacts:(id)arg1;
- (void)loadAsyncNeedUpdate:(_Bool)arg1;
- (void)tryLoad;
- (_Bool)canSyncAddressBook;
- (_Bool)addressBookStatusIsDenied;
- (id)getPhoneContacts;
- (void)loadAddressBook;
- (id)init;
- (void)dealloc;

@end

