/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PUAlbumListTransitionContext, PUCollectionView, PUSectionedGridLayout, UICollectionViewLayout;

@interface PUAlbumListGridViewController : PUAbstractAlbumListViewController <UICollectionViewDataSource, UICollectionViewDelegate, PUCollectionViewReorderDelegate, PUSectionedGridLayoutDelegate> {
    UICollectionViewLayout *__albumListTransitionLayout;
    PUCollectionView *__mainCollectionView;
    PUSectionedGridLayout *__mainCollectionViewLayout;
    PUAlbumListTransitionContext *_albumListTransitionContext;
}

@property(setter=setAlbumListTransitionLayout:,retain) UICollectionViewLayout * _albumListTransitionLayout;
@property(setter=_setMainCollectionView:,retain) PUCollectionView * _mainCollectionView;
@property(setter=_setMainCollectionViewLayout:,retain) PUSectionedGridLayout * _mainCollectionViewLayout;
@property(retain) PUAlbumListTransitionContext * albumListTransitionContext;

- (void).cxx_destruct;
- (id)_albumListTransitionLayout;
- (id)_mainCollectionView;
- (id)_mainCollectionViewLayout;
- (void)_setMainCollectionView:(id)arg1;
- (void)_setMainCollectionViewLayout:(id)arg1;
- (id)albumListTransitionContext;
- (int)cellContentViewLayout;
- (BOOL)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(id)arg4;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (void)dealloc;
- (id)gridLayout;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (id)indexPathForAlbumListCellContentView:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)indexPathsForItemsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)indexPathsForVisibleItems;
- (id)mainScrollView;
- (id)newGridViewControllerForStandInAlbum:(struct NSObject { Class x1; }*)arg1;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (void)performBatchUpdatesWithDeletedIndexPaths:(id)arg1 insertedIndexPaths:(id)arg2 changedIndexPaths:(id)arg3 movedFromIndexPaths:(id)arg4 movedToIndexPaths:(id)arg5 completionHandler:(id)arg6;
- (void)reloadContentView;
- (void)scrollToItemAtIndexPath:(id)arg1 centered:(BOOL)arg2 animated:(BOOL)arg3;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(int)arg2;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (void)setAlbumListTransitionContext:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1 animated:(BOOL)arg2;
- (void)setAlbumListTransitionLayout:(id)arg1;
- (void)setSyncProgressVisible:(BOOL)arg1;
- (BOOL)showsDeleteButtonOnCellContentView;
- (void)viewDidLoad;
- (id)visibleAlbumListCellContentViewAtIndexPath:(id)arg1;
- (struct PUAlbumListCellContentView { Class x1; id x2; id x3; id x4; id x5; float x6; int x7; id x8; id x9; unsigned int x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; unsigned int x_11_1_11 : 1; unsigned int x_11_1_12 : 1; unsigned int x_11_1_13 : 1; unsigned int x_11_1_14 : 1; unsigned int x_11_1_15 : 1; unsigned int x_11_1_16 : 6; unsigned int x_11_1_17 : 1; unsigned int x_11_1_18 : 1; unsigned int x_11_1_19 : 1; unsigned int x_11_1_20 : 1; unsigned int x_11_1_21 : 1; unsigned int x_11_1_22 : 1; unsigned int x_11_1_23 : 1; unsigned int x_11_1_24 : 1; unsigned int x_11_1_25 : 1; unsigned int x_11_1_26 : 1; unsigned int x_11_1_27 : 1; unsigned int x_11_1_28 : 1; unsigned int x_11_1_29 : 1; unsigned int x_11_1_30 : 1; unsigned int x_11_1_31 : 1; unsigned int x_11_1_32 : 1; unsigned int x_11_1_33 : 1; unsigned int x_11_1_34 : 1; unsigned int x_11_1_35 : 1; unsigned int x_11_1_36 : 1; unsigned int x_11_1_37 : 1; unsigned int x_11_1_38 : 1; unsigned int x_11_1_39 : 1; unsigned int x_11_1_40 : 1; unsigned int x_11_1_41 : 1; unsigned int x_11_1_42 : 1; unsigned int x_11_1_43 : 1; unsigned int x_11_1_44 : 1; unsigned int x_11_1_45 : 1; unsigned int x_11_1_46 : 1; unsigned int x_11_1_47 : 1; unsigned int x_11_1_48 : 1; unsigned int x_11_1_49 : 1; unsigned int x_11_1_50 : 1; unsigned int x_11_1_51 : 1; unsigned int x_11_1_52 : 1; unsigned int x_11_1_53 : 1; unsigned int x_11_1_54 : 1; unsigned int x_11_1_55 : 1; unsigned int x_11_1_56 : 1; unsigned int x_11_1_57 : 1; unsigned int x_11_1_58 : 1; unsigned int x_11_1_59 : 3; unsigned int x_11_1_60 : 1; unsigned int x_11_1_61 : 1; unsigned int x_11_1_62 : 1; unsigned int x_11_1_63 : 2; unsigned int x_11_1_64 : 2; unsigned int x_11_1_65 : 1; unsigned int x_11_1_66 : 2; unsigned int x_11_1_67 : 1; unsigned int x_11_1_68 : 3; unsigned int x_11_1_69 : 1; unsigned int x_11_1_70 : 1; } x11; }*)visiblePlaceholderListCellContentViewAtIndexPath:(id)arg1;
- (void)visiblyInsertItemAtIndexPath:(id)arg1 completionHandler:(id)arg2;

@end
