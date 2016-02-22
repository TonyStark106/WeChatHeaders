//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIAlertView.h"

#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSMutableDictionary, NSString;

@interface WCUIAlertView : MMUIAlertView <UIAlertViewDelegate, UITextFieldDelegate>
{
    NSMutableDictionary *m_dicTarget;
    NSMutableDictionary *m_dicSel;
    id m_userData;
    struct timeval m_tvStart;
    id m_disMissTarget;
    SEL m_disMissSel;
    id m_textFieldTarget;
    SEL m_textFieldSel;
    int m_uiTextFieldMaxLen;
}

+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 btnTitle:(id)arg9 target:(id)arg10 sel:(SEL)arg11;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelBtnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8;
@property(retain, nonatomic) id m_userData; // @synthesize m_userData;
- (void).cxx_destruct;
- (void)show;
- (void)setUserData:(id)arg1;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addCancelBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)addBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)setDisMissTarget:(id)arg1 sel:(SEL)arg2;
- (id)getTextField;
- (void)setTextFieldMaxLen:(unsigned int)arg1;
- (void)showTextFieldWithTarget:(id)arg1 sel:(SEL)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldDidEndOnExit;
- (void)willPresentAlertView:(id)arg1;
- (unsigned int)getStayTime;
- (void)setStartTime;
- (id)initWithTitle:(id)arg1 message:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
