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
CMAKE_SOURCE_DIR = "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT03"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT03/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/QT03.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/QT03.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QT03.dir/flags.make

CMakeFiles/QT03.dir/main.c.o: CMakeFiles/QT03.dir/flags.make
CMakeFiles/QT03.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT03/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/QT03.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/QT03.dir/main.c.o   -c "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT03/main.c"

CMakeFiles/QT03.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/QT03.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT03/main.c" > CMakeFiles/QT03.dir/main.c.i

CMakeFiles/QT03.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/QT03.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT03/main.c" -o CMakeFiles/QT03.dir/main.c.s

# Object files for target QT03
QT03_OBJECTS = \
"CMakeFiles/QT03.dir/main.c.o"

# External object files for target QT03
QT03_EXTERNAL_OBJECTS =

QT03: CMakeFiles/QT03.dir/main.c.o
QT03: CMakeFiles/QT03.dir/build.make
QT03: CMakeFiles/QT03.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT03/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable QT03"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QT03.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QT03.dir/build: QT03

.PHONY : CMakeFiles/QT03.dir/build

CMakeFiles/QT03.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QT03.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QT03.dir/clean

CMakeFiles/QT03.dir/depend:
	cd "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT03/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT03" "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT03" "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT03/cmake-build-debug" "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT03/cmake-build-debug" "/home/gabriel-odyssey/Documentos/estudos/c/c---syntax/Files in Clion/QT03/cmake-build-debug/CMakeFiles/QT03.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/QT03.dir/depend

