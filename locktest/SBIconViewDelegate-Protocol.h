/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol SBIconViewDelegate <NSObject>

@optional
- (double)iconLabelWidth;
- (BOOL)iconViewDisplaysCloseBox:(id)arg1;
- (BOOL)iconViewDisplaysBadges:(id)arg1;
- (void)iconCloseBoxTapped:(id)arg1;
- (void)icon:(id)arg1 openFolder:(id)arg2 animated:(BOOL)arg3;
- (BOOL)icon:(id)arg1 canReceiveGrabbedIcon:(id)arg2;
- (void)iconTapped:(id)arg1;
- (BOOL)iconShouldAllowTap:(id)arg1;
- (void)icon:(id)arg1 touchEnded:(BOOL)arg2;
- (void)icon:(id)arg1 touchMoved:(id)arg2;
- (void)iconTouchBegan:(id)arg1;
- (void)iconHandleLongPress:(id)arg1;
@end

