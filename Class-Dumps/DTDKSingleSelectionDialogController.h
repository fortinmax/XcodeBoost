//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DTDKSelectionDialogController.h>

@class NSArray, NSArrayController;

@interface DTDKSingleSelectionDialogController : DTDKSelectionDialogController
{
    NSArray *_menuContents;
    NSArrayController *_arrayController;
}

+ (id)dialogController;
@property(retain) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
- (void).cxx_destruct;
- (id)selectedIdentifiers;
@property(copy) NSArray *menuContents; // @synthesize menuContents=_menuContents;
- (void)setChoices:(id)arg1;
- (void)loadWindow;

@end
