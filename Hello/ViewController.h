//
//  ViewController.h
//  Hello
//
//  Created by deneyim on 04/07/16.
//  Copyright © 2016 deneyim. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>
@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet FBSDKLoginButton *loginButton;
@end

