/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarNotesCell;

@interface EKEventNotesInlineEditItem : EKEventEditItem <UITextViewDelegate> {
    CalendarNotesCell *_cell;
}

- (id)cellForSubitemAtIndex:(int)arg1 inSubsection:(int)arg2;
- (void)dealloc;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 inSubsection:(int)arg2 forWidth:(float)arg3;
- (BOOL)isInline;
- (void)reset;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textViewShouldReturn:(id)arg1;

@end