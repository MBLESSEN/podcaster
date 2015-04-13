//
//  TMPodcast.h
//  Podcaster
//
//  Created by Tyler Mikev on 3/7/15.
//  Copyright (c) 2015 Tyler Mikev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class TMiTunesResponse;

@interface TMPodcast : NSObject

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *subtitle;
@property (strong, nonatomic) NSURL *linkURL;
@property (strong, nonatomic) NSString *podcastDescription;
@property (strong, nonatomic) NSString *language;
@property (strong, nonatomic) NSString *copyright;
@property (strong, nonatomic) NSString *author;
@property (strong, nonatomic) NSString *category;
@property (strong, nonatomic) NSURL *imageURL;
@property (strong, nonatomic) UIImage *podcastImage;
@property (strong, nonatomic) NSArray *episodes;

+ (instancetype)initWithDictionary:(NSDictionary *)dictionary;
+ (instancetype)initWithiTunesResponse:(TMiTunesResponse *)iTunesResponse;

@end
