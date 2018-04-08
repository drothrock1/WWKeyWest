//
//  PageNewViewController.h
//  WickedWalksKeyWest
//
//  Created by Diane on 5/19/14.
//
//
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface PageNewViewController : UIViewController <AVAudioPlayerDelegate>
{
	IBOutlet UIScrollView *scrollView;
	UIColor *defaultTintColor;
	
	UIView *slideUpView;
	
	AVAudioPlayer *player;
	UIButton *playButton;
	UISlider *progressBar;
	UILabel *currentTime;
	UILabel *duration;
	NSTimer	*updateTimer;
	
	BOOL stopAudioOverride;
}

//@property (nonatomic, retain) IBOutlet UIScrollView *scrollView;
@property (nonatomic, retain) AVAudioPlayer	*player;
@property (nonatomic, retain) UIButton *playButton;
@property (nonatomic, retain) UISlider *progressBar;
@property (nonatomic, retain) UILabel *currentTime;
@property (nonatomic, retain) UILabel *duration;

- (IBAction)photoTapped:(id)sender;



@end
