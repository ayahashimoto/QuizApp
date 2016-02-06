//
//  ViewController.h
//  QuizApp
//
//  Created by 橋本 遥 on 2016/01/29.
//  Copyright © 2016年 aya. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
-(IBAction)maru:(id)sender;
-(IBAction)batsu:(id)sender;
 @property(nonatomic,weak) IBOutlet UITextView *mondai; 
 @property(nonatomic,weak) IBOutlet UIImageView *bg_q;
@property(nonatomic,weak) IBOutlet UIImageView *bg_r;
@property(nonatomic,weak) IBOutlet UIImageView *seikai;
@property(nonatomic,weak) IBOutlet UIImageView *huseikai;
 @property(nonatomic,weak) IBOutlet UITextView *seitou;


@end
