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
include qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/compiler_depend.make

# Include the progress variables for this target.
include qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/progress.make

# Include the compile flags for this target's objects.
include qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/flags.make

qCC/extern/QCustomPlot/QCustomPlot_autogen/timestamp: /opt/homebrew/opt/qt@5/bin/moc
qCC/extern/QCustomPlot/QCustomPlot_autogen/timestamp: qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/caner/Desktop/CloudCompare/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target QCustomPlot"
	cd /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot && /opt/homebrew/bin/cmake -E cmake_autogen /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot_autogen.dir/AutogenInfo.json ""
	cd /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot && /opt/homebrew/bin/cmake -E touch /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot/QCustomPlot_autogen/timestamp

qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/codegen:
.PHONY : qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/codegen

qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/QCustomPlot_autogen/mocs_compilation.cpp.o: qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/flags.make
qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/QCustomPlot_autogen/mocs_compilation.cpp.o: qCC/extern/QCustomPlot/QCustomPlot_autogen/mocs_compilation.cpp
qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/QCustomPlot_autogen/mocs_compilation.cpp.o: qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/caner/Desktop/CloudCompare/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/QCustomPlot_autogen/mocs_compilation.cpp.o"
	cd /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/QCustomPlot_autogen/mocs_compilation.cpp.o -MF CMakeFiles/QCustomPlot.dir/QCustomPlot_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/QCustomPlot.dir/QCustomPlot_autogen/mocs_compilation.cpp.o -c /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot/QCustomPlot_autogen/mocs_compilation.cpp

qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/QCustomPlot_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QCustomPlot.dir/QCustomPlot_autogen/mocs_compilation.cpp.i"
	cd /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot/QCustomPlot_autogen/mocs_compilation.cpp > CMakeFiles/QCustomPlot.dir/QCustomPlot_autogen/mocs_compilation.cpp.i

qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/QCustomPlot_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QCustomPlot.dir/QCustomPlot_autogen/mocs_compilation.cpp.s"
	cd /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot/QCustomPlot_autogen/mocs_compilation.cpp -o CMakeFiles/QCustomPlot.dir/QCustomPlot_autogen/mocs_compilation.cpp.s

qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/qcustomplot.cpp.o: qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/flags.make
qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/qcustomplot.cpp.o: /Users/caner/Desktop/CloudCompare/qCC/extern/QCustomPlot/qcustomplot.cpp
qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/qcustomplot.cpp.o: qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/caner/Desktop/CloudCompare/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/qcustomplot.cpp.o"
	cd /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/qcustomplot.cpp.o -MF CMakeFiles/QCustomPlot.dir/qcustomplot.cpp.o.d -o CMakeFiles/QCustomPlot.dir/qcustomplot.cpp.o -c /Users/caner/Desktop/CloudCompare/qCC/extern/QCustomPlot/qcustomplot.cpp

qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/qcustomplot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QCustomPlot.dir/qcustomplot.cpp.i"
	cd /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/caner/Desktop/CloudCompare/qCC/extern/QCustomPlot/qcustomplot.cpp > CMakeFiles/QCustomPlot.dir/qcustomplot.cpp.i

qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/qcustomplot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QCustomPlot.dir/qcustomplot.cpp.s"
	cd /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/caner/Desktop/CloudCompare/qCC/extern/QCustomPlot/qcustomplot.cpp -o CMakeFiles/QCustomPlot.dir/qcustomplot.cpp.s

# Object files for target QCustomPlot
QCustomPlot_OBJECTS = \
"CMakeFiles/QCustomPlot.dir/QCustomPlot_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/QCustomPlot.dir/qcustomplot.cpp.o"

# External object files for target QCustomPlot
QCustomPlot_EXTERNAL_OBJECTS =

qCC/extern/QCustomPlot/libQCustomPlot.a: qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/QCustomPlot_autogen/mocs_compilation.cpp.o
qCC/extern/QCustomPlot/libQCustomPlot.a: qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/qcustomplot.cpp.o
qCC/extern/QCustomPlot/libQCustomPlot.a: qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/build.make
qCC/extern/QCustomPlot/libQCustomPlot.a: qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/caner/Desktop/CloudCompare/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libQCustomPlot.a"
	cd /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot && $(CMAKE_COMMAND) -P CMakeFiles/QCustomPlot.dir/cmake_clean_target.cmake
	cd /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QCustomPlot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/build: qCC/extern/QCustomPlot/libQCustomPlot.a
.PHONY : qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/build

qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/clean:
	cd /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot && $(CMAKE_COMMAND) -P CMakeFiles/QCustomPlot.dir/cmake_clean.cmake
.PHONY : qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/clean

qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/depend: qCC/extern/QCustomPlot/QCustomPlot_autogen/timestamp
	cd /Users/caner/Desktop/CloudCompare/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/caner/Desktop/CloudCompare /Users/caner/Desktop/CloudCompare/qCC/extern/QCustomPlot /Users/caner/Desktop/CloudCompare/build /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot /Users/caner/Desktop/CloudCompare/build/qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : qCC/extern/QCustomPlot/CMakeFiles/QCustomPlot.dir/depend
