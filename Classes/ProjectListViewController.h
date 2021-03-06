// Copyright (C) 2012 LMIT Limited
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and 
// limitations under the License.

#import <UIKit/UIKit.h>
#import "AbstractViewController.h"
#import "HudsonView.h"
#import "ProjectDetailViewController.h"
#import "ProjectListTableViewCell.h"
#import "ChoiceWallViewController.h"

@class LoadingView;

@interface ProjectListViewController : AbstractViewController {

	HudsonView* currentView;	
	UISearchDisplayController* searchDisplayController;
	IBOutlet UISearchBar* searchBar;
    IBOutlet UIView* filterBarView;
    IBOutlet UIButton* inProgressFilterButton;
	LoadingView* loadingView;
	bool endSearchBarEditing;
    UIViewController* wallViewController;
}

@property (nonatomic,retain) IBOutlet UIButton* inProgressFilterButton;
@property (nonatomic,retain) IBOutlet UIView* filterBarView;
@property (nonatomic,retain) IBOutlet UISearchBar* searchBar;
@property (nonatomic,retain) HudsonView* currentView;

- (id)initWithNibName:(NSString*)nib bundle:(NSBundle*) bundle andView:(HudsonView*)view;

-(IBAction)onInProgressBuldTabButtonClick:(id)sender;
-(IBAction)onSuccessfulBuildTabButtonClick:(id)sender;
-(IBAction)onFailedBuildTabButtonClick:(id)sender;
-(IBAction)onAllBuildTabButtonClick:(id)sender;
-(IBAction)onUnstableBuildTabButtonClick:(id)sender;
-(IBAction)onAbortedBuildTabButtonClick:(id)sender;

@end
