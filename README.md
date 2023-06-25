Amnesia: A Machine For Pigs Source Code
=======================================

Code
----

Amnesia: A Machine For Pigs has been upgraded for GNU/Linux, macOS systems and Windows.

* Old-style C++ class declarations have been updated.
* All dependencies are now using their modern equivalents (except AngelScript) which is on 2.24.1 - this is due to the fact that this version is perfectly 64bit compatible and has compilable sources.  The API for the latest versions is not compatible and changing the script engine on such a complex title is bound to introduce regressions.
* Newton has been upgraded to a heavily customised 2.32 with backported fixes in order to work perfectly with the physics in Vanilla AMFP.  Sources included.  Again, this was to prevent regressions in functionality.
* The FBX functionality has been added back and upgraded to the latest (2020.3).
* CMake project is buildable from scratch with no further setup.
* All CMake projects have been upgraded to remove deprecation notices.
* Binreloc has been removed as all libraries are now linked from the system installed versions.
* lib64 directory has been removed due to the above change.

Building
--------

First you will need to grab the FBX SDK: https://www.autodesk.com/developer-network/platform-technologies/fbx-sdk-2020-0
After that, you'll need to install it (follow the instructions) and then change the CMakeLists.txt file to correspond to the Include and Library directories you chose.

Go into the directory you cloned this to, enter the 'Game/src' directory and perform a 'mkdir build' and 'cmake ..'

All dependencies are included here and so after it finished the setup, run 'make' or if you´re on windows use Visual Studio 2022.  Then grab a beverage because it takes about 20 minutes.

Please note, that this project deals with GNU/Linux, macOS builds and Windows.

License Information
-------------------
All code is under the GPL Version 3 license. Read the LICENSE file for terms of use of the license.
