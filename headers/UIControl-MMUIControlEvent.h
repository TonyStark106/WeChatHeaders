//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@interface UIControl (MMUIControlEvent)
+ (id)eventName:(unsigned long long)arg1;
- (void)callAction:(unsigned long long)arg1 sender:(id)arg2 forEvent:(id)arg3;
- (void)safeRemoveAllEventsTarget;
- (void)safeRemoveTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)UIControlEventAllEvents:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventSystemReserved:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventApplicationReserved:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventAllEditingEvents:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventAllTouchEvents:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventEditingDidEndOnExit:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventEditingDidEnd:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventEditingChanged:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventEditingDidBegin:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventValueChanged:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventTouchCancel:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventTouchUpOutside:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventTouchUpInside:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventTouchDragExit:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventTouchDragEnter:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventTouchDragOutside:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventTouchDragInside:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventTouchDownRepeat:(id)arg1 forEvent:(id)arg2;
- (void)UIControlEventTouchDown:(id)arg1 forEvent:(id)arg2;
- (_Bool)safeAddTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
@end
