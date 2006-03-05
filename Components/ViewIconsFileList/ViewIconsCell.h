/////////////////////////////////////////////////////////////////////////
// File:          $Name$
// Module:        Implements the cell used in the ViewAsIconView browser.
// Part of:       VitaminSEE
//
// Revision:      $Revision: 238 $
// Last edited:   $Date: 2005-06-11 16:16:07 -0500 (Sat, 11 Jun 2005) $
// Author:        $Author: glaysher $
// Copyright:     (c) 2005 Elliot Glaysher
// Created:       2/9/05
//
/////////////////////////////////////////////////////////////////////////
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//
////////////////////////////////////////////////////////////////////////

#import <Cocoa/Cocoa.h>

@class ImageTaskManager;
@class EGPath;

@interface ViewIconsCell : NSBrowserCell {
	NSString* title;
	BOOL selected;

	NSImage* iconImage;
	NSString* thisCellsFullPath;	
	EGPath* thisCellsEGPath;

	float cachedTitleWidth;
	NSString* cachedCellTitle;
	
	NSString* displayName;
}

-(void)setCellPropertiesFromPath:(NSString*)path andEGPath:(EGPath*)egpath;

- (NSImage*)iconImage;
-(void)setIconImage:(NSImage*)image;

-(NSString*)cellPath;

-(void)setTitle:(NSString*)newTitle;

-(void)resetTitleCache;
@end
