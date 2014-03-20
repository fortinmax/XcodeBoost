//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CNDirectoryResultBuilder.h"

@class CNMutableContact;

@interface CNContactDirectoryResultBuilder : NSObject <CNDirectoryResultBuilder>
{
    CNMutableContact *_contact;
}

+ (id)builder;
- (void)setImageData:(id)arg1;
- (void)addValue:(id)arg1 withLabel:(id)arg2 toPropertyWithKey:(id)arg3;
- (void)addPostalAddress:(id)arg1 withLabel:(id)arg2;
- (void)addInstantMessageUsername:(id)arg1 service:(id)arg2 label:(id)arg3;
- (void)addPhoneNumber:(id)arg1 withLabel:(id)arg2;
- (void)addEmailAddress:(id)arg1 withLabel:(id)arg2;
- (void)setBirthdayComponents:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setOrganization:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)build;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
