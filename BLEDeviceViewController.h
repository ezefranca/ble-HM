//
//  BLEDeviceViewController.h
//  HMSoft
//
//  Created by HMSofts on 7/13/12.
//  Copyright (c) 2012 jnhuamao.cn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SerialGATT.h"

#define RSSI_THRESHOLD -60
#define WARNING_MESSAGE @"z"

@class CBPeripheral;
@class SerialGATT;

@interface BLEDeviceViewController : UIViewController<BTSmartSensorDelegate>

@property (strong, nonatomic) CBPeripheral *peripheral;
@property (strong, nonatomic) SerialGATT *sensor;

//@property (strong, nonatomic) NSTimer *timer;

@property (strong, nonatomic) NSMutableArray *rssi_container; // used for contain the indexers of the lower rssi value 

@property (weak, nonatomic) IBOutlet UILabel *HMSoftUUID;

- (IBAction)sendMsgToArduino:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *MsgToArduino;
@property (weak, nonatomic) IBOutlet UITextView *tvRecv;
@property (weak, nonatomic) IBOutlet UILabel *lbDevice;



@end
