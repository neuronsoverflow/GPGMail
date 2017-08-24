//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MailboxOutlineItemViewDelegate.h"
#import "MailboxTextFieldDelegate.h"

@class MailboxOutlineItemView, NSObject<MailboxOutlineItemControllerDelegate>, NSString;

@interface MailboxOutlineItemController : NSObject <MailboxTextFieldDelegate, MailboxOutlineItemViewDelegate>
{
    MailboxOutlineItemView *_view;	// 8 = 0x8
    id _item;	// 16 = 0x10
    NSObject<MailboxOutlineItemControllerDelegate> *_delegate;	// 24 = 0x18
}

@property __weak NSObject<MailboxOutlineItemControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001001dff4e
- (id)mailboxOutlineItemViewShouldDisplayImage:(id)arg1;	// IMP=0x000000010001b5c1
- (void)mailboxTextFieldEndedEditingSession;	// IMP=0x00000001001dfe34
- (void)mailboxTextFieldBeganEditingSession;	// IMP=0x00000001001dfe22
- (long long)_alertState;	// IMP=0x000000010001c538
- (void)updateAlertState;	// IMP=0x000000010001c4b5
- (BOOL)_shouldShowBadge;	// IMP=0x00000001000393a0
- (BOOL)_isEditing;	// IMP=0x000000010001cd72
- (void)_updateBadgeAnimated:(BOOL)arg1;	// IMP=0x000000010001bfe4
- (void)_updateImage;	// IMP=0x000000010002d9e9
- (unsigned long long)_iconStyle;	// IMP=0x000000010002db77
- (long long)_iconSize;	// IMP=0x000000010002db25
- (void)_updateValuesForBasicSection;	// IMP=0x000000010001a9df
- (void)_updateValuesForAccount;	// IMP=0x000000010001bdd9
- (void)_updateValuesForMailbox;	// IMP=0x000000010002d7b2
- (void)updateBadgeCountAnimated:(BOOL)arg1;	// IMP=0x0000000100039365
- (void)updateAllValues;	// IMP=0x000000010001a638
- (id)_sectionDisplayName;	// IMP=0x000000010001aabc
- (id)_account;	// IMP=0x000000010001bebe
- (id)_mailbox;	// IMP=0x000000010002d8c3
@property __weak id item;
- (void)_connectView:(id)arg1;	// IMP=0x000000010001a8d6
- (void)_disconnectView:(id)arg1;	// IMP=0x000000010001a843
@property __weak MailboxOutlineItemView *view;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x000000010002d373

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
