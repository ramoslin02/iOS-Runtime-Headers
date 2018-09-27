/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistentHistoryStats : NSObject {
    long long  _changesPageCount;
    long long  _filePageCount;
    long long  _transactionStringsPageCount;
    long long  _transactionsPageCount;
}

@property (nonatomic) long long changesPageCount;
@property (nonatomic, readonly) double changesPageCountPercent;
@property (nonatomic) long long filePageCount;
@property (nonatomic, readonly) long long persistentHistoryPageCount;
@property (nonatomic, readonly) double persistentHistoryPageCountPercent;
@property (nonatomic) long long transactionStringsPageCount;
@property (nonatomic, readonly) double transactionStringsPageCountPercent;
@property (nonatomic) long long transactionsPageCount;
@property (nonatomic, readonly) double transactionsPageCountPercent;

+ (id)statsFromDatabase:(id)arg1;

- (double)_pageCountAsPercentOfFile:(long long)arg1;
- (long long)changesPageCount;
- (double)changesPageCountPercent;
- (long long)filePageCount;
- (long long)persistentHistoryPageCount;
- (double)persistentHistoryPageCountPercent;
- (void)setChangesPageCount:(long long)arg1;
- (void)setFilePageCount:(long long)arg1;
- (void)setTransactionStringsPageCount:(long long)arg1;
- (void)setTransactionsPageCount:(long long)arg1;
- (long long)transactionStringsPageCount;
- (double)transactionStringsPageCountPercent;
- (long long)transactionsPageCount;
- (double)transactionsPageCountPercent;

@end