//
//  TMDownloadManager.h
//  Podcaster
//
//  Created by Tyler Mikev on 3/8/15.
//  Copyright (c) 2015 Tyler Mikev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class TMPodcast;

@interface TMDownloadManager : NSObject

- (void)downloadPodcastAtURL:(NSURL *)downloadURL
                withFileName:(NSString *)fileName
                 updateBlock:(void (^)(CGFloat downloadPercentage))updateBlock
                successBlock:(void (^)(NSString *filePath))successBlock
             andFailureBlock:(void (^)(NSError *downloadError))failureBlock;

+ (void)downloadImageAtURL:(NSURL *)imageURL
            withCompletionBlock:(void(^)(UIImage *image))completionBlock;

+ (void)downloadImageForPodcast:(TMPodcast *)podcast
                        forCell:(UITableViewCell *)originalCell
                    atIndexPath:(NSIndexPath *)indexPath
                    inTableView:(UITableView *)tableView;

+ (NSString *)saveData:(NSData *)fileData
          withFileName:(NSString *)fileName
              andError:(NSError *)fileWritingError;
@end

