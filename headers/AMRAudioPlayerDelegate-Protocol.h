//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AudioPlayerUserData;

@protocol AMRAudioPlayerDelegate

@optional
- (void)OnAMREarTip;
- (void)OnAMREndPlaying:(AudioPlayerUserData *)arg1 isForceStop:(_Bool)arg2;
- (void)OnAMRBeginPlaying:(AudioPlayerUserData *)arg1 ErrNo:(int)arg2;
- (void)OnAMRLevelMeter:(AudioPlayerUserData *)arg1 Peak:(float)arg2;
@end

