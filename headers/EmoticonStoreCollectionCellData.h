//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface EmoticonStoreCollectionCellData : MMObject
{
    NSString *m_title;
    NSString *m_iconUrl;
    NSString *m_tagUrl;
    unsigned int m_reqType;
    unsigned int m_position;
}

+ (void)initialize;
@property(nonatomic) unsigned int m_reqType; // @synthesize m_reqType;
@property(nonatomic) unsigned int m_position; // @synthesize m_position;
@property(retain, nonatomic) NSString *m_tagUrl; // @synthesize m_tagUrl;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

