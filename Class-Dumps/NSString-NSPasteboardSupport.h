//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSString.h>

#import "NSPasteboardReading.h"
#import "NSPasteboardWriting.h"

@interface NSString (NSPasteboardSupport) <NSPasteboardWriting, NSPasteboardReading>
+ (id)readableTypesForPasteboard:(id)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
@end
