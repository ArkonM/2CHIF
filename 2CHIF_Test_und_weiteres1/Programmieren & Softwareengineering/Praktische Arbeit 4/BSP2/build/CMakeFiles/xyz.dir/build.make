# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/shuff/Desktop/PA4/BSP2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/shuff/Desktop/PA4/BSP2/build

# Include any dependencies generated for this target.
include CMakeFiles/xyz.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/xyz.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/xyz.dir/flags.make

CMakeFiles/xyz.dir/src/class.cpp.o: CMakeFiles/xyz.dir/flags.make
CMakeFiles/xyz.dir/src/class.cpp.o: ../src/class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/shuff/Desktop/PA4/BSP2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/xyz.dir/src/class.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/xyz.dir/src/class.cpp.o -c /mnt/c/Users/shuff/Desktop/PA4/BSP2/src/class.cpp

CMakeFiles/xyz.dir/src/class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/xyz.dir/src/class.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/shuff/Desktop/PA4/BSP2/src/class.cpp > CMakeFiles/xyz.dir/src/class.cpp.i

CMakeFiles/xyz.dir/src/class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/xyz.dir/src/class.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/shuff/Desktop/PA4/BSP2/src/class.cpp -o CMakeFiles/xyz.dir/src/class.cpp.s

CMakeFiles/xyz.dir/src/class.cpp.o.requires:

.PHONY : CMakeFiles/xyz.dir/src/class.cpp.o.requires

CMakeFiles/xyz.dir/src/class.cpp.o.provides: CMakeFiles/xyz.dir/src/class.cpp.o.requires
	$(MAKE) -f CMakeFiles/xyz.dir/build.make CMakeFiles/xyz.dir/src/class.cpp.o.provides.build
.PHONY : CMakeFiles/xyz.dir/src/class.cpp.o.provides

CMakeFiles/xyz.dir/src/class.cpp.o.provides.build: CMakeFiles/xyz.dir/src/class.cpp.o


CMakeFiles/xyz.dir/src/main.cpp.o: CMakeFiles/xyz.dir/flags.make
CMakeFiles/xyz.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/shuff/Desktop/PA4/BSP2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/xyz.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/xyz.dir/src/main.cpp.o -c /mnt/c/Users/shuff/Desktop/PA4/BSP2/src/main.cpp

CMakeFiles/xyz.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/xyz.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/shuff/Desktop/PA4/BSP2/src/main.cpp > CMakeFiles/xyz.dir/src/main.cpp.i

CMakeFiles/xyz.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/xyz.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/shuff/Desktop/PA4/BSP2/src/main.cpp -o CMakeFiles/xyz.dir/src/main.cpp.s

CMakeFiles/xyz.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/xyz.dir/src/main.cpp.o.requires

CMakeFiles/xyz.dir/src/main.cpp.o.provides: CMakeFiles/xyz.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/xyz.dir/build.make CMakeFiles/xyz.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/xyz.dir/src/main.cpp.o.provides

CMakeFiles/xyz.dir/src/main.cpp.o.provides.build: CMakeFiles/xyz.dir/src/main.cpp.o


# Object files for target xyz
xyz_OBJECTS = \
"CMakeFiles/xyz.dir/src/class.cpp.o" \
"CMakeFiles/xyz.dir/src/main.cpp.o"

# External object files for target xyz
xyz_EXTERNAL_OBJECTS =

xyz: CMakeFiles/xyz.dir/src/class.cpp.o
xyz: CMakeFiles/xyz.dir/src/main.cpp.o
xyz: CMakeFiles/xyz.dir/build.make
xyz: CMakeFiles/xyz.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/shuff/Desktop/PA4/BSP2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable xyz"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/xyz.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/xyz.dir/build: xyz

.PHONY : CMakeFiles/xyz.dir/build

CMakeFiles/xyz.dir/requires: CMakeFiles/xyz.dir/src/class.cpp.o.requires
CMakeFiles/xyz.dir/requires: CMakeFiles/xyz.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/xyz.dir/requires

CMakeFiles/xyz.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/xyz.dir/cmake_clean.cmake
.PHONY : CMakeFiles/xyz.dir/clean

CMakeFiles/xyz.dir/depend:
	cd /mnt/c/Users/shuff/Desktop/PA4/BSP2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/shuff/Desktop/PA4/BSP2 /mnt/c/Users/shuff/Desktop/PA4/BSP2 /mnt/c/Users/shuff/Desktop/PA4/BSP2/build /mnt/c/Users/shuff/Desktop/PA4/BSP2/build /mnt/c/Users/shuff/Desktop/PA4/BSP2/build/CMakeFiles/xyz.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/xyz.dir/depend

