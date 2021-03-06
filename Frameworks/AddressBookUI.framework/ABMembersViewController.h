/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABMembersController, _UIAccessDeniedView;

@interface ABMembersViewController : ABAbstractViewController <ABNewPersonViewControllerDelegate, ABMembersControllerDelegate, ABViewControllerBannerViewProtocol, ABPersonEditDelegate> {
    _UIAccessDeniedView *_accessDeniedView;
    id _insertionLabel;
    int _insertionProperty;
    id _insertionValue;
    int _leftButtonBehavior;
    ABMembersController *_membersController;
    int _rightButtonBehavior;
    BOOL _shouldHandleExternalChangeOnPersonViewControllers;
}

@property(readonly) _UIAccessDeniedView * accessDeniedView;
@property(readonly) BOOL allowsCancel;
@property(readonly) BOOL allowsCardEditing;
@property(readonly) BOOL shouldShowGroups;

- (void)_applicationEnteringBackground;
- (void)_applicationEnteringForeground;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)_updateForModel;
- (int)abViewControllerType;
- (id)accessDeniedView;
- (void)addPerson:(id)arg1;
- (BOOL)allowsCancel;
- (BOOL)allowsCardEditing;
- (BOOL)allowsShowingPersonsCards;
- (void)applicationDidResume;
- (BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (void)cancel:(id)arg1;
- (void)cancelRefreshingAccount;
- (void)cancelSearching:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)defaultPNGName;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)handleExternalChangeOnPersonViewControllers;
- (id)indexPathForMember:(void*)arg1;
- (id)initWithModel:(id)arg1;
- (void)insertProperty:(int*)arg1 insertValue:(id*)arg2 insertLabel:(id*)arg3;
- (BOOL)isNavigationButtonEnabled:(int)arg1;
- (void)linksUpdatedForPerson:(void*)arg1;
- (void)loadState;
- (void)loadView;
- (BOOL)membersController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (id)membersController;
- (void)membersControllerDidEndSearching:(id)arg1;
- (void)membersControllerDidEndServerSearch:(id)arg1;
- (void)membersControllerWillEndSearching:(id)arg1;
- (void)membersControllerWillStartSearching:(id)arg1;
- (void)model:(id)arg1 localChangeWithInfo:(struct __CFDictionary { }*)arg2;
- (id)model;
- (void)modelDatabaseChange:(id)arg1;
- (void)nameUpdatedForPerson:(void*)arg1;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 informDelegate:(BOOL)arg3;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerNavigationBarStoppedAnimating:(id)arg1;
- (BOOL)personViewController:(id)arg1 shouldContinueAfterEditingConfirmed:(BOOL)arg2 forPerson:(void*)arg3;
- (void)personWasDeleted;
- (void)personWasSelected:(void*)arg1;
- (void)preferredPersonDidChangeToPerson:(void*)arg1;
- (void)presentGroupsViewController;
- (void)reallyHandleExternalChangeOnPersonViewControllers;
- (void)refreshEverythingNow;
- (void)resetInsertionData;
- (void)resetStateForDisplayedFilterChange;
- (void)searchCurrentContactsGroupForWords:(id)arg1 animated:(BOOL)arg2;
- (BOOL)selectAndScrollMemberVisible:(void*)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (void)setSearchCompletionDelegate:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (BOOL)shouldShowGroups;
- (BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2 selectAndScrollToPerson:(BOOL)arg3;
- (BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3 selectAndScrollToPerson:(BOOL)arg4;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3;
- (void)showInsertEditorForPerson:(void*)arg1 animate:(BOOL)arg2;
- (void)startRefreshingAccount;
- (id)styleProvider;
- (id)tableView;
- (void)updateLeftNavigationButtonAnimated:(BOOL)arg1;
- (void)updateNavigationButtonsAnimated:(BOOL)arg1;
- (void)updateNavigationButtonsInSearchMode:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateNavigationButtonsInSearchMode:(BOOL)arg1;
- (void)updateTitle;
- (void)updateView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
