//
//  UnitySceneViewController.h
//  UnityWrapper
//
//  Created by Jinxiao on 19/12/2017.
//  Copyright © 2017 codoon. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UnityRoute;
@class UnityAppController;
@class UnitySceneViewController;

typedef NS_ENUM(NSUInteger, UnitySceneStatus) {
    UnitySceneStatusInitialized,
    UnitySceneStatusLoading,
    UnitySceneStatusStroking,
    UnitySceneStatusFinished
};

@protocol UnitySceneViewControllerDelegate <NSObject>

- (void)sceneViewController:(UnitySceneViewController *)sceneViewController didUpdateStatus:(UnitySceneStatus)status;

@end

@interface UnitySceneViewController : UIViewController

@property (readonly) UnityAppController *unityController;

- (void)reloadSandboxWithRoute:(UnityRoute *)route;

@property (readwrite, nonatomic, weak) id<UnitySceneViewControllerDelegate> delegate;

- (void)didUpdateSceneStatus:(UnitySceneStatus)status;

@end
