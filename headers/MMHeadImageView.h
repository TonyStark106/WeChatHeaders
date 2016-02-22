//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "IContactMgrExt.h"
#import "IEnterpriseContactMgrExt.h"
#import "IHeadImageExt.h"
#import "IKFContactExt.h"
#import "IMsgExt.h"
#import "IStrangerContactMgrExt.h"
#import "LongPressImageViewDelegate.h"

@class MMUILongPressImageView, NSString, UIButton, UIColor, UIImage, UIImageView;

@interface MMHeadImageView : MMUIView <IKFContactExt, IEnterpriseContactMgrExt, IMsgExt, IHeadImageExt, LongPressImageViewDelegate, IContactMgrExt, IStrangerContactMgrExt>
{
    MMUILongPressImageView *_headImageView;
    UIButton *_borderButton;
    NSString *_nsHeadImgUrl;
    NSString *_nsUsrName;
    _Bool _bAutoUpdate;
    struct CGSize _imageSize;
    UIImage *_borderImage;
    UIImage *_borderImageHL;
    UIColor *_borderColor;
    UIColor *_shadowColor;
    long long _borderWidth;
    long long _shadowWidth;
    _Bool _bAddBorder;
    _Bool _bRoundedCorner;
    id _oTarget;
    SEL _selAction;
    id _object;
    id _oLongPressTarget;
    SEL _selLongPressAction;
    id _oLongPressObject;
    _Bool _bNeedHandleLongPress;
    UIImageView *_sceneImageView;
    unsigned int m_conerSize;
    UIImage *_defaultImage;
    unsigned char _headImageType;
    unsigned char _headUseScene;
    unsigned char _headCategory;
    _Bool _isHeadImgExistedLocal;
    _Bool _isShowCertIcon;
    UIImageView *_certIconView;
}

@property(nonatomic) _Bool isShowCertIcon; // @synthesize isShowCertIcon=_isShowCertIcon;
@property(nonatomic) unsigned char headCategory; // @synthesize headCategory=_headCategory;
@property(nonatomic) unsigned char headUseScene; // @synthesize headUseScene=_headUseScene;
@property(retain, nonatomic) MMUILongPressImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) unsigned char headImageType; // @synthesize headImageType=_headImageType;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) unsigned int m_conerSize; // @synthesize m_conerSize;
@property(readonly, nonatomic) NSString *nsUsrName; // @synthesize nsUsrName=_nsUsrName;
@property(nonatomic) _Bool bAddBorder; // @synthesize bAddBorder=_bAddBorder;
@property(nonatomic) long long shadowWidth; // @synthesize shadowWidth=_shadowWidth;
@property(nonatomic) long long borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIImage *borderImageHL; // @synthesize borderImageHL=_borderImageHL;
@property(retain, nonatomic) UIImage *borderImage; // @synthesize borderImage=_borderImage;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (void)OnLongPressGesture:(id)arg1;
- (void)OnPress:(id)arg1;
- (void)onModifyEnterpriseContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)updateCertInfoView;
- (void)addSceneImageView:(long long)arg1;
- (void)updateHeadImage:(id)arg1;
- (void)setTargetForLongPress:(id)arg1 action:(SEL)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2 withObject:(id)arg3;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)onKFContactHeadImgUpdate:(id)arg1;
- (void)onHeadImageChange:(id)arg1;
- (void)updateExtensionRegister;
- (void)updateUsrName:(id)arg1 withHeadImgUrl:(id)arg2;
- (id)getRealUserName:(id)arg1;
- (void)doUpdateHeadImg:(_Bool)arg1;
- (void)checkAndUpdateImage;
- (void)setHeadImageByName:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithUsrName:(id)arg1 headImgUrl:(id)arg2 bAutoUpdate:(_Bool)arg3 bRoundCorner:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
