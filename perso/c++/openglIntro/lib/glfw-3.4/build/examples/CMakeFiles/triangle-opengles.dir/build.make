# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build

# Include any dependencies generated for this target.
include examples/CMakeFiles/triangle-opengles.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/CMakeFiles/triangle-opengles.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/triangle-opengles.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/triangle-opengles.dir/flags.make

examples/CMakeFiles/triangle-opengles.dir/triangle-opengles.c.o: examples/CMakeFiles/triangle-opengles.dir/flags.make
examples/CMakeFiles/triangle-opengles.dir/triangle-opengles.c.o: /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/examples/triangle-opengles.c
examples/CMakeFiles/triangle-opengles.dir/triangle-opengles.c.o: examples/CMakeFiles/triangle-opengles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/CMakeFiles/triangle-opengles.dir/triangle-opengles.c.o"
	cd /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT examples/CMakeFiles/triangle-opengles.dir/triangle-opengles.c.o -MF CMakeFiles/triangle-opengles.dir/triangle-opengles.c.o.d -o CMakeFiles/triangle-opengles.dir/triangle-opengles.c.o -c /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/examples/triangle-opengles.c

examples/CMakeFiles/triangle-opengles.dir/triangle-opengles.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/triangle-opengles.dir/triangle-opengles.c.i"
	cd /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/examples/triangle-opengles.c > CMakeFiles/triangle-opengles.dir/triangle-opengles.c.i

examples/CMakeFiles/triangle-opengles.dir/triangle-opengles.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/triangle-opengles.dir/triangle-opengles.c.s"
	cd /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/examples/triangle-opengles.c -o CMakeFiles/triangle-opengles.dir/triangle-opengles.c.s

# Object files for target triangle-opengles
triangle__opengles_OBJECTS = \
"CMakeFiles/triangle-opengles.dir/triangle-opengles.c.o"

# External object files for target triangle-opengles
triangle__opengles_EXTERNAL_OBJECTS =

examples/triangle-opengles: examples/CMakeFiles/triangle-opengles.dir/triangle-opengles.c.o
examples/triangle-opengles: examples/CMakeFiles/triangle-opengles.dir/build.make
examples/triangle-opengles: src/libglfw3.a
examples/triangle-opengles: /usr/lib/x86_64-linux-gnu/libm.so
examples/triangle-opengles: /usr/lib/x86_64-linux-gnu/librt.a
examples/triangle-opengles: /usr/lib/x86_64-linux-gnu/libm.so
examples/triangle-opengles: examples/CMakeFiles/triangle-opengles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable triangle-opengles"
	cd /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/triangle-opengles.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/triangle-opengles.dir/build: examples/triangle-opengles
.PHONY : examples/CMakeFiles/triangle-opengles.dir/build

examples/CMakeFiles/triangle-opengles.dir/clean:
	cd /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/triangle-opengles.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/triangle-opengles.dir/clean

examples/CMakeFiles/triangle-opengles.dir/depend:
	cd /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4 /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/examples /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/examples /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/examples/CMakeFiles/triangle-opengles.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/triangle-opengles.dir/depend

