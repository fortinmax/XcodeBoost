//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEAlert;

@interface IDEAlertViewController : IDEViewController
{
    IDEAlert *_alert;
}

+ (void)uninstallViewControllers;
+ (id)alertViewControllerForAlertIdentifier:(id)arg1;
+ (id)alertViewControllerForAlert:(id)arg1;
+ (void)initialize;
@property(retain) IDEAlert *alert; // @synthesize alert=_alert;
- (void).cxx_destruct;

@end
