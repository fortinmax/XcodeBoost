//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABBookCommand.h>

#import "ABUndoableCommand.h"

@interface ABBookUndoableCommand : ABBookCommand <ABUndoableCommand>
{
}

- (void)visit:(id)arg1;
- (void)executeRedo;
- (void)executeUndo;
- (void)execute;
- (id)actionName;

@end
