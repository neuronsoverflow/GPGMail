/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MCChanging.h"

@class NSString;

@protocol IMAPPersistedMessage <MCChanging>
@property(readonly, nonatomic) long long libraryID;
@property(copy) NSString *remoteID;
- (void)appendData:(id)arg1 part:(id)arg2;
- (void)setData:(id)arg1 isPartial:(BOOL)arg2;
@end
