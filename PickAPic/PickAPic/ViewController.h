//
//  ViewController.h
//  PickAPic
//
//  Created by Michael Kavouras on 9/13/15.
//  Copyright © 2015 Mike Kavouras. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@property (strong, nonatomic) IBOutlet UIImageView *imageView;

- (IBAction)takePic:(UIButton *)sender;
- (IBAction)selectPic:(UIButton *)sender;
- (IBAction)saveButton:(UIButton *)sender;


@end

