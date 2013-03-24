//
//  TPMultiLayoutViewController.h
//
//  Created by Michael Tyson on 14/08/2011.
//  Copyright 2011 A Tasty Pixel. All rights reserved.
//

#import <UIKit/UIKit.h>

#define USE_EXTENSIONS YES
#ifdef USE_EXTENSIONS
#import "UIView+Border.h"
#import "UIView+RoundedCorners.h"
#import "UIView+Gradient.h"
#import "UIView+Shadow.h"
#import "UIButton+CenteredContent.h"
#endif

@interface TPMultiLayoutViewController : UIViewController {
    UIView *portraitView;
    UIView *landscapeView;
    
    @private
    NSDictionary *portraitAttributes;
    NSDictionary *landscapeAttributes;
    BOOL viewIsCurrentlyPortrait;
}

// Call directly to use with custom animation (override willRotateToInterfaceOrientation to disable the switch there)
- (void)applyLayoutForInterfaceOrientation:(UIInterfaceOrientation)newOrientation;

@property (nonatomic, retain) IBOutlet UIView *landscapeView;
@property (nonatomic, retain) IBOutlet UIView *portraitView;
@end
