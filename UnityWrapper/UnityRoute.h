//
//  UnityRoute.h
//  UnityWrapper
//
//  Created by Jinxiao on 26/12/2017.
//  Copyright © 2017 codoon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UnityRouteAnnotation : NSObject

@property (readwrite, nonatomic, strong) NSString *title;
@property (readwrite, nonatomic, strong) NSString *value;
@property (readwrite, nonatomic, strong) NSString *unit;

@property (readwrite, nonatomic, assign) int order;

@end

@interface UnityRoutePoint : NSObject

@property (readwrite, nonatomic, assign) double latitude;
@property (readwrite, nonatomic, assign) double longitude;

@end

@interface UnityRoute : NSObject

@property (readwrite, nonatomic, assign) bool isSpringFestival;

@property (readwrite, nonatomic, assign) double minimumAltitude;
@property (readwrite, nonatomic, assign) double maximumAltitude;

@property (readwrite, nonatomic, strong) NSArray <UnityRoutePoint *> *points;
@property (readwrite, nonatomic, strong) NSArray <UnityRouteAnnotation *> *annotations;

@property (readonly) NSString *parameterString;

@end
