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
CMAKE_SOURCE_DIR = "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT04"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT04/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/QT04.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/QT04.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QT04.dir/flags.make

CMakeFiles/QT04.dir/main.c.o: CMakeFiles/QT04.dir/flags.make
CMakeFiles/QT04.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT04/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/QT04.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/QT04.dir/main.c.o   -c "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT04/main.c"

CMakeFiles/QT04.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/QT04.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT04/main.c" > CMakeFiles/QT04.dir/main.c.i

CMakeFiles/QT04.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/QT04.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT04/main.c" -o CMakeFiles/QT04.dir/main.c.s

# Object files for target QT04
QT04_OBJECTS = \
"CMakeFiles/QT04.dir/main.c.o"

# External object files for target QT04
QT04_EXTERNAL_OBJECTS =

QT04: CMakeFiles/QT04.dir/main.c.o
QT04: CMakeFiles/QT04.dir/build.make
QT04: CMakeFiles/QT04.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT04/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable QT04"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QT04.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QT04.dir/build: QT04

.PHONY : CMakeFiles/QT04.dir/build

CMakeFiles/QT04.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QT04.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QT04.dir/clean

CMakeFiles/QT04.dir/depend:
	cd "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT04/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT04" "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT04" "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT04/cmake-build-debug" "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT04/cmake-build-debug" "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT04/cmake-build-debug/CMakeFiles/QT04.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/QT04.dir/depend

