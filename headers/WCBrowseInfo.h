//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface WCBrowseInfo : NSObject
{
    unsigned long long startBrowseTime;
    NSMutableSet *browseFeedId;
    NSMutableSet *commentOrLikeFeedId;
    NSMutableSet *clickFeedId;
    NSMutableSet *clickAlbumUser;
    unsigned int postFeedCount;
    NSMutableSet *exposeFeedId;
    NSMutableSet *favFeedId;
    NSMutableSet *blacklistUser;
    NSMutableSet *outsiderUser;
    NSMutableSet *browseNewFeedId;
    _Bool hasNewSnsMsgWhenEntrance;
    _Bool hasNewChatMsgWhenExit;
    NSString *startBrowseSnsObjectId;
    NSString *endBrowseSnsObjectId;
    NSString *nextBrowseSnsObjectId;
    unsigned int browseBrandUrlFeedCount;
    unsigned int browseNotBrandUrlFeedCount;
    unsigned int browseTextFeedCount;
    unsigned int browseImageFeedCount;
    unsigned int browseSightFeedCount;
    unsigned int browseAdFeedCount;
    unsigned int browseMusicFeedCount;
    unsigned int contactCount;
    _Bool hasNewFeedInServer;
}

@property(nonatomic) unsigned int contactCount; // @synthesize contactCount;
@property(nonatomic) unsigned int browseMusicFeedCount; // @synthesize browseMusicFeedCount;
@property(nonatomic) unsigned int browseAdFeedCount; // @synthesize browseAdFeedCount;
@property(nonatomic) unsigned int browseSightFeedCount; // @synthesize browseSightFeedCount;
@property(nonatomic) unsigned int browseImageFeedCount; // @synthesize browseImageFeedCount;
@property(nonatomic) unsigned int browseTextFeedCount; // @synthesize browseTextFeedCount;
@property(nonatomic) unsigned int browseNotBrandUrlFeedCount; // @synthesize browseNotBrandUrlFeedCount;
@property(nonatomic) unsigned int browseBrandUrlFeedCount; // @synthesize browseBrandUrlFeedCount;
@property(nonatomic) _Bool hasNewFeedInServer; // @synthesize hasNewFeedInServer;
@property(retain, nonatomic) NSString *nextBrowseSnsObjectId; // @synthesize nextBrowseSnsObjectId;
@property(retain, nonatomic) NSString *endBrowseSnsObjectId; // @synthesize endBrowseSnsObjectId;
@property(retain, nonatomic) NSString *startBrowseSnsObjectId; // @synthesize startBrowseSnsObjectId;
@property(nonatomic) _Bool hasNewChatMsgWhenExit; // @synthesize hasNewChatMsgWhenExit;
@property(nonatomic) _Bool hasNewSnsMsgWhenEntrance; // @synthesize hasNewSnsMsgWhenEntrance;
@property(retain, nonatomic) NSMutableSet *browseNewFeedId; // @synthesize browseNewFeedId;
@property(retain, nonatomic) NSMutableSet *outsiderUser; // @synthesize outsiderUser;
@property(retain, nonatomic) NSMutableSet *blacklistUser; // @synthesize blacklistUser;
@property(retain, nonatomic) NSMutableSet *favFeedId; // @synthesize favFeedId;
@property(retain, nonatomic) NSMutableSet *exposeFeedId; // @synthesize exposeFeedId;
@property(nonatomic) unsigned int postFeedCount; // @synthesize postFeedCount;
@property(retain, nonatomic) NSMutableSet *clickAlbumUser; // @synthesize clickAlbumUser;
@property(retain, nonatomic) NSMutableSet *clickFeedId; // @synthesize clickFeedId;
@property(retain, nonatomic) NSMutableSet *commentOrLikeFeedId; // @synthesize commentOrLikeFeedId;
@property(retain, nonatomic) NSMutableSet *browseFeedId; // @synthesize browseFeedId;
@property(nonatomic) unsigned long long startBrowseTime; // @synthesize startBrowseTime;
- (void).cxx_destruct;
- (id)genStatInfo;
- (void)resetStatus;
- (id)init;

@end

