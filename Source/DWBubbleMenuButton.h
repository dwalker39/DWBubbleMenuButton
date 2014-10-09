//
//  DWBubbleMenuButton.h
//  DWBubbleMenuButtonExample
//
//  Created by Derrick Walker on 10/8/14.
//  Copyright (c) 2014 Derrick Walker. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, ExpansionDirection) {
    DirectionLeft = 0,
    DirectionRight,
    DirectionUp,
    DirectionDown
};


@class DWBubbleMenuButton;

@protocol DWBubbleMenuViewDelegate <NSObject>

@optional
- (void)bubbleMenuButtonWillExpand:(DWBubbleMenuButton *)expandableView;
- (void)bubbleMenuButtonDidExpand:(DWBubbleMenuButton *)expandableView;
- (void)bubbleMenuButtonWillCollapse:(DWBubbleMenuButton *)expandableView;
- (void)bubbleMenuButtonDidCollapse:(DWBubbleMenuButton *)expandableView;

@end

@interface DWBubbleMenuButton : UIView

@property (nonatomic, weak, readonly) NSArray *buttons;
@property (nonatomic, readonly) BOOL isCollapsed;
@property (nonatomic, strong) UIView *homeButtonView;

@property (nonatomic) enum ExpansionDirection direction;
@property (nonatomic) BOOL animatedHighlighting;
@property (nonatomic) BOOL collapseAfterSelection;
@property (nonatomic) float animationDuration;
@property (nonatomic) float standbyAlpha;
@property (nonatomic) float highlightAlpha;
@property (nonatomic) float buttonSpacing;

@property (nonatomic, weak) id <DWBubbleMenuViewDelegate> delegate;

// Initializers
- (id)initWithFrame:(CGRect)frame expansionDirection:(ExpansionDirection)direction;

// Public Methods
- (void)addButtons:(NSArray *)buttons;
- (void)addButton:(UIButton *)button;
- (void)showButtons;
- (void)dismissButtons;

@end
