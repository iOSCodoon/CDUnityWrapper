//
//  UnityWrapper.h
//  UnityWrapper
//
//  Created by Jinxiao on 19/12/2017.
//  Copyright © 2017 codoon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@class UnityAppController;
@class UnitySceneViewController;

struct UnityParameters {
    int argc;
    char **argv;
};

@interface UnityWrapper : NSObject
{
    @public struct UnityParameters parameters;
}

+ (instancetype)sharedInstance;

- (void)install:(int)argc argv:(char *[])argv;

- (UnitySceneViewController *)obtainUnitySceneViewController;

@property (readonly) UnityAppController *unityController;

@end

extern UnityAppController *sharedUnitAppController(void);
