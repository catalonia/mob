;//
//  AskVC.h
//  TasteSync
//
//  Created by Victor on 2/19/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CRequest.h"
#import "JSONKit.h"

@interface AskVC : UIViewController<UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UITextViewDelegate, RequestDelegate>
{
    __weak IBOutlet UIView *viewFilter, *viewFilterExtends,*viewGetLiveRec, *viewMain, *viewAsk, *viewWhiteBoxFilter;
    __weak IBOutlet UIScrollView *scrollViewMain,*scrollViewCusine, *scrollViewOccassion, *scrollViewWho , *scrollViewPrice, *scrollViewTheme, *scrollViewTypeOf;
    
    __weak IBOutlet UISegmentedControl *segCtrCusine, *segCtrOccasion, *segCtrTypeOf, *segCtrWho, *segCtrPrice, *segCtrTheme;
    
    __weak IBOutlet UITextField  *tfRegion;
    
    __weak IBOutlet UITableView *tbvFilter;
    
    __weak IBOutlet UILabel *lbCusine, *lbOccasion, *lbWho, *lbPrice, *lbTheme, *lbType, *lbTypeRegions;
    

}

@property (nonatomic, strong) NSMutableArray *arrData, *arrDataRegion, *arrDataFilter;

- (IBAction)actionDoneFilter:(id)sender;
- (IBAction)actionOthersTab:(id)sender;
- (IBAction)actionNewsfeedTab:(id)sender;
- (IBAction)actionFilter:(id)sender;
- (IBAction)actionGetLiveRecommendations:(id)sender;
- (IBAction)actionHideKeypad:(id)sender;

@end
