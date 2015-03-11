/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKShareID, NSString;

@interface CKDUpdateUserPresenceOperation : CKDOperation {
    long long _customStatusFlags;
    NSString *_lastETag;
    CKShareID *_shareID;
    long long _status;
    double _ttl;
    id _updateCompletionBlock;
    bool_isLurk;
}

@property long long customStatusFlags;
@property bool isLurk;
@property(retain) NSString * lastETag;
@property(retain) CKShareID * shareID;
@property long long status;
@property double ttl;
@property(copy) id updateCompletionBlock;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleUserPresences:(id)arg1 etag:(id)arg2 response:(id)arg3;
- (long long)customStatusFlags;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (bool)isLurk;
- (id)lastETag;
- (void)main;
- (void)setCustomStatusFlags:(long long)arg1;
- (void)setIsLurk:(bool)arg1;
- (void)setLastETag:(id)arg1;
- (void)setShareID:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTtl:(double)arg1;
- (void)setUpdateCompletionBlock:(id)arg1;
- (id)shareID;
- (long long)status;
- (double)ttl;
- (id)updateCompletionBlock;

@end