/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/Yik Yak-Structs.h>
#import <Yik Yak/YYViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <Yik Yak/YYPingingContactsTableViewCellDelegate.h>
#import <Yik Yak/MFMessageComposeViewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class YYYakMessage, UITableView, UICollectionView, UIView, UIButton, UISearchDisplayController, NSLayoutConstraint, UILabel, UIImageView, NSArray, NSMutableArray, UITapGestureRecognizer, YYPingingYakPreview, UIBarButtonItem, NSString;

@interface YYPingingViewController : YYViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate, YYPingingContactsTableViewCellDelegate, MFMessageComposeViewControllerDelegate, UIActionSheetDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	char _canSend;
	char _isSending;
	char _isShowingSendBar;
	YYYakMessage* _yak;
	int _yakSource;
	UITableView* _contactsTableView;
	UICollectionView* _selectedContactsCollectionView;
	UIView* _sendBarView;
	UIButton* _sendButton;
	UISearchDisplayController* _searchDisplayController;
	NSLayoutConstraint* _sendBarBottomConstraint;
	UILabel* _pingSuccessLabel;
	UIImageView* _animatedVotesImageView;
	NSArray* _arrayOfContacts;
	NSArray* _arrayOfSearchResultsContacts;
	NSMutableArray* _arrayOfSelectedContacts;
	UITapGestureRecognizer* _dismissKeyboardGR;
	YYPingingYakPreview* _yakPreview;
	UIBarButtonItem* _moreButton;
	NSArray* _mostRecentContacts;

}

