//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface WCADVideoWrap : NSObject
{
    NSString *adID;
    NSString *publishID;
    NSString *uxInfo;
    unsigned long long startTime;
    NSMutableArray *arrPlayInfo;
}

@property(retain, nonatomic) NSMutableArray *arrPlayInfo; // @synthesize arrPlayInfo;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo;
@property(retain, nonatomic) NSString *publishID; // @synthesize publishID;
@property(retain, nonatomic) NSString *adID; // @synthesize adID;
- (void).cxx_destruct;
- (id)init;

@end

