//
//  OWSpaceImageViewController.h
//  CC025 Out Of This World
//
//  Created by systemtest on 28/05/15.
//  Copyright (c) 2015 PurpleTalk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) OWSpaceObject *spaceObject;

@end
