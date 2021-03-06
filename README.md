# iOS-Phantom4Missions

## Introduction

From this demo, you will learn how to use the TapFly and ActiveTrack Missions of DJI iOS SDK to create a cool application for Phantom 4. You will get familiar with DJIMissionManager and use the Simulator of DJI Assistant 2 for testing, which is convenient for you to test the missions indoor. 

## Requirements

 - iOS 9.0+
 - Xcode 8.0+
 - DJI iOS SDK 3.4.1

## SDK Installation with CocoaPods

Since this project has been integrated with [DJI iOS SDK CocoaPods](https://cocoapods.org/pods/DJI-SDK-iOS) now, please check the following steps to install **DJISDK.framework** using CocoaPods after you downloading this project:

**1.** Install CocoaPods

Open Terminal and change to the download project's directory, enter the following command to install it:

~~~
sudo gem install cocoapods
~~~

The process may take a long time, please wait. For further installation instructions, please check [this guides](https://guides.cocoapods.org/using/getting-started.html#getting-started).

**2.** Install SDK with CocoaPods in the Project

Run the following command in the project's directory:

~~~
pod install
~~~

If you install it successfully, you may get the messages similar to the followings:

~~~
Analyzing dependencies
Downloading dependencies
Installing DJI-SDK-iOS (3.4.1)
Generating Pods project
Integrating client project

[!] Please close any current Xcode sessions and use `P4Missions.xcworkspace` for this project from now on.
Pod installation complete! There is 1 dependency from the Podfile and 1 total pod
installed.
~~~

## Tutorial

For this demo's tutorial: **Creating a TapFly and ActiveTrack Missions Application**, please refer to <https://developer.dji.com/mobile-sdk/documentation/ios-tutorials/P4MissionsDemo.html>.

## Feedback

We’d love to hear your feedback on this demo and tutorial.

Please use **Github Issue** or **email** [oliver.ou@dji.com](oliver.ou@dji.com) when you meet any problems of using this demo. At a minimum please let us know:

* Which DJI Product you are using?
* Which iOS Device and iOS version you are using?
* A short description of your problem includes debugging logs or screenshots.
* Any bugs or typos you come across.

## License

iOS-Phantom4Missions is available under the MIT license. Please see the LICENSE file for more info.

