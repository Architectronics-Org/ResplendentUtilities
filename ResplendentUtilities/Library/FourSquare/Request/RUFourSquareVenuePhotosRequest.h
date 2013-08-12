//
//  RUFourSquareVenuePhotosRequest.h
//  Pineapple
//
//  Created by Benjamin Maer on 8/11/13.
//  Copyright (c) 2013 Pineapple. All rights reserved.
//

#import "RUFourSquareRequest.h"

extern NSInteger const kRUFourSquareVenuePhotosRequestLimit;

@interface RUFourSquareVenuePhotosRequest : RUFourSquareRequest

@property (nonatomic, readonly) NSString* fourSquareVenueId;

-(void)fetchWithFourSquareVenueId:(NSString*)fourSquareVenueId;

@end
