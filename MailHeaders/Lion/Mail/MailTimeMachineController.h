/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



#import "MVTerminationHandler-Protocol.h"

@class MessageViewer, NSTimer;

@interface MailTimeMachineController : NSObject <MVTerminationHandler>
{
    MessageViewer *_messageViewer;
    BOOL _savingTOC;
    struct OpaqueEventHandlerRef *_helperAppEventHandler;
    struct ProcessSerialNumber _helperAppPSN;
    struct CGRect _orignalMailWindowFrame;
    id _tableOfContentsSaveLock;
    NSTimer *_tableOfContentsSaveTimer;
}

+ (id)sharedController;
- (id)init;
- (void)dealloc;
- (void)registerNotificationHandlers;
- (void)_invalidateTableOfContentsAndBackupManager:(id)arg1;
- (void)_invalidateTableOfContents:(id)arg1;
- (void)saveTableOfContents;
- (void)forceSaveTableOfContentsNow;
- (void)_setTableOfContentsIsValid:(BOOL)arg1;
- (void)_setTableOfContentsTimer:(id)arg1;
- (void)registerTimeMachineHandlers;
- (void)unregisterTimeMachineHandlers;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)_approvedQuit;
- (void)_saveTableOfContents;
- (void)_thread_saveTableOfContents:(id)arg1;
- (void)_threadedSaveTableOfContentsEnded:(id)arg1;
- (BOOL)_timingOutSaveTableOfContents;
- (void)_threadedSaveTableOfContentsWithEndedSelector:(SEL)arg1;
- (id)_mailTimeMachineDescriptionForMessage:(id)arg1 withColumns:(id)arg2 andMall:(id)arg3 selected:(BOOL)arg4;
- (BOOL)_launchTimeMachineHelperApp;
- (void)finishedEnteringTM;
- (void)enterTimeMachineMode;
- (void)prepareToExitTimeMachineModeWithDisplayState:(id)arg1;
- (void)exitTimeMachine;

@end
