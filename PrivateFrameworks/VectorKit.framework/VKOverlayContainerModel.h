/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <VKOverlayContainerDelegate>, <VKOverlayContainerRouteDelegate>, <VKRouteMatchedAnnotationPresentation>, NSMapTable, NSMutableArray, NSMutableSet, NSSet, NSString, VKSkyModel, VKStyleManager;

@interface VKOverlayContainerModel : VKMapTileModel <VKRouteMatchedAnnotationPresentationObserver, VKMapLayer, VKStyleManagerObserver> {
    struct { 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } position; 
        double course; 
        boolonRoute; 
    unsigned int _applicationState;
    struct ClearItem { unsigned char x1; struct Matrix<float, 4, 1> { float x_2_1_1[4]; } x2; boolx3; float x4; unsigned char x5; int x6; unsigned char x7; struct Box<unsigned int, 2> { struct Matrix<unsigned int, 2, 1> { unsigned int x_1_2_1[2]; } x_8_1_1; struct Matrix<unsigned int, 2, 1> { unsigned int x_2_2_1[2]; } x_8_1_2; } x8; } *_clearItem;
    <VKOverlayContainerDelegate> *_delegate;
    NSMutableArray *_overlayPainters;
    NSMutableSet *_overlaysToAdd;
    NSMapTable *_overlaysToPainters;
    NSMutableSet *_overlaysToRemove;
    NSMutableSet *_persistentOverlays;
    NSMapTable *_persistentOverlaysToPainters;
    } _puckPosition;
    <VKOverlayContainerRouteDelegate> *_routeDelegate;
    <VKRouteMatchedAnnotationPresentation> *_routeLineSplitAnnotation;
    VKSkyModel *_skyModel;
    NSMutableSet *_visibleOverlays;
    bool_isShowingRouteInStandardMode;
    bool_shouldCheckForOcclusion;
    bool_shouldOccludeTraffic;
    bool_shouldShowTraffic;
}

@property(copy,readonly) NSString * debugDescription;
@property <VKOverlayContainerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(getter=isInRealisticMode,readonly) bool inRealisticMode;
@property(readonly) bool isShowingRouteInStandardMode;
@property(readonly) NSSet * persistentOverlays;
@property(readonly) struct { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; boolx3; } puckPosition;
@property <VKOverlayContainerRouteDelegate> * routeDelegate;
@property(retain) <VKRouteMatchedAnnotationPresentation> * routeLineSplitAnnotation;
@property bool shouldCheckForOcclusion;
@property bool shouldOccludeTraffic;
@property bool shouldShowTraffic;
@property(retain) VKSkyModel * skyModel;
@property(readonly) VKStyleManager * styleManager;
@property(readonly) Class superclass;

+ (bool)reloadOnStylesheetChange;

- (id).cxx_construct;
- (void)_updatePainterOrdering;
- (void)addPersistentOverlay:(id)arg1;
- (void)annotationPresentationDidChangePresentationCoordinate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)init;
- (bool)isInRealisticMode;
- (bool)isShowingRouteInStandardMode;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned long long)mapLayerPosition;
- (id)persistentOverlays;
- (struct { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; boolx3; })puckPosition;
- (void)removePersistentOverlay:(id)arg1;
- (void)reset;
- (id)routeDelegate;
- (id)routeLineSplitAnnotation;
- (void)setApplicationState:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRouteDelegate:(id)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setShouldCheckForOcclusion:(bool)arg1;
- (void)setShouldOccludeTraffic:(bool)arg1;
- (void)setShouldShowTraffic:(bool)arg1;
- (void)setSkyModel:(id)arg1;
- (bool)shouldCheckForOcclusion;
- (bool)shouldOccludeTraffic;
- (bool)shouldShowTraffic;
- (id)skyModel;
- (id)styleManager;
- (void)stylesheetDidChange;
- (void)updatedMatchedSection:(struct fast_shared_ptr<vk::RouteLineSection> { struct _fast_shared_ptr_control {} *x1; })arg1 index:(struct PolylineCoordinate { unsigned int x1; float x2; }*)arg2;

@end