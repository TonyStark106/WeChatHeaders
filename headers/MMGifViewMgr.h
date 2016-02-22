//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSTimer;

@interface MMGifViewMgr : NSObject
{
    NSMutableArray *m_gifs;
    NSTimer *m_timer;
    unsigned long long m_tickCount;
    NSMutableArray *m_updateQueue;
    unsigned long long m_emptyRoundTripCount;
}

+ (unsigned int)getIdKeyGifMemoryWarning;
+ (unsigned int)getIdKeyIdEmoticon;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedMMGifViewMgr;
+ (void)initialize;
+ (id)resizeToMaxWidth:(int)arg1 andMaxHeight:(int)arg2 originImage:(id)arg3;
@property(retain, nonatomic) NSMutableArray *m_updateQueue; // @synthesize m_updateQueue;
@property(retain, nonatomic) NSTimer *m_timer; // @synthesize m_timer;
@property(retain, nonatomic) NSMutableArray *m_gifs; // @synthesize m_gifs;
- (void).cxx_destruct;
- (void)onApplicationDidReceiveMemoryWarning:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)onApplicationWillTerminate:(id)arg1;
- (void)updateMaxWidth:(unsigned int)arg1;
- (void)refreshGifViewUpdater:(id)arg1;
- (void)unregisterGifViewForUpdate:(id)arg1;
- (id)findGifItemByView:(id)arg1;
- (id)createGifViewFromFile:(id)arg1;
- (id)createGifViewFromData:(id)arg1;
- (id)createGifViewFromData:(id)arg1 withFilter:(int)arg2;
- (void)stopUpdateGifViews;
- (void)startUpdateGifViews;
- (void)updateAllGifItem;
- (id)imageForGifItem:(id)arg1;
- (unsigned long long)getTickCount;
- (unsigned long long)countOfGifItem;
- (void)removeGifItem:(id)arg1;
- (void)addGifItem:(id)arg1;
- (void)removeFromUpdateQueue:(id)arg1;
- (void)addToUpdateQueue:(id)arg1;
- (unsigned long long)countOfUpdateQueue;
- (void)dealloc;
- (id)init;
- (void)UnRegisterSysNotifications;
- (void)RegisterSysNotifications;

@end

