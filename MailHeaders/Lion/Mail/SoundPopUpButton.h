/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSPopUpButton.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSButton, NSMenu, NSMenuItem, NSMutableArray, NSPanel, NSString, NSTableView;

@interface SoundPopUpButton : NSPopUpButton <NSTableViewDataSource, NSTableViewDelegate>
{
    NSButton *_removeSoundButton;
    NSTableView *_soundTableView;
    NSMutableArray *_userSounds;
    NSPanel *_soundPanel;
    id _delegate;
    NSMenu *_soundMenu;
    NSString *_selectedItem;
    NSMenuItem *_otherItem;
    BOOL _amIAwake;
    BOOL _showSoundsFromBundle;
    BOOL _showSoundsFromDelegate;
    BOOL _showSoundsFromSystemLibrary;
    BOOL _showSoundsFromLibrary;
    BOOL _showSoundsFromNetworkLibrary;
    BOOL _showSoundsFromTildeLibrary;
    BOOL _showNone;
    BOOL _showAddRemove;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (void)awakeFromNib;
- (void)dealloc;
- (id)menu;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)_addItemWithTitle:(id)arg1;
- (void)_appendSoundsFromDirectories:(id)arg1;
- (void)_popupMenuChanged:(id)arg1;
- (void)_configureSoundMenu;
- (void)_playSound;
- (void)_playSoundForItemAtIndex:(long long)arg1;
- (void)_invalidateSoundMenu;
- (id)otherMenuItem;
- (id)soundPath;
- (long long)selectSoundPath:(id)arg1;
- (void)addRemoveMailSound:(id)arg1;
- (void)soundSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)newSoundClicked:(id)arg1;
- (void)removeSoundClicked:(id)arg1;
- (void)doneClicked:(id)arg1;
- (BOOL)showSoundsFromBundle;
- (void)setShowSoundsFromBundle:(BOOL)arg1;
- (BOOL)showSoundsFromDelegate;
- (void)setShowSoundsFromDelegate:(BOOL)arg1;
- (BOOL)showSoundsFromSystemLibrary;
- (void)setShowSoundsFromSystemLibrary:(BOOL)arg1;
- (BOOL)showSoundsFromLibrary;
- (void)setShowSoundsFromLibrary:(BOOL)arg1;
- (BOOL)showSoundsFromNetworkLibrary;
- (void)setShowSoundsFromNetworkLibrary:(BOOL)arg1;
- (BOOL)showSoundsFromTildeLibrary;
- (void)setShowSoundsFromTildeLibrary:(BOOL)arg1;
- (BOOL)showNone;
- (void)setShowNone:(BOOL)arg1;
- (BOOL)showAddRemove;
- (void)setShowAddRemove:(BOOL)arg1;

@end

