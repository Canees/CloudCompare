# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/caner/Desktop/CloudCompare

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/caner/Desktop/CloudCompare/build

# Include any dependencies generated for this target.
include libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/compiler_depend.make

# Include the progress variables for this target.
include libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/progress.make

# Include the compile flags for this target's objects.
include libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/flags.make

libs/CCFbo/CC_FBO_LIB_autogen/timestamp: /opt/homebrew/opt/qt@5/bin/moc
libs/CCFbo/CC_FBO_LIB_autogen/timestamp: libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/caner/Desktop/CloudCompare/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target CC_FBO_LIB"
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && /opt/homebrew/bin/cmake -E cmake_autogen /Users/caner/Desktop/CloudCompare/build/libs/CCFbo/CMakeFiles/CC_FBO_LIB_autogen.dir/AutogenInfo.json ""
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && /opt/homebrew/bin/cmake -E touch /Users/caner/Desktop/CloudCompare/build/libs/CCFbo/CC_FBO_LIB_autogen/timestamp

libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/codegen:
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/codegen

libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/CC_FBO_LIB_autogen/mocs_compilation.cpp.o: libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/flags.make
libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/CC_FBO_LIB_autogen/mocs_compilation.cpp.o: libs/CCFbo/CC_FBO_LIB_autogen/mocs_compilation.cpp
libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/CC_FBO_LIB_autogen/mocs_compilation.cpp.o: libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/caner/Desktop/CloudCompare/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/CC_FBO_LIB_autogen/mocs_compilation.cpp.o"
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/CC_FBO_LIB_autogen/mocs_compilation.cpp.o -MF CMakeFiles/CC_FBO_LIB.dir/CC_FBO_LIB_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/CC_FBO_LIB.dir/CC_FBO_LIB_autogen/mocs_compilation.cpp.o -c /Users/caner/Desktop/CloudCompare/build/libs/CCFbo/CC_FBO_LIB_autogen/mocs_compilation.cpp

libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/CC_FBO_LIB_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CC_FBO_LIB.dir/CC_FBO_LIB_autogen/mocs_compilation.cpp.i"
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/caner/Desktop/CloudCompare/build/libs/CCFbo/CC_FBO_LIB_autogen/mocs_compilation.cpp > CMakeFiles/CC_FBO_LIB.dir/CC_FBO_LIB_autogen/mocs_compilation.cpp.i

libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/CC_FBO_LIB_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CC_FBO_LIB.dir/CC_FBO_LIB_autogen/mocs_compilation.cpp.s"
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/caner/Desktop/CloudCompare/build/libs/CCFbo/CC_FBO_LIB_autogen/mocs_compilation.cpp -o CMakeFiles/CC_FBO_LIB.dir/CC_FBO_LIB_autogen/mocs_compilation.cpp.s

libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccShader.cpp.o: libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/flags.make
libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccShader.cpp.o: /Users/caner/Desktop/CloudCompare/libs/CCFbo/src/ccShader.cpp
libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccShader.cpp.o: libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/caner/Desktop/CloudCompare/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccShader.cpp.o"
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccShader.cpp.o -MF CMakeFiles/CC_FBO_LIB.dir/src/ccShader.cpp.o.d -o CMakeFiles/CC_FBO_LIB.dir/src/ccShader.cpp.o -c /Users/caner/Desktop/CloudCompare/libs/CCFbo/src/ccShader.cpp

libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccShader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CC_FBO_LIB.dir/src/ccShader.cpp.i"
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/caner/Desktop/CloudCompare/libs/CCFbo/src/ccShader.cpp > CMakeFiles/CC_FBO_LIB.dir/src/ccShader.cpp.i

libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccShader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CC_FBO_LIB.dir/src/ccShader.cpp.s"
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/caner/Desktop/CloudCompare/libs/CCFbo/src/ccShader.cpp -o CMakeFiles/CC_FBO_LIB.dir/src/ccShader.cpp.s

libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccFrameBufferObject.cpp.o: libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/flags.make
libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccFrameBufferObject.cpp.o: /Users/caner/Desktop/CloudCompare/libs/CCFbo/src/ccFrameBufferObject.cpp
libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccFrameBufferObject.cpp.o: libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/caner/Desktop/CloudCompare/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccFrameBufferObject.cpp.o"
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccFrameBufferObject.cpp.o -MF CMakeFiles/CC_FBO_LIB.dir/src/ccFrameBufferObject.cpp.o.d -o CMakeFiles/CC_FBO_LIB.dir/src/ccFrameBufferObject.cpp.o -c /Users/caner/Desktop/CloudCompare/libs/CCFbo/src/ccFrameBufferObject.cpp

libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccFrameBufferObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CC_FBO_LIB.dir/src/ccFrameBufferObject.cpp.i"
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/caner/Desktop/CloudCompare/libs/CCFbo/src/ccFrameBufferObject.cpp > CMakeFiles/CC_FBO_LIB.dir/src/ccFrameBufferObject.cpp.i

libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccFrameBufferObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CC_FBO_LIB.dir/src/ccFrameBufferObject.cpp.s"
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/caner/Desktop/CloudCompare/libs/CCFbo/src/ccFrameBufferObject.cpp -o CMakeFiles/CC_FBO_LIB.dir/src/ccFrameBufferObject.cpp.s

libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccBilateralFilter.cpp.o: libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/flags.make
libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccBilateralFilter.cpp.o: /Users/caner/Desktop/CloudCompare/libs/CCFbo/src/ccBilateralFilter.cpp
libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccBilateralFilter.cpp.o: libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/caner/Desktop/CloudCompare/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccBilateralFilter.cpp.o"
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccBilateralFilter.cpp.o -MF CMakeFiles/CC_FBO_LIB.dir/src/ccBilateralFilter.cpp.o.d -o CMakeFiles/CC_FBO_LIB.dir/src/ccBilateralFilter.cpp.o -c /Users/caner/Desktop/CloudCompare/libs/CCFbo/src/ccBilateralFilter.cpp

libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccBilateralFilter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CC_FBO_LIB.dir/src/ccBilateralFilter.cpp.i"
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/caner/Desktop/CloudCompare/libs/CCFbo/src/ccBilateralFilter.cpp > CMakeFiles/CC_FBO_LIB.dir/src/ccBilateralFilter.cpp.i

libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccBilateralFilter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CC_FBO_LIB.dir/src/ccBilateralFilter.cpp.s"
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/caner/Desktop/CloudCompare/libs/CCFbo/src/ccBilateralFilter.cpp -o CMakeFiles/CC_FBO_LIB.dir/src/ccBilateralFilter.cpp.s

# Object files for target CC_FBO_LIB
CC_FBO_LIB_OBJECTS = \
"CMakeFiles/CC_FBO_LIB.dir/CC_FBO_LIB_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/CC_FBO_LIB.dir/src/ccShader.cpp.o" \
"CMakeFiles/CC_FBO_LIB.dir/src/ccFrameBufferObject.cpp.o" \
"CMakeFiles/CC_FBO_LIB.dir/src/ccBilateralFilter.cpp.o"

# External object files for target CC_FBO_LIB
CC_FBO_LIB_EXTERNAL_OBJECTS =

libs/CCFbo/libCC_FBO_LIB.dylib: libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/CC_FBO_LIB_autogen/mocs_compilation.cpp.o
libs/CCFbo/libCC_FBO_LIB.dylib: libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccShader.cpp.o
libs/CCFbo/libCC_FBO_LIB.dylib: libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccFrameBufferObject.cpp.o
libs/CCFbo/libCC_FBO_LIB.dylib: libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/src/ccBilateralFilter.cpp.o
libs/CCFbo/libCC_FBO_LIB.dylib: libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/build.make
libs/CCFbo/libCC_FBO_LIB.dylib: /opt/homebrew/opt/qt@5/lib/QtOpenGL.framework/QtOpenGL
libs/CCFbo/libCC_FBO_LIB.dylib: /opt/homebrew/opt/qt@5/lib/libQt5OpenGLExtensions.a
libs/CCFbo/libCC_FBO_LIB.dylib: /opt/homebrew/opt/qt@5/lib/QtWidgets.framework/QtWidgets
libs/CCFbo/libCC_FBO_LIB.dylib: /opt/homebrew/opt/qt@5/lib/QtGui.framework/QtGui
libs/CCFbo/libCC_FBO_LIB.dylib: /opt/homebrew/opt/qt@5/lib/QtCore.framework/QtCore
libs/CCFbo/libCC_FBO_LIB.dylib: libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/caner/Desktop/CloudCompare/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library libCC_FBO_LIB.dylib"
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CC_FBO_LIB.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/build: libs/CCFbo/libCC_FBO_LIB.dylib
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/build

libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/clean:
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCFbo && $(CMAKE_COMMAND) -P CMakeFiles/CC_FBO_LIB.dir/cmake_clean.cmake
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/clean

libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/depend: libs/CCFbo/CC_FBO_LIB_autogen/timestamp
	cd /Users/caner/Desktop/CloudCompare/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/caner/Desktop/CloudCompare /Users/caner/Desktop/CloudCompare/libs/CCFbo /Users/caner/Desktop/CloudCompare/build /Users/caner/Desktop/CloudCompare/build/libs/CCFbo /Users/caner/Desktop/CloudCompare/build/libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO_LIB.dir/depend

