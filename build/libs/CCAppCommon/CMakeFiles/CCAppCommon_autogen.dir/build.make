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

# Utility rule file for CCAppCommon_autogen.

# Include any custom commands dependencies for this target.
include libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen.dir/progress.make

libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen: libs/CCAppCommon/CCAppCommon_autogen/timestamp

libs/CCAppCommon/CCAppCommon_autogen/timestamp: /opt/homebrew/opt/qt@5/bin/moc
libs/CCAppCommon/CCAppCommon_autogen/timestamp: /opt/homebrew/opt/qt@5/bin/uic
libs/CCAppCommon/CCAppCommon_autogen/timestamp: libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/caner/Desktop/CloudCompare/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target CCAppCommon"
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCAppCommon && /opt/homebrew/bin/cmake -E cmake_autogen /Users/caner/Desktop/CloudCompare/build/libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen.dir/AutogenInfo.json ""
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCAppCommon && /opt/homebrew/bin/cmake -E touch /Users/caner/Desktop/CloudCompare/build/libs/CCAppCommon/CCAppCommon_autogen/timestamp

libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen.dir/codegen:
.PHONY : libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen.dir/codegen

CCAppCommon_autogen: libs/CCAppCommon/CCAppCommon_autogen/timestamp
CCAppCommon_autogen: libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen
CCAppCommon_autogen: libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen.dir/build.make
.PHONY : CCAppCommon_autogen

# Rule to build all files generated by this target.
libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen.dir/build: CCAppCommon_autogen
.PHONY : libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen.dir/build

libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen.dir/clean:
	cd /Users/caner/Desktop/CloudCompare/build/libs/CCAppCommon && $(CMAKE_COMMAND) -P CMakeFiles/CCAppCommon_autogen.dir/cmake_clean.cmake
.PHONY : libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen.dir/clean

libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen.dir/depend:
	cd /Users/caner/Desktop/CloudCompare/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/caner/Desktop/CloudCompare /Users/caner/Desktop/CloudCompare/libs/CCAppCommon /Users/caner/Desktop/CloudCompare/build /Users/caner/Desktop/CloudCompare/build/libs/CCAppCommon /Users/caner/Desktop/CloudCompare/build/libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : libs/CCAppCommon/CMakeFiles/CCAppCommon_autogen.dir/depend

