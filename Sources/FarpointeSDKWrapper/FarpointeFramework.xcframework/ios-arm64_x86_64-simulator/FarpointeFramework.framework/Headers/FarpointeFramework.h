//
//  FarpointeFramework.h
//  FarpointeFramework
//
//  Created by Joe Bakalor on 9/6/23.
//

#import <Foundation/Foundation.h>

//! Project version number for FarpointeFramework.
FOUNDATION_EXPORT double FarpointeFrameworkVersionNumber;

//! Project version string for FarpointeFramework.
FOUNDATION_EXPORT const unsigned char FarpointeFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <FarpointeFramework/PublicHeader.h>


//1
//xcodebuild archive -project FarpointeFramework.xcodeproj -scheme FarpointeFramework -archivePath ~/Desktop/FarpointeFramework-iphonesimulator.xcarchive -sdk iphonesimulator SKIP_INSTALL=NO
//2
//xcodebuild archive -project FarpointeFramework.xcodeproj -scheme FarpointeFramework -archivePath ~/Desktop/FarpointeFramework-iphoneos.xcarchive -sdk iphoneos SKIP_INSTALL=NO
//3
//xcodebuild -create-xcframework -framework ~/Desktop/FarpointeFramework-iphonesimulator.xcarchive/Products/Library/Frameworks/FarpointeFramework.framework -framework ~/Desktop/FarpointeFramework-iphoneos.xcarchive/Products/Library/Frameworks/FarpointeFramework.framework -output ~/Desktop/FarpointeFramework.xcframework
