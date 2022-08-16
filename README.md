# fk_user_agent

[![Pub](https://img.shields.io/pub/v/fk_user_agent.svg)](https://pub.dartlang.org/packages/fk_user_agent)
[![Awesome Flutter](https://img.shields.io/badge/Awesome-Flutter-blue.svg?longCache=true&style=flat-square)]()
[![Awesome Flutter](https://img.shields.io/badge/Platform-Android_iOS-blue.svg?longCache=true&style=flat-square)]()
[![License](https://img.shields.io/badge/License-MIT-blue.svg)](/LICENSE)

Retrieve Android/iOS device user agents in Flutter.

### Example user-agents:

| System | User-Agent |
| ------ | ---------- |
| iOS    | CFNetwork/897.15 Darwin/17.5.0 (iPhone/6s iOS/11.3) |
| Android | Dalvik/2.1.0 (Linux; U; Android 5.1.1; Android SDK built for x86 Build/LMY48X) |

### Additionally:

Every version returns some additional constants that might be useful for custom user-agent building.

iOS version returns:
- isEmulator
- systemName
- systemVersion
- applicationName
- applicationVersion
- buildNumber
- darwinVersion
- cfnetworkVersion
- deviceName
- packageUserAgent

Android version returns:
- systemName
- systemVersion
- packageName
- shortPackageName
- applicationName
- applicationVersion
- applicationBuildNumber
- packageUserAgent

### Credits 👍

Based of https://github.com/j0j00/flutter_user_agent