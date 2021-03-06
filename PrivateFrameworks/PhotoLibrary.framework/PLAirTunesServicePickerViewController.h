/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLAirTunesServicePickerViewControllerDelegate>, NSArray, NSDictionary, UITableView;

@interface PLAirTunesServicePickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    NSArray *_availableRoutes;
    id _delegate;
    NSDictionary *_selectedRoute;
    UITableView *_table;
}

@property(retain) NSArray * availableRoutes;
@property <PLAirTunesServicePickerViewControllerDelegate> * delegate;

- (int)_indexofRouteWithRouteID:(id)arg1;
- (void)_setCell:(id)arg1 checked:(BOOL)arg2;
- (id)availableRoutes;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (void)dealloc;
- (id)delegate;
- (id)initWithAvailableAirplayRoutes:(id)arg1 previouslySelectedRoute:(id)arg2;
- (void)loadView;
- (void)setAvailableRoutes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;

@end
