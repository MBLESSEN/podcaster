//
//  TMDownloadOperation.h
//  Podcaster
//
//  Created by Tyler Mikev on 7/4/15.
//  Copyright (c) 2015 Tyler Mikev. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;

@interface TMDownloadOperation : NSOperation

@property (strong, nonatomic, readonly) NSString *downloadURLString;

- (instancetype)initWithDownloadURL:(NSString *)downloadURLString
               withFileName:(NSString *)fileName
                updateBlock:(void (^)(CGFloat downloadPercentage))updateBlock
               successBlock:(void (^)(NSString *fileLocation))successBlock
            andFailureBlock:(void (^)(NSError *downloadError))failureBlock;

@end