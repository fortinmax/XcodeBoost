//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAccount, IMHandle, IMMessage, IMTimingCollection, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface IMChat : NSObject
{
    NSString *_guid;
    NSString *_typingGUID;
    NSString *_currentQuery;
    NSString *_identifier;
    IMAccount *_account;
    NSString *_displayName;
    NSString *_roomName;
    NSString *_roomNameWithoutSuffix;
    NSDate *_dateCreated;
    NSDate *_dateModified;
    NSMutableArray *_chatItems;
    NSMutableDictionary *_unfinishedChatItemMap;
    NSArray *_participants;
    NSMutableDictionary *_participantStates;
    id _typingIndicatorTimer;
    IMMessage *_invitationForPendingParticipants;
    NSMutableArray *_messagesPendingJoin;
    NSMutableSet *_guids;
    NSMutableDictionary *_chatItemsChanged;
    NSMutableDictionary *_messageMap;
    NSMutableDictionary *_chatProperties;
    NSMutableDictionary *_participantProperties;
    IMTimingCollection *_timingCollection;
    unsigned long long _overallChatStatus;
    double _joinedTimeInterval;
    unsigned int _shouldAnnouncePeopleJoin:1;
    long long _joinState;
    unsigned char _style;
    unsigned long long _numberOfMessagesToKeepLoaded;
    unsigned long long _chatItemChangeCount;
    unsigned long long _cachedUnreadCount;
    NSMutableSet *_cachedReadMessages;
    unsigned long long _cachedFailureCount;
    unsigned long long _dbFailedCount;
    unsigned long long _dbUnreadCount;
    void *_context;
    unsigned int _hasBeenConfigured:1;
    unsigned int _isRefreshing:1;
    unsigned int _isFirstMessageInvitation:1;
    unsigned int _wasInvitationHandled:1;
    unsigned int _didSendAFinishedMessage:1;
    unsigned int _shouldPostIndividualItemChanges:1;
    unsigned int _shouldPostWillChangeNotification:1;
    unsigned int _shouldPostJoinStatusChangeNotifications:1;
    unsigned int _didPostWillChangeNotification:1;
    unsigned int _hasPendingMarkRead:1;
}

