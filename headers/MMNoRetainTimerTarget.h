//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMNoRetainTimerTarget : NSObject
{
    SEL _targetAction;
    id _target;
}

@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL targetAction; // @synthesize targetAction=_targetAction;
- (void).cxx_destruct;
- (void)onNoRetainTimer:(id)arg1;
- (id)initWithTarget:(id)arg1 withAction:(SEL)arg2;

@end

