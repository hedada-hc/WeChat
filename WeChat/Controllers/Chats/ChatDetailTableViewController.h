//
//  ChatDetailTableViewController.h
//  WeChat
//
//  Created by ysh on 2019/1/3.
//  Copyright © 2019 ray. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WCContact.h"

NS_ASSUME_NONNULL_BEGIN

@interface ChatDetailTableViewController : UIViewController

@property (nonatomic, strong) WCContact *curUser;

@end

NS_ASSUME_NONNULL_END
