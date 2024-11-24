# C++ Project Setup for CMake, VSCode & SDL2 Framework on a Mac M2

Template project setup for vscode, clang++ and SDL2 on a mac. Using latest toolchain that is cpp extensions, cmake and presets.

Requires:

- SDL2 to be installed into `/Library/Frameworks/SDL2.framework` as per the installation documentation.
- CMake installed
- vscode extension cpp
- vscode extension cmake

Note the `launch.json` is required for debugging, hit F5. Currently the debugging command in cmake targeting lldb (on a mac) for debugging doesn't work. Known open issue on github. But hitting the F5 and launching "lldb debug Launch" should work fine.
