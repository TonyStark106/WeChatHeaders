//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface MMResDecryptUrlInfo : MMObject
{
    NSString *_resUrl;
    NSString *_version;
    NSString *_aesKey;
    NSString *_md5;
}

@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;
- (void).cxx_destruct;
- (void)dealloc;

@end

