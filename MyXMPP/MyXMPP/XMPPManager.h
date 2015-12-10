//
//  XMPPManager.h
//  MyXMPP
//
//  Created by halloworld on 15/11/29.
//  Copyright © 2015年 halloworld. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <XMPPFramework.h>
#import <XMPPRoster.h>
#import <XMPPRosterCoreDataStorage.h>
#import "def.h"

@interface XMPPManager : NSObject

+ (instancetype)shareInterface;

- (XMPPStream *)xmppStream;

- (XMPPRoster *)xmppRoster;
- (XMPPRosterCoreDataStorage *)xmppRosterStorage;

- (void)addStreamDelegate:(id<XMPPStreamDelegate>)aDelegate;

- (void)removeStreamDelegate:(id<XMPPStreamDelegate>)aDelegate;

- (void)connect;

- (void)addFriendWithID:(NSString *)friendID;

@end
