//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NSRulerViewPrivateData : NSObject
{
    id _accessibilityPanelController;
    NSMutableArray *_markerLines;
    id _draggingMarkerView;
    id _formattedHashLabelCache;
    struct {
        unsigned int _showTooltip:1;
        unsigned int _rtlLayoutDirection:1;
        unsigned int _accessoryHostMode:1;
        unsigned int _reserved:29;
    } _rvFlags;
}

- (void)dealloc;

@end
