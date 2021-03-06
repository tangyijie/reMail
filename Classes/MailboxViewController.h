//
//  MailboxViewController.h
//  NextMailIPhone
//
//  Created by Gabor Cselle on 1/13/09.
//  Copyright 2010 Google Inc.
//  
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//  
//   http://www.apache.org/licenses/LICENSE-2.0
//  
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import "SearchRunner.h"

@interface MailboxViewController : UITableViewController <MFMailComposeViewControllerDelegate, SearchManagerDelegate> {
	NSMutableArray *emailData;
	int nResults;
	int folderNum;
}

-(IBAction)composeClick;
-(void)runLoadDataWithDBNum:(int)dbNum;
-(void)doLoad;

@property (nonatomic, retain) NSMutableArray *emailData;
@property (assign) int nResults;
@property (assign) int folderNum;
@end
