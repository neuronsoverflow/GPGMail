//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSView;

@interface _MouseTracker : NSObject
{
    BOOL _mouseOver;	// 8 = 0x8
    NSView *_view;	// 16 = 0x10
    long long _trackingRectTag;	// 24 = 0x18
    struct CGRect _trackingRect;	// 32 = 0x20
}

@property(nonatomic) BOOL mouseOver; // @synthesize mouseOver=_mouseOver;
@property(readonly, nonatomic) long long trackingRectTag; // @synthesize trackingRectTag=_trackingRectTag;
@property(readonly, nonatomic) struct CGRect trackingRect; // @synthesize trackingRect=_trackingRect;
@property(readonly, nonatomic) __weak NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;	// IMP=0x00000001002f16de
- (void)mouseMoved:(id)arg1;	// IMP=0x00000001002f164f
- (void)mouseExited:(id)arg1;	// IMP=0x00000001002f163d
- (void)mouseEntered:(id)arg1;	// IMP=0x00000001002f162b
- (void)_updateMouseIsOver;	// IMP=0x00000001002f149a
- (void)dealloc;	// IMP=0x00000001002f1423
- (id)init;	// IMP=0x00000001002f1354
- (id)initWithTrackingRect:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x00000001002f11d8

@end
