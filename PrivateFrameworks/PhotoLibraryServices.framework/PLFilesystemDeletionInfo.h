/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSURL, NSString, NSArray;

@interface PLFilesystemDeletionInfo : NSObject {
    NSArray *_fileURLs;
    NSURL *_objectIDURI;
    unsigned int _thumbnailIndex;
    NSString *_uuid;
}

@property(readonly) NSArray * fileURLs;
@property(readonly) NSURL * objectIDURI;
@property(readonly) unsigned int thumbnailIndex;
@property(readonly) NSString * uuid;

+ (id)deletionInfoWithAsset:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)fileURLs;
- (id)initWithObjectIDURI:(id)arg1 fileURLs:(id)arg2 thumbnailIndex:(unsigned int)arg3 uuid:(id)arg4;
- (id)objectIDURI;
- (unsigned int)thumbnailIndex;
- (id)uuid;

@end