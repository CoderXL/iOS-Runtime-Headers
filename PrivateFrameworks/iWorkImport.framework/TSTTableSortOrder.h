/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSIndexSet;

@interface TSTTableSortOrder : NSObject <NSCopying> {
    NSIndexSet *mCachedIndices;
    NSArray *mRules;
    int mType;
}

@property(readonly) NSIndexSet * columnIndices;
@property(readonly) bool empty;
@property(readonly) unsigned long long ruleCount;
@property(readonly) NSArray * rules;
@property(readonly) int type;

+ (id)sortOrderWithRules:(id)arg1 type:(int)arg2;

- (id)columnIndices;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)empty;
- (void)encodeToArchive:(struct TableSortOrderArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TST::TableSortOrderArchive_SortRuleArchive> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; int x4; int x5; unsigned int x6[1]; }*)arg1;
- (unsigned long long)hash;
- (id)initFromArchive:(const struct TableSortOrderArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TST::TableSortOrderArchive_SortRuleArchive> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; int x4; int x5; unsigned int x6[1]; }*)arg1;
- (id)initWithRules:(id)arg1 type:(int)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)ruleCount;
- (id)rules;
- (id)sortOrderByAddingRule:(id)arg1;
- (id)sortOrderByChangingTypeTo:(int)arg1;
- (id)sortOrderByRemovingRuleAtIndex:(unsigned long long)arg1;
- (id)sortOrderByReplacingRuleAtIndex:(unsigned long long)arg1 withRule:(id)arg2;
- (id)sortOrderByReplacingRulesWithRules:(id)arg1;
- (int)type;

@end