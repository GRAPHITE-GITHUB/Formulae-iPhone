//
//  WorkedExamplesViewer.h
//  Formulae
//
//  Created by Sam Vale on 5/09/13.
//  Copyright (c) 2013 David McAfee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WorkedExamplesViewer : UIViewController <UIWebViewDelegate>{
    
   
}
@property (weak, nonatomic) IBOutlet UIWebView *Webview;
-(IBAction)returnToPreviousView;

@end
