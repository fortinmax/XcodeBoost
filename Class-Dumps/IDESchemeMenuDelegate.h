//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSMenuDelegate.h"

@interface IDESchemeMenuDelegate : NSObject <NSMenuDelegate>
{
    BOOL _needsUpdate;
    id _currentRunContextManagerObservingToken;
}

+ (id)_currentRunContextManager;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (id)_schemeMenuItems;
- (void)_selectScheme:(id)arg1;
- (id)init;

@end
