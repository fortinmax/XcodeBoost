//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, IDEActivityLogSection, IDEBuildParameters, NSArray, NSMutableArray, NSString;

@interface IDEBuildableSnapshot : NSObject
{
    id <IDEBuildable> _buildable;
    NSString *_name;
    IDEBuildParameters *_buildParameters;
    IDEActivityLogSection *_activityLogSection;
    BOOL _cleanupDidRun;
    DVTDispatchLock *_syncLock;
    NSMutableArray *_postprocessingBlocks;
    NSArray *_currentBuildTasks;
    NSMutableArray *_readyBuildCommands;
    NSMutableArray *_startedBuildTasks;
}

+ (struct dispatch_semaphore_s *)_enqueue_semaphore;
+ (void)initialize;
@property(retain) NSMutableArray *startedBuildTasks; // @synthesize startedBuildTasks=_startedBuildTasks;
@property(retain) NSMutableArray *readyBuildCommands; // @synthesize readyBuildCommands=_readyBuildCommands;
@property(retain) NSArray *currentBuildTasks; // @synthesize currentBuildTasks=_currentBuildTasks;
@property(retain) NSMutableArray *postprocessingBlocks; // @synthesize postprocessingBlocks=_postprocessingBlocks;
@property(retain) DVTDispatchLock *syncLock; // @synthesize syncLock=_syncLock;
@property(retain) IDEActivityLogSection *activityLogSection; // @synthesize activityLogSection=_activityLogSection;
@property(readonly) IDEBuildParameters *buildParameters; // @synthesize buildParameters=_buildParameters;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) id <IDEBuildable> buildable; // @synthesize buildable=_buildable;
- (void).cxx_destruct;
- (id)description;
- (void)cleanupForBuilder:(id)arg1;
- (void)_cleanupOnlyOnceForBuilder:(id)arg1;
- (void)builderWasCancelled:(id)arg1;
- (void)buildForBuilderDidFinish:(id)arg1;
- (void)buildDidFinishForBuilder:(id)arg1 buildPlan:(id)arg2;
- (id)buildTaskForBuildCommand:(id)arg1 builder:(id)arg2;
- (BOOL)prepareForBuildingWithBuildPlan:(id)arg1;
- (id)buildPlanForBuilder:(id)arg1 buildCommand:(int)arg2 buildOnlyTheseFiles:(id)arg3;
- (id)nextBuildCommandsToRunForBuilder:(id)arg1 buildCommand:(int)arg2 buildOnlyTheseFiles:(id)arg3;
- (id)nextBuildTasksToRunForBuilder:(id)arg1 buildCommand:(int)arg2 buildOnlyTheseFiles:(id)arg3;
- (BOOL)buildForBuilderWillStart:(id)arg1;
- (int)performBuildForBuilder:(id)arg1 buildCommand:(int)arg2 buildOnlyTheseFiles:(id)arg3;
- (BOOL)prepareForBuildingForBuilder:(id)arg1;
- (void)_buildCommandDidRestoreCachedOutputs:(id)arg1;
- (void)_updateBuildOperationStatusForBuilder:(id)arg1 buildTask:(id)arg2;
- (void)_buildTaskDidStartForBuilder:(id)arg1 buildTask:(id)arg2;
- (void)addPostprocessingBlocks:(id)arg1;
- (BOOL)useNewBuildCommandEngineForBuilder:(id)arg1 buildCommand:(int)arg2 buildOnlyTheseFiles:(id)arg3;
- (id)initFromBuildable:(id)arg1 withBuildParameters:(id)arg2;

@end
