//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABAccountHidingPolicy.h"

@class ABAddressBook;

@interface ABDefaultAccountHidingPolicy : NSObject <ABAccountHidingPolicy>
{
    ABAddressBook *_addressBook;
    unsigned long long _numberOfDefaultableAccounts;
}

- (BOOL)shouldHideAccount:(id)arg1;
- (BOOL)isAccountEmpty:(id)arg1;
- (BOOL)isAccountEligibleForHiding:(id)arg1;
- (BOOL)isDefaultAccount:(id)arg1;
- (void)analyzeAccount:(id)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1;

@end
