/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, NSString;

@interface TSKReplaceAllCommand : TSKCommand {
    NSMutableArray *_commands;
    unsigned int _countOfItemsReplaced;
    NSString *_findString;
    unsigned int _options;
    NSString *_replaceString;
}

@property unsigned int countOfItemsReplaced;
@property(readonly) NSString * findString;
@property(readonly) unsigned int options;
@property(readonly) NSString * replaceString;

- (void)commit;
- (unsigned int)countOfItemsReplaced;
- (void)dealloc;
- (id)findString;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1 findString:(id)arg2 replaceString:(id)arg3 options:(unsigned int)arg4;
- (unsigned int)options;
- (BOOL)process;
- (void)redo;
- (id)replaceString;
- (void)saveToArchiver:(id)arg1;
- (void)setCountOfItemsReplaced:(unsigned int)arg1;
- (void)undo;

@end
