//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class ABFadingImageView;

__attribute__((visibility("hidden")))
@interface ABFadingScrollView : NSScrollView
{
    ABFadingImageView *_topOccluder;
    ABFadingImageView *_bottomOccluder;
}

- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end
