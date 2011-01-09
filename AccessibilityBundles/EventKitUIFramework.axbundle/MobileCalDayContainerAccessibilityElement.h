/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/AccessibilityBundles/EventKitUIFramework.axbundle/EventKitUIFramework
 */

@class NSDate, NSMutableArray;



@interface MobileCalDayContainerAccessibilityElement : UIAccessibilityElement 
{
    NSMutableArray *_children;
    NSDate *_date;
    NSInteger _indexInArray;
}

@property NSInteger indexInArray;
@property(retain) NSDate *date;
@property(retain) NSMutableArray *children;


- (void)setChildren:(id)arg1;
- (id)accessibilityContainerElements;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)date;
- (void)setDate:(id)arg1;
- (void)dealloc;
- (id)children;
- (NSInteger)indexInArray;
- (void)setIndexInArray:(NSInteger)arg1;

@end