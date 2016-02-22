//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ABNewPersonViewControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "ILinkEventExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, MMVcardItem, NSString;

@interface VcardViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, ABPeoplePickerNavigationControllerDelegate, ABNewPersonViewControllerDelegate, ILinkEventExt>
{
    MMVcardItem *_vcardItem;
    MMTableView *_tableView;
    NSString *_copyedText;
    map_0e718273 _mapSectionToSectionType;
    map_0e718273 _mapPersonCellToCellType;
    map_0e718273 _mapUrlCellToCellType;
    map_0e718273 _mapBirthdayCellToCellType;
    map_0e718273 _mapNoteCellToCellType;
    map_0e718273 _mapLogoCellToCellType;
    map_0e718273 _mapSoundCellToCellType;
}

@property(retain, nonatomic) NSString *copyedText; // @synthesize copyedText=_copyedText;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMVcardItem *vcardItem; // @synthesize vcardItem=_vcardItem;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onCopy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)heightForUrlSectionRow:(unsigned long long)arg1;
- (double)heightForPersonSectionRow:(unsigned long long)arg1;
- (double)heightForCellAddress:(id)arg1;
- (double)heightForCellText:(id)arg1;
- (void)makeSoundSectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeSoundCell:(id)arg1;
- (void)makeLogoSectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeNoteSectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeBirthdaySectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeUrlSectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makePersonSectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeAddressCell:(id)arg1 addressType:(id)arg2 addressItem:(id)arg3;
- (id)validAddressFields:(id)arg1;
- (void)makeCell:(id)arg1 col:(id)arg2 value:(id)arg3;
- (int)getLinesForLabelValueText:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)selectSoundSectionRow:(unsigned long long)arg1;
- (void)selectUrlSectionRow:(unsigned long long)arg1;
- (id)ensureHttpScheme:(id)arg1;
- (void)selectPersonSectionRow:(unsigned long long)arg1;
- (void)callPhoneNumber:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)createNewContact;
- (void)addToExistContact;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)openNewPersonViewController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)onCancel:(id)arg1;
- (void)addRelatedNameProperty:(void *)arg1;
- (void)addUrlProperty:(void *)arg1;
- (void)addAddressProperty:(void *)arg1;
- (void)addAddressProperty:(id)arg1 fromVcardAddress:(id)arg2;
- (void)addPhoneProperty:(void *)arg1;
- (void)addEmailProperty:(void *)arg1;
- (void)addSingleValueProperty:(void *)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)onReturn;
- (void)initView;
- (void)initFooterView;
- (void)onAddContact:(id)arg1;
- (void)initHeaderView;
- (id)getShowName:(id)arg1;
- (void)initData;
- (void)initSectionType;
- (void)initCellType;
- (void)initSoundSectionCellType;
- (void)initLogoSectionCellType;
- (void)initNoteSectionCellType;
- (void)initBirthdaySectionCellType;
- (void)initUrlSectionCellType;
- (void)initPersonSectionCellType;
- (_Bool)containDigit:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

