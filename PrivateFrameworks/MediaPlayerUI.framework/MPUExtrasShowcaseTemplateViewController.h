/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class IKShowcaseTemplate, MPUExtrasCarouselViewController, MPUExtrasImageBrowserViewController, MPUExtrasZoomingImageTransitionController, NSArray, NSDictionary, NSString;

@interface MPUExtrasShowcaseTemplateViewController : MPUExtrasTemplateViewController <MPUExtrasCarouselViewControllerDataSource, MPUExtrasCarouselViewControllerDelegate, MPUExtrasImageBrowserViewControllerDataSource, MPUExtrasNavigationAnimationControllerProvider, MPUExtrasZoomingImageInteractiveTransitionSource, MPUExtrasZoomingImageTransitionParticipant> {
    MPUExtrasZoomingImageTransitionController *_activeZoomingImageInteractiveTransitionController;
    unsigned long long _autohighlightIndex;
    NSArray *_bannerButtonElements;
    NSArray *_carouselLockupElements;
    MPUExtrasCarouselViewController *_carouselViewController;
    MPUExtrasImageBrowserViewController *_imageBrowserViewController;
    NSDictionary *_overriddenFullscreenImages;
    bool_supportsOneupMode;
}

@property(retain) MPUExtrasZoomingImageTransitionController * activeZoomingImageInteractiveTransitionController;
@property unsigned long long autohighlightIndex;
@property(retain) NSArray * bannerButtonElements;
@property(retain) NSArray * carouselLockupElements;
@property(retain) MPUExtrasCarouselViewController * carouselViewController;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) MPUExtrasImageBrowserViewController * imageBrowserViewController;
@property(readonly) unsigned long long indexOfVisibleItem;
@property(retain) NSDictionary * overriddenFullscreenImages;
@property(readonly) Class superclass;
@property bool supportsOneupMode;
@property(readonly) IKShowcaseTemplate * templateElement;

- (void).cxx_destruct;
- (void)_loadTextElement:(id)arg1 textAttributes:(id)arg2 withCompletionHandler:(id)arg3;
- (id)_mainChildViewController;
- (void)_prepareLayout;
- (void)_pushImageBrowserWithVisibleItemIndex:(unsigned long long)arg1;
- (id)activeZoomingImageInteractiveTransitionController;
- (id)animationControllerForNavigationOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (unsigned long long)autohighlightIndex;
- (id)bannerButtonElements;
- (id)carouselLockupElements;
- (unsigned long long)carouselSize;
- (void)carouselViewController:(id)arg1 configureCarouselCollectionViewCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 withThumbnailImageContainerSize:(struct CGSize { double x1; double x2; })arg4;
- (void)carouselViewController:(id)arg1 didHighlightItemAtIndex:(unsigned long long)arg2;
- (void)carouselViewController:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 completionHandler:(id)arg3;
- (id)carouselViewController;
- (void)dealloc;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(bool)arg2;
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1;
- (void)imageBrowserViewController:(id)arg1 loadDescriptionAtIndex:(unsigned long long)arg2 withCompletionHandler:(id)arg3;
- (void)imageBrowserViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(id)arg3;
- (void)imageBrowserViewController:(id)arg1 loadSubtitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(id)arg3;
- (void)imageBrowserViewController:(id)arg1 loadTitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(id)arg3;
- (id)imageBrowserViewController;
- (unsigned long long)indexOfVisibleItem;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (unsigned long long)numberOfImagesForBrowserViewController:(id)arg1;
- (unsigned long long)numberOfItemsInCarouselViewController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overriddenFullscreenImages;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setActiveZoomingImageInteractiveTransitionController:(id)arg1;
- (void)setAutohighlightIndex:(unsigned long long)arg1;
- (void)setBannerButtonElements:(id)arg1;
- (void)setCarouselLockupElements:(id)arg1;
- (void)setCarouselViewController:(id)arg1;
- (void)setImageBrowserViewController:(id)arg1;
- (void)setOverriddenFullscreenImages:(id)arg1;
- (void)setSupportsOneupMode:(bool)arg1;
- (bool)showsPlaceholder;
- (bool)supportsOneupMode;
- (id)templateElement;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end