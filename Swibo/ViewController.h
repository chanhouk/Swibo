//
//  ViewController.h
//  Swibo
//
//  Created by Hou Kwen Martin Chan on 10/06/14.
//  Copyright (c) 2014 Swibo_Limit. All rights reserved.
//

#import <UIKit/UIKit.h>

// Add Motion Framework
#import <CoreMotion/CoreMotion.h>

@interface ViewController : UIViewController
{
//  IBOutlet UITextField *addrField;
//	IBOutlet UITextField *portField;
//	IBOutlet UITextField *messageField;
    UILabel *ipaddress;
    UILabel *p1port;
    UILabel *p2port;
    UILabel *streamstate;
}

// Add a motion manager property to this app delegate
@property (strong, nonatomic) CMMotionManager * motionManager;

// Label for Slide
@property (strong, nonatomic) IBOutlet UILabel *ipaddress;
@property (strong, nonatomic) IBOutlet UILabel *p1port;
@property (strong, nonatomic) IBOutlet UILabel *p2port;
@property (strong, nonatomic) IBOutlet UILabel *streamstate;

-(IBAction)stream:(id)sender;
- (IBAction)editip:(id)editip;
- (IBAction)editp1port:(id)editp1port;
- (IBAction)editp2port:(id)editp2port;

@end
