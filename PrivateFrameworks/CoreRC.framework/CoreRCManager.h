/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@class <CoreRCManagerDelegate>, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet;

@interface CoreRCManager : NSObject {
    NSMutableSet *_busesInternal;
    <CoreRCManagerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(readonly) NSSet * buses;
@property(readonly) NSMutableSet * busesInternal;
@property(readonly) NSObject<OS_dispatch_queue> * serialQueue;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)addBus:(id)arg1;
- (id)buses;
- (id)busesInternal;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithSerialQueue:(id)arg1;
- (id)managedBusEquivalentTo:(id)arg1;
- (id)managedBusForDevice:(id)arg1;
- (id)managedDeviceEquivalentTo:(id)arg1;
- (void)notifyDelegateAddBus:(id)arg1;
- (void)notifyDelegateRemoveBus:(id)arg1;
- (void)notifyDelegateUpdateBus:(id)arg1;
- (id)propertyForKey:(id)arg1 ofBus:(id)arg2 error:(id*)arg3;
- (void)removeBus:(id)arg1;
- (BOOL)sendHIDEvent:(id)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 error:(id*)arg4;
- (id)serialQueue;
- (void)setDelegate:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 error:(id*)arg4;

@end
