//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSWindow;

@interface ABDeleteGroupSheet : NSObject
{
    NSWindow *_window;
    NSString *_groupName;
    int _containmentPersonality;
}

@property int containmentPersonality; // @synthesize containmentPersonality=_containmentPersonality;
@property(copy) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain) NSWindow *window; // @synthesize window=_window;
- (void)beginSheetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end
