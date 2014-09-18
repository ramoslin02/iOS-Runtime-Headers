/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIKeyboardCandidateListDelegate>, NSString, TIKeyboardCandidateResultSet, UIKeyboardCandidateGridCollectionViewController, UIKeyboardCandidateSortControl;

@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    <UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    TIKeyboardCandidateResultSet *_candidateSet;
    UIKeyboardCandidateGridCollectionViewController *_collectionViewController;
    } _inlineRect;
    NSString *_inlineText;
    double _maxX;
    int _position;
    } _previousCollapsedFrame;
    UIKeyboardCandidateSortControl *_sortSelectionBar;
    bool_reducedWidth;
    bool_showHiddenCandidatesOnly;
}

@property <UIKeyboardCandidateListDelegate> * candidateListDelegate;
@property(retain) TIKeyboardCandidateResultSet * candidateSet;
@property(readonly) UIKeyboardCandidateGridCollectionViewController * collectionViewController;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inlineRect;
@property(copy) NSString * inlineText;
@property double maxX;
@property int position;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousCollapsedFrame;
@property(getter=isReducedWidth,readonly) bool reducedWidth;
@property bool showHiddenCandidatesOnly;
@property(readonly) UIKeyboardCandidateSortControl * sortSelectionBar;
@property(readonly) Class superclass;

- (id)_inheritedRenderConfig;
- (id)activeCandidateList;
- (void)adjustFrameForInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 maxX:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedFrameFromDesiredFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textHeight:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (id)candidateListDelegate;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (id)candidateSet;
- (id)candidates;
- (void)candidatesDidChange;
- (id)collectionViewController;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)expand;
- (unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1;
- (unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (bool)handleNumberKey:(unsigned long long)arg1;
- (bool)handleTabKeyWithShift:(bool)arg1;
- (bool)hasCandidates;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inlineRect;
- (id)inlineText;
- (bool)isAcceptableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 afterScrollBy:(double)arg2;
- (bool)isExtendedList;
- (bool)isHiddenCandidatesList;
- (bool)isReducedWidth;
- (id)keyboardBehaviors;
- (void)layout;
- (double)maxX;
- (void)padInlineFloatingViewExpand:(id)arg1;
- (bool)padInlineFloatingViewIsExpanded:(id)arg1;
- (int)position;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousCollapsedFrame;
- (void)revealHiddenCandidates;
- (unsigned long long)selectedSortIndex;
- (void)setCandidateListDelegate:(id)arg1;
- (void)setCandidateSet:(id)arg1 showHiddenCandidatesOnly:(bool)arg2;
- (void)setCandidateSet:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 maxX:(double)arg5 layout:(bool)arg6 showHiddenCandidatesOnly:(bool)arg7;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 maxX:(double)arg5 layout:(bool)arg6;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInlineText:(id)arg1;
- (void)setMaxX:(double)arg1;
- (void)setPosition:(int)arg1;
- (void)setPreviousCollapsedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShowHiddenCandidatesOnly:(bool)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (bool)showHiddenCandidatesOnly;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showNextRow;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (void)showPreviousRow;
- (struct CGSize { double x1; double x2; })size;
- (id)sortSelectionBar;
- (void)sortSelectionBarAction;
- (id)statisticsIdentifier;
- (void)updateLayerBorderWidth;

@end