@property(retain, nonatomic) IMMessage *invitationForPendingParticipants; // @synthesize invitationForPendingParticipants=_invitationForPendingParticipants;
@property(readonly, nonatomic) long long joinState; // @synthesize joinState=_joinState;
@property(readonly, nonatomic) NSDate *dateModified; // @synthesize dateModified=_dateModified;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(nonatomic) void *contextInfo; // @synthesize contextInfo=_context;
@property(readonly, nonatomic) unsigned char chatStyle; // @synthesize chatStyle=_style;
@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) IMAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic, setter=_setGUIDs:) NSMutableSet *_guids; // @synthesize _guids;
@property(readonly, nonatomic) NSArray *chatItems; // @synthesize chatItems=_chatItems;
- (id)_initWithDictionaryRepresentation:(id)arg1 initialItems:(id)arg2 participantsHint:(id)arg3 accountHint:(id)arg4;
- (id)description;
- (void)_daemonDied:(id)arg1;
- (void)_daemonAlive:(id)arg1;
- (void)_accountControllerUpdated:(id)arg1;
- (BOOL)_sanityCheckAccounts;
- (void)addPendingParticipants:(id)arg1;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
- (void)_invitePendingParticipants;
- (void)_inviteParticipants:(id)arg1 reason:(id)arg2;
- (id)_pendingParticipants;
- (BOOL)canAddParticipants:(id)arg1;
- (BOOL)canAddParticipant:(id)arg1;
- (void)_addParticipant:(id)arg1;
- (void)leave;
- (void)join;
@property(retain, nonatomic) IMHandle *recipient;
- (void)setRecipient:(id)arg1 locally:(BOOL)arg2;
- (void)_setAccount:(id)arg1 locally:(BOOL)arg2;
- (void)_setAccount:(id)arg1;
- (BOOL)_hasCommunicatedOnService:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;
- (id)allPropertiesOfParticipant:(id)arg1;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (id)valueForChatProperty:(id)arg1;
- (id)allChatProperties;
- (void)_setChatProperties:(id)arg1;
- (BOOL)_isDuplicate:(id)arg1;
- (id)_lastMessageChatItem;
- (void)markAllMessagesAsRead;
- (void)markMessagesAsRead:(id)arg1;
- (void)markMessageAsRead:(id)arg1;
- (void)_markMessagesAsRead:(id)arg1;
- (void)_cacheReadMessageGUID:(id)arg1;
- (void)_setTimerForReadMessageCache;
- (void)__clearReadMessageCache;
- (id)_messageChatItems;
- (void)updateMessage:(id)arg1 flags:(unsigned long long)arg2;
- (void)updateMessage:(id)arg1;
- (BOOL)canSendTransfer:(id)arg1;
- (BOOL)canSendMessage:(id)arg1;
@property(nonatomic) BOOL localUserIsTyping;
- (void)_setLocalUserIsTyping:(BOOL)arg1 suppliedGUID:(id)arg2;
@property(readonly, nonatomic) NSString *localTypingMessageGUID;
- (void)sendMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 adjustingSender:(BOOL)arg2;
- (void)cancelMessage:(id)arg1;
- (void)declineInvitation;
- (void)acceptInvitation;
@property(readonly, nonatomic) BOOL hasUnhandledInvitation;
@property(readonly, nonatomic) NSString *roomNameWithoutSuffix;
@property(readonly, nonatomic) NSString *persistentID;
- (void)_setDisplayName:(id)arg1;
- (void)setRoomName:(id)arg1;
@property(readonly, nonatomic) unsigned long long overallChatStatus;
@property(readonly, nonatomic) BOOL canHaveMultipleParticipants;
@property(readonly, nonatomic) NSString *chatIdentifier;
- (void)_clearCachedIdentifier;
- (unsigned long long)stateForParticipant:(id)arg1;
- (id)participantsWithState:(unsigned long long)arg1;
- (void)_fixLastStatusMessageIfNecessary;
- (void)_remapHandle:(id)arg1 toHandle:(id)arg2;
- (void)_showErrorMessage:(id)arg1;
- (void)_participant:(id)arg1 statusChanged:(int)arg2;
- (void)_setJoinState:(long long)arg1 quietly:(BOOL)arg2;
- (void)_setJoinState:(long long)arg1;
- (BOOL)_handleIncomingMessage:(id)arg1;
- (void)_handleMessageGUIDDeletions:(id)arg1;
- (void)_setParticipantState:(unsigned long long)arg1 forHandle:(id)arg2 quietly:(BOOL)arg3;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (void)_endTiming;
- (void)_startTiming:(id)arg1;
- (id)_timingCollection;
- (void)_accountLoggedOut:(id)arg1;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_recomputeOverallChatStatusQuietly:(BOOL)arg1;
- (void)mark;
- (void)clear;
- (BOOL)deleteAllHistory;
- (BOOL)deleteChatItems:(id)arg1;
- (BOOL)deleteMessageParts:(id)arg1 forMessage:(id)arg2;
- (BOOL)deleteChatItem:(id)arg1;
- (BOOL)canDeleteChatItem:(id)arg1;
@property(readonly, nonatomic) unsigned long long messageFailureCount;
@property(readonly, nonatomic) unsigned long long unreadMessageCount;
@property(readonly, nonatomic) unsigned long long messageCount;
@property(readonly, nonatomic) IMMessage *lastMessage;
@property(readonly, nonatomic) IMMessage *lastIncomingFinishedMessage;
@property(readonly, nonatomic) IMMessage *lastIncomingMessage;
@property(readonly, nonatomic) IMMessage *lastFinishedMessage;
- (id)chatItemForMessage:(id)arg1;
- (id)_chatItemForGUID:(id)arg1;
- (id)messageForGUID:(id)arg1;
@property(readonly, nonatomic) int rowIDOfMostRecentFailedMessage;
- (void)processChatItem:(id)arg1;
- (BOOL)shouldAppendDatestampAfterChatItem:(id)arg1 andBeforeChatItem:(id)arg2;
- (BOOL)shouldAppendTimestampAfterChatItem:(id)arg1 andBeforeChatItem:(id)arg2;
- (BOOL)_doesChatItemContainTimestamp:(id)arg1;
- (BOOL)shouldInsertChatItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_insertHistoricalChatItems:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4 limit:(unsigned long long)arg5;
- (void)_insertHistoricalChatItems:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4;
- (void)_fixMessageOrderingWithItems:(id)arg1;
- (BOOL)_checkMessageOrderingWithItems:(id)arg1;
- (void)_removeInitialTypingIndicator;
- (void)_buildChatItemForErrorMessage:(id)arg1;
- (void)_fixLastReceipientMessage;
- (void)_fixHeader;
- (BOOL)_buildChatItemForNewRecipient:(id)arg1 oldRecipient:(id)arg2 date:(id)arg3 atIndex:(long long)arg4;
- (void)_buildChatItemForParticipantState:(unsigned long long)arg1 handle:(id)arg2;
- (void)_buildChatItemForOverallChatStatusFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)_buildChatItemForDecidingHandleWentOffline:(id)arg1;
- (void)_buildChatItemForDisconnectOrLogout;
- (void)_buildInitialChatItems:(id)arg1;
- (void)_cleanupTimestamps;
- (void)_updateHeaderChatItem;
- (id)_newHeaderChatItemWithDate:(id)arg1 account:(id)arg2;
- (void)_appendChatItem:(id)arg1;
- (void)_removeChatItem:(id)arg1 andTimestamp:(BOOL)arg2;
- (void)_removeChatItem:(id)arg1;
- (void)_replaceChatItem:(id)arg1 andTimestamp:(BOOL)arg2 withChatItem:(id)arg3;
- (unsigned long long)_insertChatItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_replaceChatItem:(id)arg1 withChatItem:(id)arg2;
- (void)_postChatItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_postWillChangeIfNecessary;
- (id)_timeStampForChatItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_dateStampForChatItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_newInitialTypingIndicatorChatItem;
- (BOOL)_shouldDisplayInitialTypingIndicator;
- (BOOL)_shouldAnnouncePeopleJoin;
- (void)_endChatItemChanges;
- (void)_beginChatItemChanges;
- (id)_IMUnfinishedMapSenderGUIDToRemove:(id)arg1 requireFinished:(BOOL)arg2;
- (void)_updateFailedCount;
- (void)_updateUnreadCount;
- (unsigned long long)_recalculateCachedUnreadCount;
- (unsigned long long)_recalculateCachedFailedCount;
- (void)_setDBFailedCount:(unsigned long long)arg1;
- (void)_setDBUnreadCount:(unsigned long long)arg1;
- (void)_clearUnreadCount;
- (void)_unmapChatItem:(id)arg1;
- (void)_mapChatItem:(id)arg1;
@property(readonly, nonatomic) BOOL _shouldRegisterChat;
- (void)dealloc;
- (id)init;
- (void)_initialize;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 displayName:(id)arg5 chatItems:(id)arg6 participants:(id)arg7;
- (void)_setupObservation;
@property(nonatomic, setter=_setShouldPostJoinStatusChangeNotifications:) BOOL _shouldPostJoinStatusChangeNotifications;
@property(nonatomic, setter=_setShouldPostWillChangeNotification:) BOOL _shouldPostWillChangeNotification;
@property(nonatomic, setter=_setShouldPostIndividualItemChanges:) BOOL _shouldPostIndividualItemChanges;
- (void)_setIsRefreshing:(BOOL)arg1;
@property(readonly, nonatomic) BOOL _isRefreshing;
- (id)_privateInitWithAccount:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 chatItems:(id)arg4 participants:(id)arg5;
- (id)_copyChat;
- (id)loadMessagesUpToGUID:(id)arg1 date:(id)arg2 limit:(unsigned long long)arg3 loadImmediately:(BOOL)arg4;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(BOOL)arg3;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadMessagesUpToGUID:(id)arg1 limit:(unsigned long long)arg2;
- (id)_buildLoadQueryForSynchronize;
@property(nonatomic) unsigned long long numberOfMessagesToKeepLoaded;
- (void)_trimMessagesAsNeeded;
- (void)_trimMessagesLeavingNumber:(unsigned long long)arg1;
- (BOOL)sendDowngradeNotificationTo:(id)arg1;
- (void)_handleIncomingCommand:(id)arg1;
- (void)_handleDeliveredCommand:(id)arg1;
- (void)_setTypingIndicatorTimeout;
- (void)_typingIndicatorTimedOut:(id)arg1;
- (void)_clearIncomingTypingIndicators;
- (void)_clearTypingIndicatorTimeout;
- (void)_updateTypingIndicatorTimeout;
- (void)_endLegacyHistoryLoading;
- (void)_beginLegacyHistoryLoading;
- (void)_insertLegacyHistory:(id)arg1;
- (void)_setSearchResultChatItems:(id)arg1;

@end
