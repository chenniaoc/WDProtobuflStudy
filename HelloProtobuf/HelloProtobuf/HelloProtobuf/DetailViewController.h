//
//  DetailViewController.h
//  HelloProtobuf
//
//  Created by YuchenZhang on 3/11/15.
//  Copyright (c) 2015 com.yuchen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

