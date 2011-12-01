//
//  CommunicationManager.h
//  Carat
//
//  Created by Anand Padmanabha Iyer on 11/5/11.
//  Copyright (c) 2011 UC Berkeley. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CaratProtocol.h"
#import "Thrift/transport/TSocketClient.h"
#import "Thrift/protocol/TBinaryProtocol.h"

@interface CommunicationManager : NSObject
- (void) sendRegistrationMessage:(Registration *) registrationMessage;
- (BOOL) sendSample:(Sample *) sample;
@end