/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference, AVWeakReferencingDelegateStorage, NSObject<OS_dispatch_queue>;

@interface AVCaptureAudioDataOutputInternal : NSObject {
    NSObject<OS_dispatch_queue> *bufferQueue;
    AVWeakReferencingDelegateStorage *delegateStorage;
    struct OpaqueFigSimpleMutex { } *remoteQueueMutex;
    struct remoteQueueReceiverOpaque { } *remoteReceiverQueue;
    AVWeakReference *weakReference;
}

- (void)dealloc;
- (id)init;

@end
