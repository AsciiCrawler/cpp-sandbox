# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_SOURCE_DIR = /home/fedora/Documents/dev/cpp-sandbox/hello-triangle

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.o: /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/main.cpp
CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fedora/Documents/dev/cpp-sandbox/hello-triangle/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/main.cpp.o -MF CMakeFiles/main.dir/main.cpp.o.d -o CMakeFiles/main.dir/main.cpp.o -c /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/main.cpp

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/main.cpp > CMakeFiles/main.dir/main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/main.cpp -o CMakeFiles/main.dir/main.cpp.s

CMakeFiles/main.dir/includes/glad/glad.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/includes/glad/glad.c.o: /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/includes/glad/glad.c
CMakeFiles/main.dir/includes/glad/glad.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fedora/Documents/dev/cpp-sandbox/hello-triangle/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/main.dir/includes/glad/glad.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/includes/glad/glad.c.o -MF CMakeFiles/main.dir/includes/glad/glad.c.o.d -o CMakeFiles/main.dir/includes/glad/glad.c.o -c /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/includes/glad/glad.c

CMakeFiles/main.dir/includes/glad/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/includes/glad/glad.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/includes/glad/glad.c > CMakeFiles/main.dir/includes/glad/glad.c.i

CMakeFiles/main.dir/includes/glad/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/includes/glad/glad.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/includes/glad/glad.c -o CMakeFiles/main.dir/includes/glad/glad.c.s

CMakeFiles/main.dir/src/benchmark.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/benchmark.cpp.o: /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/src/benchmark.cpp
CMakeFiles/main.dir/src/benchmark.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fedora/Documents/dev/cpp-sandbox/hello-triangle/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/src/benchmark.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/benchmark.cpp.o -MF CMakeFiles/main.dir/src/benchmark.cpp.o.d -o CMakeFiles/main.dir/src/benchmark.cpp.o -c /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/src/benchmark.cpp

CMakeFiles/main.dir/src/benchmark.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/benchmark.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/src/benchmark.cpp > CMakeFiles/main.dir/src/benchmark.cpp.i

CMakeFiles/main.dir/src/benchmark.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/benchmark.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/src/benchmark.cpp -o CMakeFiles/main.dir/src/benchmark.cpp.s

CMakeFiles/main.dir/src/utilities.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/utilities.cpp.o: /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/src/utilities.cpp
CMakeFiles/main.dir/src/utilities.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fedora/Documents/dev/cpp-sandbox/hello-triangle/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/src/utilities.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/utilities.cpp.o -MF CMakeFiles/main.dir/src/utilities.cpp.o.d -o CMakeFiles/main.dir/src/utilities.cpp.o -c /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/src/utilities.cpp

CMakeFiles/main.dir/src/utilities.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/utilities.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/src/utilities.cpp > CMakeFiles/main.dir/src/utilities.cpp.i

CMakeFiles/main.dir/src/utilities.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/utilities.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/src/utilities.cpp -o CMakeFiles/main.dir/src/utilities.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.o" \
"CMakeFiles/main.dir/includes/glad/glad.c.o" \
"CMakeFiles/main.dir/src/benchmark.cpp.o" \
"CMakeFiles/main.dir/src/utilities.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/main.cpp.o
main: CMakeFiles/main.dir/includes/glad/glad.c.o
main: CMakeFiles/main.dir/src/benchmark.cpp.o
main: CMakeFiles/main.dir/src/utilities.cpp.o
main: CMakeFiles/main.dir/build.make
main: /usr/lib64/libSDL2main.a
main: /usr/lib64/libSDL2-2.0.so.0.2600.3
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fedora/Documents/dev/cpp-sandbox/hello-triangle/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fedora/Documents/dev/cpp-sandbox/hello-triangle /home/fedora/Documents/dev/cpp-sandbox/hello-triangle /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/build /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/build /home/fedora/Documents/dev/cpp-sandbox/hello-triangle/build/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

