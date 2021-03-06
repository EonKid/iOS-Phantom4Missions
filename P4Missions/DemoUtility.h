//
//  DemoUtility.h
//  P4Missions
//
//  Created by DJI on 16/3/16.
//  Copyright © 2016 DJI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <DJISDK/DJISDK.h>
#import <VideoPreviewer/VideoPreviewer.h>

#define weakSelf(__TARGET__) __weak typeof(self) __TARGET__=self
#define weakReturn(__TARGET__) if(__TARGET__==nil)return;
#define INVALID_POINT CGPointMake(CGFLOAT_MAX, CGFLOAT_MAX)

extern void ShowResult(NSString *format, ...);

@interface DemoUtility : NSObject

/**
 *  Fetch DJI Project's component Objects.
 */
+ (DJICamera*) fetchCamera;
+ (DJIGimbal*) fetchGimbal;
+ (DJIFlightController *) fetchFlightController;

/**
 *  Help to do the coordinate transformations.
 */
+ (CGPoint) pointToStreamSpace:(CGPoint)point withView:(UIView *)view;
+ (CGPoint) pointFromStreamSpace:(CGPoint)point withView:(UIView *)view;
+ (CGSize) sizeToStreamSpace:(CGSize)size;
+ (CGSize) sizeFromStreamSpace:(CGSize)size;
+ (CGRect) rectToStreamSpace:(CGRect)rect withView:(UIView *)view;
+ (CGRect) rectFromStreamSpace:(CGRect)rect withView:(UIView *)view;
+ (CGRect) rectWithPoint:(CGPoint)point1 andPoint:(CGPoint)point2;

/**
 *  Returns the string object from related enum values.
 */
+ (NSString*) stringFromPointingExecutionState:(DJITapFlyMissionExecutionState)state;
+ (NSString*) stringFromTrackingExecutionState:(DJIActiveTrackMissionExecutionState)state;
+ (NSString*) stringFromByPassDirection:(DJIBypassDirection)direction;

@end
