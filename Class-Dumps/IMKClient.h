//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMKClientProtocol.h"

@class IMKInputSession, NSArray, NSBundle, NSConnection, NSDictionary, NSRecursiveLock, NSString;

__attribute__((visibility("hidden")))
@interface IMKClient : NSObject <IMKClientProtocol>
{
    id _server;
    IMKInputSession *_currentSession;
    NSString *_serverName;
    NSString *_bundleIdentifier;
    NSBundle *_bundle;
    NSDictionary *_modes;
    NSString *_connection;
    NSDictionary *_inputMethodInfoDictionary;
    NSArray *localizedStrings;
    NSDictionary *modes;
    NSConnection *_serverConnection;
    NSDictionary *_selectorDictionary;
    NSDictionary *_modeMenuKeys;
    BOOL _lookedForMenuKeys;
    struct OpaqueEventHandlerRef *_eventHandlerRef;
    struct __CFMessagePort *_launchPort;
    long long _exceptionTimeoutBumpCount;
    double _timeout;
    BOOL _clientHasDied;
    BOOL _cleanTermination;
    CDUnknownBlockType completionBlock;
    BOOL _serverDiedBadly;
    BOOL _waitingForMenu;
    BOOL _isServerStarted;
    BOOL _getServerRetryPending;
    BOOL _getServerGetMenuWasCalledDuringRetry;
    SEL _getServerRetryNotificationSel;
    id _getServerRetryNotificationTarget;
    long long _getServerRetryCount;
    CDUnknownBlockType _tisSelectInputSourceCompletionBlock;
    NSRecursiveLock *_lock;
}

@property BOOL _waitingForMenu; // @synthesize _waitingForMenu;
@property BOOL serverDiedBadly; // @synthesize serverDiedBadly=_serverDiedBadly;
@property BOOL cleanTermination; // @synthesize cleanTermination=_cleanTermination;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)completionBlock;
- (void)serverWillTerminate;
- (void)dealloc;
- (id)_serverConnection;
- (id)_bundle;
- (BOOL)_isNonLaunchOption;
- (BOOL)_startServer;
- (id)_safeServer;
- (int)_launch:(id)arg1 fromBundle:(id)arg2 throughPort:(struct __CFMessagePort *)arg3;
- (double)_timeout;
- (BOOL)_bumpTimeout;
- (void)_cancelGetServerRetry;
- (void)_getServerRetry;
- (BOOL)_requestGetServerRetryNotifyingTarget:(id)arg1 withSelector:(SEL)arg2;
- (void)_checkSetTISCompletionBlock;
- (void)_untargetFromServerRetry:(id)arg1;
- (BOOL)_setTargetForServerRetry:(id)arg1;
- (id)_targetForServerRetry;
- (BOOL)_isServerRetryPending;
- (id)server;
- (id)_getServer;
- (double)_defaultTimeout;
- (void)_senderIsInvalid:(id)arg1;
- (BOOL)_isPalette;
- (void)setCurrentSession:(id)arg1;
- (id)currentSession;
- (id)imageFileForName:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (void)_setEventHandlerRef:(struct OpaqueEventHandlerRef *)arg1;
- (struct OpaqueEventHandlerRef *)_eventHandlerRef;
- (id)modes;
- (id)_inputMethodInfoDictionary;
- (struct OpaqueMenuRef *)menu;
- (struct OpaqueMenuRef *)menuWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setTISSelectCompletionBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)tisSelectCompletionBlock;
- (BOOL)haveTISSelectCompletionBlock;
- (void)_addActionFrom:(id)arg1 toDictionary:(id)arg2 forCarbonMenu:(struct OpaqueMenuRef *)arg3 base:(unsigned long long)arg4;
- (id)_buildSelectorDictionaryFromMenuDict:(id)arg1 settingCommandID:(struct OpaqueMenuRef *)arg2;
- (id)_selectorDictionary;
- (void)_setSelectorDictionary:(id)arg1;
- (void)_setBundleIdentifier:(id)arg1;
- (id)bundleIdentifier;
- (BOOL)switchedInputMode:(struct OpaqueEventRef *)arg1;
- (struct __TISInputSource *)_mapKeyCodeToInputSource:(id)arg1 modifiers:(id)arg2;
- (id)_modeMenuKeys;
- (id)initWithBundleIdentifier:(id)arg1;

@end
