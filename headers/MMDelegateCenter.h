//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class DeleagateProxyCatchUnImplementMethod, NSMethodSignature, NSString;

@interface MMDelegateCenter : MMService <MMService>
{
    DeleagateProxyCatchUnImplementMethod *m_catchUnimplementMethodObj;
    NSMethodSignature *m_unImplementMethodSignature;
    struct map<unsigned long, MMDicDelegates *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, MMDicDelegates *>>> m_mapOwnerMapDelegate;
    struct map<unsigned long, std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>*, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>*>>> m_mapDelegateMapOwner;
}

+ (unsigned long long)generateIdKey:(id)arg1;
+ (_Bool)hasProtocol:(id)arg1 theProtocol:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)onServiceMemoryWarning;
- (_Bool)clearOwnersOnDelegateEx:(void *)arg1;
- (_Bool)wrapclearOwnersOnDelegate:(id)arg1;
- (_Bool)clearOwnersOnDelegate:(id)arg1;
- (_Bool)unRegisterAllDelegateOnOwnerEx:(void *)arg1;
- (_Bool)wrapUnRegisterAllDelegateOnOwner:(id)arg1;
- (_Bool)unRegisterAllDelegateOnOwner:(id)arg1;
- (void)setOwnerOnDelegate:(id)arg1 delegate:(id)arg2;
- (id)setDelegateOnOwner:(id)arg1 delegate:(id)arg2 protocols:(id)arg3;
- (id)getDelegateOnOwner:(unsigned long long)arg1 delegateid:(id)arg2 protocols:(id)arg3;
- (id)registerDelegateOnOwner:(id)arg1 delegate:(id)arg2 forProtocols:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

