//
//  ProfileTableViewCell.h
//  Logistics
//
//  Created by meng wang on 2018/4/22.
//  Copyright © 2018年 meng wang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProfileTableViewCell : UITableViewCell

- (void)setupIcon:(NSString *)icon title:(NSString *)title accessView:(id)object;

- (void)showRedBadge:(BOOL)isShow;

@end
