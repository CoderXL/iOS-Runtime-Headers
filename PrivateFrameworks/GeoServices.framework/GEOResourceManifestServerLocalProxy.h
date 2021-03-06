/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class <GEOResourceManifestServerProxyDelegate>, GEOActiveTileGroup, GEOResourceLoader, GEOResourceManifestConfiguration, GEOResourceManifestDownload, NSError, NSLock, NSMutableArray, NSMutableData, NSMutableDictionary, NSString, NSTimer, NSURLConnection;

@interface GEOResourceManifestServerLocalProxy : NSObject <NSURLConnectionDelegate, GEOResourceManifestServerProxy> {
    GEOActiveTileGroup *_activeTileGroup;
    NSString *_authToken;
    NSLock *_authTokenLock;
    GEOResourceManifestConfiguration *_configuration;
    NSURLConnection *_connection;
    <GEOResourceManifestServerProxyDelegate> *_delegate;
    BOOL _isObservingManifestReachability;
    BOOL _isObservingTileGroupReachability;
    NSError *_lastResourceManifestLoadError;
    NSString *_loadingTileGroupUniqueIdentifier;
    unsigned int _manifestRetryCount;
    NSMutableArray *_manifestUpdateCompletionHandlers;
    NSTimer *_manifestUpdateTimer;
    GEOResourceLoader *_resourceLoader;
    GEOResourceManifestDownload *_resourceManifest;
    NSMutableDictionary *_resourceRetainCounts;
    NSMutableData *_responseData;
    NSString *_responseETag;
    BOOL _started;
    unsigned int _tileGroupRetryCount;
    NSTimer *_tileGroupUpdateTimer;
}

@property(copy,readonly) NSString * debugDescription;
@property <GEOResourceManifestServerProxyDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_activeTileGroupOverridesChanged:(id)arg1;
- (void)_cancelConnection;
- (BOOL)_changeActiveTileGroup:(id)arg1 flushTileCache:(BOOL)arg2 error:(id*)arg3;
- (void)_cleanupConnection;
- (void)_considerChangingActiveTileGroup;
- (void)_countryProvidersDidChange:(id)arg1;
- (void)_forceChangeActiveTileGroup:(id)arg1 flushTileCache:(BOOL)arg2 ignoreIdentifier:(BOOL)arg3;
- (id)_idealTileGroupToUse;
- (void)_loadFromDisk;
- (id)_manifestURL;
- (void)_notifyManifestUpdateCompletionHandlers:(id)arg1;
- (void)_purgeOldRegionalResources;
- (void)_reachabilityChanged:(id)arg1;
- (void)_registerReachabilityObserver:(unsigned int)arg1;
- (id)_resourceInfosForTileGroup:(id)arg1;
- (void)_retainResource:(id)arg1;
- (void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1;
- (void)_scheduleUpdateTimerWithTimeInterval:(double)arg1;
- (void)_startServer;
- (void)_tileGroupTimerFired:(id)arg1;
- (void)_updateManifest:(id)arg1;
- (void)_updateManifest;
- (BOOL)_updateManifestIfNecessary:(id)arg1;
- (void)_updateTimerFired:(id)arg1;
- (void)_writeActiveTileGroupToDisk:(id)arg1;
- (void)_writeManifestToDisk:(id)arg1;
- (id)authToken;
- (void)closeConnection;
- (id)configuration;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)forceUpdate:(id)arg1;
- (void)getResourceManifestWithHandler:(id)arg1;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (void)openConnection;
- (oneway void)releaseResources:(id)arg1;
- (oneway void)resetActiveTileGroup;
- (oneway void)retainResources:(id)arg1;
- (id)serverQueue;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(id)arg2;
- (void)updateIfNecessary:(id)arg1;

@end
