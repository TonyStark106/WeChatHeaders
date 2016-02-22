//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface EmoticonMd5Object : MMObject <PBCoding>
{
    unsigned int m_status;
    NSString *m_md5;
    NSString *m_cdnUrl;
}

+ (unsigned int)StatusValueFailed;
+ (unsigned int)StatusValueComplete;
+ (unsigned int)StatusValueUnComplete;
+ (void)initialize;
@property(retain, nonatomic) NSString *m_cdnUrl; // @synthesize m_cdnUrl;
@property(nonatomic) unsigned int m_status; // @synthesize m_status;
@property(retain, nonatomic) NSString *m_md5; // @synthesize m_md5;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

