/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSTFormulaEqualsTokenAttachment : TSWPUIGraphicalAttachment {
}

- (float)baselineOffset;
- (id)description;
- (id)initFromArchive:(const struct FormulaEqualsTokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct UIGraphicalAttachment {} *x3; int x4; unsigned int x5[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)rendererForAttachment;
- (void)saveToArchive:(struct FormulaEqualsTokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct UIGraphicalAttachment {} *x3; int x4; unsigned int x5[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (BOOL)wantsSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
