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
CMAKE_SOURCE_DIR = /home/frantz/Documents/dev/training/perso/c++/openglIntro

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/frantz/Documents/dev/training/perso/c++/openglIntro/build

# Include any dependencies generated for this target.
include CMakeFiles/my_prog.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/my_prog.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/my_prog.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_prog.dir/flags.make

CMakeFiles/my_prog.dir/src/Main.cpp.o: CMakeFiles/my_prog.dir/flags.make
CMakeFiles/my_prog.dir/src/Main.cpp.o: /home/frantz/Documents/dev/training/perso/c++/openglIntro/src/Main.cpp
CMakeFiles/my_prog.dir/src/Main.cpp.o: CMakeFiles/my_prog.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frantz/Documents/dev/training/perso/c++/openglIntro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/my_prog.dir/src/Main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/my_prog.dir/src/Main.cpp.o -MF CMakeFiles/my_prog.dir/src/Main.cpp.o.d -o CMakeFiles/my_prog.dir/src/Main.cpp.o -c /home/frantz/Documents/dev/training/perso/c++/openglIntro/src/Main.cpp

CMakeFiles/my_prog.dir/src/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_prog.dir/src/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frantz/Documents/dev/training/perso/c++/openglIntro/src/Main.cpp > CMakeFiles/my_prog.dir/src/Main.cpp.i

CMakeFiles/my_prog.dir/src/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_prog.dir/src/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frantz/Documents/dev/training/perso/c++/openglIntro/src/Main.cpp -o CMakeFiles/my_prog.dir/src/Main.cpp.s

# Object files for target my_prog
my_prog_OBJECTS = \
"CMakeFiles/my_prog.dir/src/Main.cpp.o"

# External object files for target my_prog
my_prog_EXTERNAL_OBJECTS =

my_prog: CMakeFiles/my_prog.dir/src/Main.cpp.o
my_prog: CMakeFiles/my_prog.dir/build.make
my_prog: /usr/local/lib/libglfw3.a
my_prog: /usr/lib/x86_64-linux-gnu/librt.a
my_prog: /usr/lib/x86_64-linux-gnu/libm.so
my_prog: CMakeFiles/my_prog.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/frantz/Documents/dev/training/perso/c++/openglIntro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable my_prog"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_prog.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_prog.dir/build: my_prog
.PHONY : CMakeFiles/my_prog.dir/build

CMakeFiles/my_prog.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_prog.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_prog.dir/clean

CMakeFiles/my_prog.dir/depend:
	cd /home/frantz/Documents/dev/training/perso/c++/openglIntro/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frantz/Documents/dev/training/perso/c++/openglIntro /home/frantz/Documents/dev/training/perso/c++/openglIntro /home/frantz/Documents/dev/training/perso/c++/openglIntro/build /home/frantz/Documents/dev/training/perso/c++/openglIntro/build /home/frantz/Documents/dev/training/perso/c++/openglIntro/build/CMakeFiles/my_prog.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_prog.dir/depend

