/* SortManagerController */

#import <Cocoa/Cocoa.h>

@class CQViewController;

@interface SortManagerController : NSWindowController
{
    IBOutlet CQViewController *mainController;
	IBOutlet NSMatrix* moveCopyMatrix;
	IBOutlet NSTableView* tableView;
}
- (IBAction)manageButtonClicked:(id)sender;

@end
