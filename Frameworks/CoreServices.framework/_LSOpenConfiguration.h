/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSOpenConfiguration : NSObject <NSSecureCoding> {
    NSDictionary * _frontBoardOptions;
    bool  _ignoreOpenStrategy;
    NSURL * _referrerURL;
}

@property (nonatomic, copy) NSDictionary *frontBoardOptions;
@property (nonatomic) bool ignoreOpenStrategy;
@property (nonatomic, copy) NSURL *referrerURL;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)frontBoardOptions;
- (bool)ignoreOpenStrategy;
- (id)initWithCoder:(id)arg1;
- (id)referrerURL;
- (void)setFrontBoardOptions:(id)arg1;
- (void)setIgnoreOpenStrategy:(bool)arg1;
- (void)setReferrerURL:(id)arg1;

@end