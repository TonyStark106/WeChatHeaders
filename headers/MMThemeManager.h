//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class MMColor, MMDrawScript, MMRuleSetList, MMScriptInterpreter, MMTheme, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, NSThread;

@interface MMThemeManager : MMService <MMService>
{
    NSMutableArray *m_themeList;
    MMTheme *m_currentTheme;
    MMColor *m_colorList;
    NSMutableDictionary *m_imageCache;
    long long m_cachedImageSize;
    MMRuleSetList *m_ruleSetList;
    MMRuleSetList *ruleSetListLandscape;
    MMRuleSetList *m_imageMapList;
    MMRuleSetList *m_resMapList;
    NSThread *m_backgroundWorkerThread;
    MMDrawScript *m_drawScripts;
    MMScriptInterpreter *m_scriptInterpreter;
    NSRecursiveLock *m_lock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedThemeManager;
+ (void)initialize;
@property(retain, nonatomic) MMScriptInterpreter *m_scriptInterpreter; // @synthesize m_scriptInterpreter;
@property(retain, nonatomic) MMDrawScript *m_drawScripts; // @synthesize m_drawScripts;
@property(retain, nonatomic) MMRuleSetList *m_resMapList; // @synthesize m_resMapList;
@property(retain, nonatomic) MMRuleSetList *m_imageMapList; // @synthesize m_imageMapList;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=m_lock;
@property(retain, nonatomic) NSThread *backgroundWorkerThread; // @synthesize backgroundWorkerThread=m_backgroundWorkerThread;
@property(retain, nonatomic) MMRuleSetList *ruleSetListLandscape; // @synthesize ruleSetListLandscape;
@property(retain, nonatomic) MMRuleSetList *ruleSetList; // @synthesize ruleSetList=m_ruleSetList;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=m_imageCache;
@property(retain, nonatomic) MMColor *colorList; // @synthesize colorList=m_colorList;
@property(retain, nonatomic) MMTheme *currentTheme; // @synthesize currentTheme=m_currentTheme;
@property(retain, nonatomic) NSMutableArray *themeList; // @synthesize themeList=m_themeList;
- (void).cxx_destruct;
- (_Bool)onServiceMemoryWarning;
- (void)onFirstRun;
- (_Bool)changeThemeByThemeID:(id)arg1;
- (long long)reloadThemeList;
- (void)waitForInstallDone;
- (_Bool)isInstallDone;
- (void)installThemeInBundleInBackground:(long long)arg1;
- (void)startInstallThreadAfterDelay;
- (void)installThemeInBundle;
- (void)onBackgroundInstallDone;
- (_Bool)installThemeUpdatePack:(id)arg1;
- (void)uninstallAllThemes;
- (_Bool)isThemeDirExist;
- (id)getThemeDir;
- (id)imageFromScript:(id)arg1 withArguments:(id)arg2;
- (void)runScript:(id)arg1 withArguments:(id)arg2;
- (void)clearSelfCreateImage;
- (void)clearImageCache;
- (id)getValueOfProperty:(id)arg1 inRuleSet:(id)arg2;
- (id)getRuleSetForSeletor:(id)arg1;
- (id)imageFromColor:(id)arg1;
- (id)localizedImageNamed:(id)arg1;
- (id)localizedImageNamed:(id)arg1 inTheme:(id)arg2;
- (id)makeImageWithFitScale:(id)arg1;
- (id)translateToHDImageName:(id)arg1;
- (id)imageNamed:(id)arg1 Alpha:(float)arg2 Suffix:(id)arg3 ForDifferentIosVersion:(_Bool)arg4;
- (id)imageDisableNamed:(id)arg1;
- (id)imageHighlightNamed:(id)arg1;
- (id)getIconImageByName:(id)arg1;
- (id)imageNamed:(id)arg1;
- (id)image_disable_for_different_ios_version:(id)arg1;
- (id)image_highlight_for_different_ios_version:(id)arg1;
- (id)image_for_different_ios_version:(id)arg1;
- (void)saveImage:(id)arg1 ToSelfCreateImagePath:(id)arg2;
- (id)imageFromSelfCreateImagePath:(id)arg1;
- (id)imageFromSystemFileContent:(id)arg1;
- (id)imageFromImageMap:(id)arg1;
- (id)pathOfResNamed:(id)arg1;
- (id)pathOfImageNamed:(id)arg1;
- (id)imageFromResPackage:(id)arg1 withName:(id)arg2;
- (id)imageNamed:(id)arg1 inTheme:(id)arg2;
- (id)imageNamedWithCurTheme:(id)arg1;
- (void)setUserPreferedTheme:(id)arg1;
- (_Bool)loadUserPreferedThemeNoCallExtension;
- (_Bool)loadUserPreferedTheme;
- (_Bool)loadDefaultTheme;
- (id)getUserThemeIDPrefKey;
- (_Bool)needToClearCache;
- (void)removeImageSizeFromCachedSize:(id)arg1;
- (void)addImageSizeToCachedSize:(id)arg1;
- (void)reloadThemeResource;
- (void)loadScripts;
- (void)loadColors;
- (_Bool)loadCSSFromPath:(id)arg1 IntoRuleSetList:(id)arg2;
- (void)loadImageMap;
- (void)loadResPackageSetting;
- (void)loadLandScapeRuleSets;
- (void)loadRuleSets;
- (_Bool)unPackThemePackToThemeDir;
- (_Bool)isThemesZipInBundle;
- (id)getThemeByThemeID:(id)arg1;
- (id)getDefaultTheme;
- (id)fileOfImageNamed:(id)arg1;
- (_Bool)is568H2xScreen;
- (_Bool)is3xScreen;
- (_Bool)is2xScreen;
- (id)init;
- (void)removeFromThemeList:(id)arg1;
- (void)addToThemeList:(id)arg1;
- (id)getImageCacheObjectForKey:(id)arg1;
- (void)removeImageCacheObjectForKey:(id)arg1;
- (void)setImageCacheObject:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