@property (nonatomic,retain) YYYakMessage * yak;                                                    //@synthesize yak=_yak - In the implementation block
@property (assign,nonatomic) int yakSource;                                                         //@synthesize yakSource=_yakSource - In the implementation block
@property (assign,nonatomic,__weak) UITableView * contactsTableView;                                //@synthesize contactsTableView=_contactsTableView - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * selectedContactsCollectionView;              //@synthesize selectedContactsCollectionView=_selectedContactsCollectionView - In the implementation block
@property (assign,nonatomic,__weak) UIView * sendBarView;                                           //@synthesize sendBarView=_sendBarView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * sendButton;                                          //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) UISearchDisplayController * searchDisplayController;                   //@synthesize searchDisplayController=_searchDisplayController - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * sendBarBottomConstraint;                   //@synthesize sendBarBottomConstraint=_sendBarBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) UILabel * pingSuccessLabel;                                     //@synthesize pingSuccessLabel=_pingSuccessLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * animatedVotesImageView;                           //@synthesize animatedVotesImageView=_animatedVotesImageView - In the implementation block
@property (nonatomic,retain) NSArray * arrayOfContacts;                                             //@synthesize arrayOfContacts=_arrayOfContacts - In the implementation block
@property (nonatomic,retain) NSArray * arrayOfSearchResultsContacts;                                //@synthesize arrayOfSearchResultsContacts=_arrayOfSearchResultsContacts - In the implementation block
@property (nonatomic,retain) NSMutableArray * arrayOfSelectedContacts;                              //@synthesize arrayOfSelectedContacts=_arrayOfSelectedContacts - In the implementation block
@property (assign,nonatomic) char canSend;                                                          //@synthesize canSend=_canSend - In the implementation block
@property (assign,nonatomic) char isSending;                                                        //@synthesize isSending=_isSending - In the implementation block
@property (assign,nonatomic) char isShowingSendBar;                                                 //@synthesize isShowingSendBar=_isShowingSendBar - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * dismissKeyboardGR;                            //@synthesize dismissKeyboardGR=_dismissKeyboardGR - In the implementation block
@property (nonatomic,retain) YYPingingYakPreview * yakPreview;                                      //@synthesize yakPreview=_yakPreview - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * moreButton;                                          //@synthesize moreButton=_moreButton - In the implementation block
@property (nonatomic,retain) NSArray * mostRecentContacts;                                          //@synthesize mostRecentContacts=_mostRecentContacts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)yakSource;
-(void)setYakSource:(int)arg1 ;
-(void)setYak:(YYYakMessage *)arg1 ;
-(YYYakMessage *)yak;
-(void)startListeningForKeyboardNotifications;
-(void)stopListeningForKeyboardNotifications;
-(void)pingingContactsTableViewCellActionButtonPressed:(id)arg1 ;
-(UICollectionView *)selectedContactsCollectionView;
-(void)setupYakPreview;
-(UITableView *)contactsTableView;
-(void)setArrayOfContacts:(NSArray *)arg1 ;
-(void)setupSearch;
-(void)updateSendBar;
-(void)setupAnimatedVotesImageView;
-(void)trackShareYakInitiated;
-(UIView *)sendBarView;
-(void)startListeningForContactsChangedNotification;
-(void)stopListeningForContactsChangedNotification;
-(void)syncAddressBookAndRefresh;
-(void)moreButtonTapped:(id)arg1 ;
-(char)isShareTextNotEmpty;
-(NSMutableArray *)arrayOfSelectedContacts;
-(YYPingingYakPreview *)yakPreview;
-(void)sendPing;
-(void)setIsSending:(char)arg1 ;
-(void)updateLastSendDateForRecipients;
-(void)animateOutSendBar;
-(UIImageView *)animatedVotesImageView;
-(void)awardYakarmaForSharing;
-(void)animateSuccessfulPing:(/*^block*/id)arg1 ;
-(void)setAllRecipientsToBeNotSelected;
-(void)setMostRecentContacts:(NSArray *)arg1 ;
-(void)setYakPreview:(YYPingingYakPreview *)arg1 ;
-(void)changeSearchBarColorToGreen;
-(void)resetSearchBarColor;
-(void)filterContactsForSearchText:(id)arg1 ;
-(NSArray *)arrayOfContacts;
-(void)setArrayOfSearchResultsContacts:(NSArray *)arg1 ;
-(UITapGestureRecognizer *)dismissKeyboardGR;
-(void)dismissKeyboard:(id)arg1 ;
-(char)shouldShowSendBar;
-(NSLayoutConstraint *)sendBarBottomConstraint;
-(char)isShowingSendBar;
-(void)setIsShowingSendBar:(char)arg1 ;
-(void)updateSendBarConstraints:(id)arg1 keyboardWasHidden:(char)arg2 ;
-(NSArray *)mostRecentContacts;
-(NSArray *)arrayOfSearchResultsContacts;
-(id)contactForIndexPath:(id)arg1 forTableView:(id)arg2 ;
-(void)selectOrDeselectContact:(id)arg1 ;
-(void)scrollToLastSelectedContact;
-(void)showMessageComposeForContact:(id)arg1 ;
-(UILabel *)pingSuccessLabel;
-(void)sendAction:(id)arg1 ;
-(void)triggerVerification;
-(int)numberOfMostRecentContacts;
-(void)setContactsTableView:(UITableView *)arg1 ;
-(void)setSelectedContactsCollectionView:(UICollectionView *)arg1 ;
-(void)setSendBarView:(UIView *)arg1 ;
-(void)setSendBarBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPingSuccessLabel:(UILabel *)arg1 ;
-(void)setAnimatedVotesImageView:(UIImageView *)arg1 ;
-(void)setArrayOfSelectedContacts:(NSMutableArray *)arg1 ;
-(void)setDismissKeyboardGR:(UITapGestureRecognizer *)arg1 ;
-(UIBarButtonItem *)moreButton;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(UISearchDisplayController *)searchDisplayController;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setSearchDisplayController:(UISearchDisplayController *)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)goBack;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(char)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(void)setCanSend:(char)arg1 ;
-(UIButton *)sendButton;
-(void)setSendButton:(UIButton *)arg1 ;
-(char)canSend;
-(char)isSending;
-(void)startListeningForNotifications;
-(void)stopListeningForNotifications;
-(void)setMoreButton:(UIBarButtonItem *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

