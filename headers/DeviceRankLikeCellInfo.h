//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface DeviceRankLikeCellInfo : MMObject
{
    unsigned int uiScore;
    unsigned int uiRankNum;
    unsigned int uiLikeCount;
    unsigned int uiLikeState;
    NSString *nsUserName;
}

@property(nonatomic) unsigned int uiLikeState; // @synthesize uiLikeState;
@property(nonatomic) unsigned int uiLikeCount; // @synthesize uiLikeCount;
@property(nonatomic) unsigned int uiRankNum; // @synthesize uiRankNum;
@property(nonatomic) unsigned int uiScore; // @synthesize uiScore;
@property(retain, nonatomic) NSString *nsUserName; // @synthesize nsUserName;
- (void).cxx_destruct;

@end

