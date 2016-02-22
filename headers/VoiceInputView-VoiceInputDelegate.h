//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VoiceInputView.h"

#import "IVoiceInputExt.h"

@class NSString;

@interface VoiceInputView (VoiceInputDelegate) <IVoiceInputExt>
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)OnGetText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnEndRecord;
- (void)OnStartRecord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

