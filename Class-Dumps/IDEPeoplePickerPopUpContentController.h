//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import "DVTReplacementViewDelegate.h"

@class ABAddressBook, ABPerson, DVTBorderedView, DVTReplacementView, IDEPeoplePickerContentViewController, NSButton, NSImageView, NSString, NSView;

@interface IDEPeoplePickerPopUpContentController : DVTViewController <DVTReplacementViewDelegate>
{
    DVTReplacementView *_replacementView;
    DVTBorderedView *_mainView;
    NSButton *_chooseButton;
    NSButton *_secondaryButton;
    NSButton *_primaryButton;
    BOOL _showingExisting;
    BOOL _usingTemporaryPerson;
    BOOL _didPickExisting;
    BOOL _madeChange;
    ABAddressBook *_addressBook;
    ABPerson *_selectedPerson;
    IDEPeoplePickerContentViewController *_currentVC;
    BOOL _pickingPerson;
    NSImageView *_replacementImageView;
    BOOL _animationInProgress;
    NSView *_nextKeyView;
    id <RVPeoplePickerDelegate> _delegate;
}

+ (id)defaultViewNibName;
@property __weak id <RVPeoplePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) BOOL pickingPerson; // @synthesize pickingPerson=_pickingPerson;
@property(retain) IDEPeoplePickerContentViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(readonly) ABPerson *selectedPerson; // @synthesize selectedPerson=_selectedPerson;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_cleanUpAnimationForView:(id)arg1;
- (void)_setUpAnimationImageViewWithDirection:(double)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)_addAnimationForKey:(id)arg1 toView:(id)arg2;
- (void)_setAnimationDuration;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)chooseExisting:(id)arg1;
- (void)teardown;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
@property(retain) NSString *selectedPersonIdentifier;
- (void)viewDidInstall;
- (void)_resetButtons;

@end
