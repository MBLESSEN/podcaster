//
//  TMBrowsePodcastButton.h
//  Podcaster
//
//  Created by Tyler Mikev on 6/14/15.
//  Copyright (c) 2015 Tyler Mikev. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TMPodcast;

@interface TMBrowsePodcastButton : UIButton
@property (strong, nonatomic) TMPodcast *podcast;
@end
