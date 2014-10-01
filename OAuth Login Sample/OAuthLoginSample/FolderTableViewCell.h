// Copyright 2013 ESRI
//
// All rights reserved under the copyright laws of the United States
// and applicable international laws, treaties, and conventions.
//
// You may freely redistribute and use this sample code, with or
// without modification, provided you include the original copyright
// notice and use restrictions.
//
// See the use restrictions at http://help.arcgis.com/en/sdk/10.0/usageRestrictions.htm
//
#import <UIKit/UIKit.h>

@interface FolderTableViewCell : UITableViewCell


@property (nonatomic, strong) IBOutlet UILabel     *titleLabel;
@property (nonatomic, strong) IBOutlet UILabel     *descriptionLabel;
@property (nonatomic, strong) IBOutlet UIImageView *thumbnailImageView;

@end
