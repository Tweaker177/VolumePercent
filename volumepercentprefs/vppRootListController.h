#import <Preferences/PSListController.h>
#import <Preferences/PSTableCell.h>
#import <Preferences/PSSpecifier.h>
#import <spawn.h>

@interface vppRootListController : PSListController

-(id)getPreferenceSpecifier:(PSSpecifier*)specifier;
-(void)setPreferenceValue:(id)value specifier:(PSSpecifier*)specifier;
-(void)apply;
-(void)respring:(id)sender;
-(void)donationLink;
-(void)sourceLink;

@end
