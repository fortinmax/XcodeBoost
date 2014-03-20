//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PDFKit/PDFAction.h>

#import "NSCopying.h"

@class PDFActionGoToPrivateVars;

@interface PDFActionGoTo : PDFAction <NSCopying>
{
    PDFActionGoToPrivateVars *_pdfPriv2;
}

- (id)description;
- (void)setDestination:(id)arg1;
- (id)destination;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDestination:(id)arg1;
- (id)init;
- (id)toolTipNoLabel;
- (id)toolTip;
- (void)addDestinationToDictionaryRef:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)createDictionaryRef;
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (void)commonInit;

@end
