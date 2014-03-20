//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ABInstantMessageService : NSObject
{
    NSString *_serviceKey;
    NSDictionary *_actionURITemplates;
}

+ (id)videoChatURITemplatesByServiceKey;
+ (id)audioChatURITemplatesByServiceKey;
+ (id)textChatURITemplatesByServiceKey;
+ (id)instantMessageServiceWithKey:(id)arg1;
@property(retain) NSDictionary *actionURITemplates; // @synthesize actionURITemplates=_actionURITemplates;
@property(copy) NSString *serviceKey; // @synthesize serviceKey=_serviceKey;
- (id)actionURIForUsername:(id)arg1 actionType:(id)arg2;
- (void)dealloc;
- (id)initWithServiceKey:(id)arg1;

@end
