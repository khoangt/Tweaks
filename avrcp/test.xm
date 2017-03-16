%hook BTAVRCP_XpcSession
-(id)attributeIDsFromArgs:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(unsigned char)getMediaPlayersFromStart:(unsigned long long)arg1 toEnd:(unsigned long long)arg2 reply:(id)arg3  { %log; unsigned char r = %orig; NSLog(@" = %hhu", r); return r; }
-(unsigned char)getNowPlayingAttributeIDs:(id)arg1 reply:(id)arg2  { %log; unsigned char r = %orig; NSLog(@" = %hhu", r); return r; }
-(void)handleMsg:(id)arg1  { %log; %orig; }
-(void)playerDidChange:(int)arg1  { %log; %orig; }
-(void)playbackStateDidChange:(int)arg1  { %log; %orig; }
-(void)trackDidChange:(unsigned long long)arg1  { %log; %orig; }
-(void)playbackQueueDidChange { %log; %orig; }
-(id)handleSendCommandMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handleSetSettingsMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handleGetSettingsMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handleGetPlayStatusMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handleGetElementAttributesMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handleRegisterForChangesMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handleRegisterForPlayerChangesMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handleRegisterForPlaybackStateChangesMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handleRegisterForTrackChangesMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handleRegisterForSettingsChangesMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handleSetAddressedPlayerMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handleSetBrowsedPlayerMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handleChangePathMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handleGetFolderItemsMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handleGetItemAttributesMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handleSearchMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)handlePlayItemMsg:(id)arg1 reply:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)libraryDidChange { %log; %orig; }
-(void)sendMsg:(id)arg1 args:(id)arg2  { %log; %orig; }
-(void)handleDisconnection { %log; %orig; }
-(id)nowPlayingInfo { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)dealloc { %log; %orig; }
-(void)handleEvent:(id)arg1  { %log; %orig; }
-(void)settingsDidChange:(SCD_Struct_BT0)arg1  { %log; %orig; }
-(id)initWithConnection:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)library { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
