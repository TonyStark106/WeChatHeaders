//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "ContactsDataLogicDelegate.h"
#import "MMSearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ContactsDataLogic, MMSearchBar, MMTableView, NSString;

@interface GroupSelectContactsViewController : MMSearchBarDisplayController <UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource, MMSearchBarDelegate, ContactsDataLogicDelegate>
{
    id <GroupSelectContactsViewControllerDelegate> m_delegate;
    MMTableView *m_tableView;
    ContactsDataLogic *m_contactsDataLogic;
    _Bool m_bShowSearchBar;
    unsigned int m_uiDataScene;
    MMSearchBar *m_mmSearchBar;
    double m_CurrentScreenWidth;
}

@property(nonatomic) unsigned int m_uiDataScene; // @synthesize m_uiDataScene;
@property(nonatomic) _Bool m_bShowSearchBar; // @synthesize m_bShowSearchBar;
@property(nonatomic) __weak id <GroupSelectContactsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)initSearchBar;
- (void)initTableView;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)initTitleArea;
- (void)initData;
- (void)onCancelBack:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
