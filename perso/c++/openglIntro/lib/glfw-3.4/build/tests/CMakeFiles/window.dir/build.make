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
include tests/CMakeFiles/window.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/window.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/window.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/window.dir/flags.make

tests/CMakeFiles/window.dir/window.c.o: tests/CMakeFiles/window.dir/flags.make
tests/CMakeFiles/window.dir/window.c.o: /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/tests/window.c
tests/CMakeFiles/window.dir/window.c.o: tests/CMakeFiles/window.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tests/CMakeFiles/window.dir/window.c.o"
	cd /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT tests/CMakeFiles/window.dir/window.c.o -MF CMakeFiles/window.dir/window.c.o.d -o CMakeFiles/window.dir/window.c.o -c /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/tests/window.c

tests/CMakeFiles/window.dir/window.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/window.dir/window.c.i"
	cd /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/tests/window.c > CMakeFiles/window.dir/window.c.i

tests/CMakeFiles/window.dir/window.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/window.dir/window.c.s"
	cd /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/tests/window.c -o CMakeFiles/window.dir/window.c.s

# Object files for target window
window_OBJECTS = \
"CMakeFiles/window.dir/window.c.o"

# External object files for target window
window_EXTERNAL_OBJECTS =

tests/window: tests/CMakeFiles/window.dir/window.c.o
tests/window: tests/CMakeFiles/window.dir/build.make
tests/window: src/libglfw3.a
tests/window: /usr/lib/x86_64-linux-gnu/libm.so
tests/window: /usr/lib/x86_64-linux-gnu/librt.a
tests/window: /usr/lib/x86_64-linux-gnu/libm.so
tests/window: tests/CMakeFiles/window.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable window"
	cd /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/window.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/window.dir/build: tests/window
.PHONY : tests/CMakeFiles/window.dir/build

tests/CMakeFiles/window.dir/clean:
	cd /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/window.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/window.dir/clean

tests/CMakeFiles/window.dir/depend:
	cd /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4 /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/tests /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/tests /home/frantz/Documents/dev/training/perso/c++/openglIntro/lib/glfw-3.4/build/tests/CMakeFiles/window.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/window.dir/depend

