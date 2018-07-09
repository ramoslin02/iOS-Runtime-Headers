/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTEphemeralCellMap : NSObject <TSTCellMap> {
    bool  mAppliesToHidden;
    unsigned long long  mCapacity;
    struct { unsigned short x1; unsigned char x2; unsigned char x3; } * mCellIDs;
    id * mCells;
    unsigned long long  mCount;
    bool  mIgnoreHiddenCellsWhenApplying;
    bool  mMayModifyValuesReferencedByFormulas;
}

@property (nonatomic) bool appliesToHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addCell:(id)arg1 andCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (bool)appliesToHidden;
- (id)cellAtIndex:(unsigned long long)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cellIDAtIndex:(unsigned long long)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; }*)cellIDs;
- (bool)containsCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (bool)mayModifyFormulasInCells;
- (bool)mayModifyValuesReferencedByFormulas;
- (void)popLastCell;
- (void)setAppliesToHidden:(bool)arg1;
- (void)setMayModifyValuesReferencedByFormulas:(bool)arg1;

@end