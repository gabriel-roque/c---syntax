# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /opt/jetbrians/Clion/clion-2018.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/jetbrians/Clion/clion-2018.2.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/insertionSort"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/insertionSort/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/insertionSort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/insertionSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/insertionSort.dir/flags.make

CMakeFiles/insertionSort.dir/main.c.o: CMakeFiles/insertionSort.dir/flags.make
CMakeFiles/insertionSort.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/insertionSort/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/insertionSort.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/insertionSort.dir/main.c.o   -c "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/insertionSort/main.c"

CMakeFiles/insertionSort.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/insertionSort.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/insertionSort/main.c" > CMakeFiles/insertionSort.dir/main.c.i

CMakeFiles/insertionSort.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/insertionSort.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/insertionSort/main.c" -o CMakeFiles/insertionSort.dir/main.c.s

# Object files for target insertionSort
insertionSort_OBJECTS = \
"CMakeFiles/insertionSort.dir/main.c.o"

# External object files for target insertionSort
insertionSort_EXTERNAL_OBJECTS =

insertionSort: CMakeFiles/insertionSort.dir/main.c.o
insertionSort: CMakeFiles/insertionSort.dir/build.make
insertionSort: CMakeFiles/insertionSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/insertionSort/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable insertionSort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/insertionSort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/insertionSort.dir/build: insertionSort

.PHONY : CMakeFiles/insertionSort.dir/build

CMakeFiles/insertionSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/insertionSort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/insertionSort.dir/clean

CMakeFiles/insertionSort.dir/depend:
	cd "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/insertionSort/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/insertionSort" "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/insertionSort" "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/insertionSort/cmake-build-debug" "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/insertionSort/cmake-build-debug" "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/insertionSort/cmake-build-debug/CMakeFiles/insertionSort.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/insertionSort.dir/depend

