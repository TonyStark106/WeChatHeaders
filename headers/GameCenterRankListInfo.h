//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSString;

@interface GameCenterRankListInfo : MMObject
{
    _Bool _hasRank;
    NSString *_appID;
    NSArray *_rankList;
}

@property(retain, nonatomic) NSArray *rankList; // @synthesize rankList=_rankList;
@property(nonatomic) _Bool hasRank; // @synthesize hasRank=_hasRank;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (void)dealloc;

@end

