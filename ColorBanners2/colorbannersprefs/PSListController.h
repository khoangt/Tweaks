/* Generated by RuntimeBrowser
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSViewController.h"

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UIActionSheet, UIAlertView, UIKeyboard, UIPopoverController, UITableView, UIView;

@interface PSListController : PSViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate/*, PSViewControllerOffsetProtocol*/> {
    
    /*
    struct CGPoint {
        float x;
        float y;
        UIActionSheet *_actionSheet;
        UIAlertView *_alertView;
        NSMutableArray *_bundleControllers;
        BOOL _bundlesLoaded;
        BOOL _cachesCells;
        NSMutableDictionary *_cells;
        UIView *_containerView;
    } _contentOffsetWithKeyboard;
    */
    
    BOOL _edgeToEdgeCells;
    BOOL _forceSynchronousIconLoadForCreatedCells;
    NSMutableArray *_groups;
    BOOL _hasAppeared;
    //UIKeyboard *_keyboard;
    BOOL _keyboardWasVisible;
    NSString *_offsetItemName;
    BOOL _popupIsDismissing;
    BOOL _popupIsModal;
    // UIPopoverController *_popupStylePopoverController;
    BOOL _popupStylePopoverShouldRePresent;
    NSMutableArray *_prequeuedReusablePSTableCells;
    BOOL _reusesCells;
    BOOL _showingSetupController;
    NSString *_specifierID;
    NSArray *_specifiers;
    NSMutableDictionary *_specifiersByID;
    BOOL _swapAlertButtons;
    UITableView *_table;
    float _verticalContentOffset;
}

@property BOOL edgeToEdgeCells;
@property BOOL forceSynchronousIconLoadForCreatedCells;

+ (BOOL)displaysButtonBar;

- (void)_addIdentifierForSpecifier:(id)arg1;
- (id)_createGroupIndices:(id)arg1;
- (id)_customViewForSpecifier:(id)arg1 class:(Class)arg2 isHeader:(BOOL)arg3;
- (BOOL)_getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierAtIndex:(int)arg3 groups:(id)arg4;
- (float)_getKeyboardIntersectionHeight;
- (void)_handleActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_loadBundleControllers;
- (int)_nextGroupInSpecifiersAfterIndex:(int)arg1 inArray:(id)arg2;
- (void)_removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2;
- (void)_removeIdentifierForSpecifier:(id)arg1;
- (void)_returnKeyPressed:(id)arg1;
- (void)_scrollToSpecifierNamed:(id)arg1;
- (void)_setContentInset:(float)arg1;
- (void)_setNotShowingSetupController;
- (float)_tableView:(id)arg1 heightForCustomInSection:(int)arg2 isHeader:(BOOL)arg3;
- (id)_tableView:(id)arg1 viewForCustomInSection:(int)arg2 isHeader:(BOOL)arg3;
- (void)_unloadBundleControllers;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)addSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)addSpecifier:(id)arg1;
- (void)addSpecifiersFromArray:(id)arg1 animated:(BOOL)arg2;
- (void)addSpecifiersFromArray:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)beginUpdates;
- (id)bundle;
- (id)cachedCellForSpecifier:(id)arg1;
- (id)cachedCellForSpecifierID:(id)arg1;
- (void)clearCache;
- (void)confirmationViewAcceptedForSpecifier:(id)arg1;
- (void)confirmationViewCancelledForSpecifier:(id)arg1;
- (BOOL)containsSpecifier:(id)arg1;
- (id)controllerForRowAtIndexPath:(id)arg1;
- (id)controllerForSpecifier:(id)arg1;
- (void)createGroupIndices;
- (void)createPrequeuedPSTableCells:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)dismissConfirmationViewForSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)dismissPopover;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (BOOL)edgeToEdgeCells;
- (void)endUpdates;
- (id)findFirstVisibleResponder;
- (BOOL)forceSynchronousIconLoadForCreatedCells;
- (void)formSheetViewWillDisappear;
- (BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifier:(id)arg3;
- (BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierAtIndex:(int)arg3;
- (BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierID:(id)arg3;
- (void)handleURL:(id)arg1;
- (int)indexForIndexPath:(id)arg1;
- (int)indexForRow:(int)arg1 inGroup:(int)arg2;
- (int)indexOfGroup:(int)arg1;
- (int)indexOfSpecifier:(id)arg1;
- (int)indexOfSpecifierID:(id)arg1;
- (id)indexPathForIndex:(int)arg1;
- (id)indexPathForSpecifier:(id)arg1;
- (id)init;
- (id)initForContentSize:(CGSize)arg1;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2;
- (void)insertSpecifier:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 atIndex:(int)arg2;
- (void)lazyLoadBundle:(id)arg1;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (void)loadView;
- (void)loseFocus;
- (void)migrateSpecifierMetadataFrom:(id)arg1 to:(id)arg2;
- (int)numberOfGroups;
- (BOOL)performActionForSpecifier:(id)arg1;
- (BOOL)performButtonActionForSpecifier:(id)arg1;
- (BOOL)performConfirmationActionForSpecifier:(id)arg1;
- (BOOL)performConfirmationCancelActionForSpecifier:(id)arg1;
- (BOOL)performLoadActionForSpecifier:(id)arg1;
- (void)popoverController:(id)arg1 animationCompleted:(int)arg2;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (id)popupStylePopoverController;
- (void)popupViewWillDisappear;
- (void)prepareSpecifiersMetadata;
- (void)pushController:(id)arg1 animate:(BOOL)arg2;
- (void)pushController:(id)arg1;
- (void)reload;
- (void)reloadIconForSpecifierForBundle:(id)arg1;
- (void)reloadSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifier:(id)arg1;
- (void)reloadSpecifierAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifierAtIndex:(int)arg1;
- (void)reloadSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifierID:(id)arg1;
- (void)reloadSpecifiers;
- (void)removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2;
- (void)removeContiguousSpecifiers:(id)arg1;
- (void)removeLastSpecifier;
- (void)removeLastSpecifierAnimated:(BOOL)arg1;
- (void)removeSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)removeSpecifier:(id)arg1;
- (void)removeSpecifierAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)removeSpecifierAtIndex:(int)arg1;
- (void)removeSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (void)removeSpecifierID:(id)arg1;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 animated:(BOOL)arg3;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (void)returnPressedAtEnd;
- (int)rowsForGroup:(int)arg1;
- (void)selectRowForSpecifier:(id)arg1;
- (void)setCachesCells:(BOOL)arg1;
- (void)setDesiredVerticalContentOffset:(float)arg1;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)arg1;
- (void)setEdgeToEdgeCells:(BOOL)arg1;
- (void)setForceSynchronousIconLoadForCreatedCells:(BOOL)arg1;
- (void)setReusesCells:(BOOL)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setSpecifierID:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)shouldReloadSpecifiersOnResume;
- (BOOL)shouldSelectResponderOnAppearance;
- (void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(BOOL)arg2 swapAlertButtons:(BOOL)arg3;
- (void)showConfirmationViewForSpecifier:(id)arg1;
- (void)showPINSheet:(id)arg1;
- (id)specifier;
- (id)specifierAtIndex:(int)arg1;
- (id)specifierForID:(id)arg1;
- (id)specifierID;
- (id)specifiers;
- (id)specifiersInGroup:(int)arg1;
- (id)table;
- (Class)tableViewClass;
- (void)updateSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (void)updateSpecifiersInRange:(NSRange)arg1 withSpecifiers:(id)arg2;
- (float)verticalContentOffset;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end