# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/kso00011134/GitProjects/Goorm/study/Q5-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kso00011134/GitProjects/Goorm/study/Q5-1/build

# Include any dependencies generated for this target.
include CMakeFiles/NightDuty.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NightDuty.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NightDuty.dir/flags.make

CMakeFiles/NightDuty.dir/CLinkedList.c.o: CMakeFiles/NightDuty.dir/flags.make
CMakeFiles/NightDuty.dir/CLinkedList.c.o: ../CLinkedList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kso00011134/GitProjects/Goorm/study/Q5-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/NightDuty.dir/CLinkedList.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NightDuty.dir/CLinkedList.c.o   -c /home/kso00011134/GitProjects/Goorm/study/Q5-1/CLinkedList.c

CMakeFiles/NightDuty.dir/CLinkedList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NightDuty.dir/CLinkedList.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kso00011134/GitProjects/Goorm/study/Q5-1/CLinkedList.c > CMakeFiles/NightDuty.dir/CLinkedList.c.i

CMakeFiles/NightDuty.dir/CLinkedList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NightDuty.dir/CLinkedList.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kso00011134/GitProjects/Goorm/study/Q5-1/CLinkedList.c -o CMakeFiles/NightDuty.dir/CLinkedList.c.s

CMakeFiles/NightDuty.dir/NightDutyMain.c.o: CMakeFiles/NightDuty.dir/flags.make
CMakeFiles/NightDuty.dir/NightDutyMain.c.o: ../NightDutyMain.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kso00011134/GitProjects/Goorm/study/Q5-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/NightDuty.dir/NightDutyMain.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NightDuty.dir/NightDutyMain.c.o   -c /home/kso00011134/GitProjects/Goorm/study/Q5-1/NightDutyMain.c

CMakeFiles/NightDuty.dir/NightDutyMain.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NightDuty.dir/NightDutyMain.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kso00011134/GitProjects/Goorm/study/Q5-1/NightDutyMain.c > CMakeFiles/NightDuty.dir/NightDutyMain.c.i

CMakeFiles/NightDuty.dir/NightDutyMain.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NightDuty.dir/NightDutyMain.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kso00011134/GitProjects/Goorm/study/Q5-1/NightDutyMain.c -o CMakeFiles/NightDuty.dir/NightDutyMain.c.s

# Object files for target NightDuty
NightDuty_OBJECTS = \
"CMakeFiles/NightDuty.dir/CLinkedList.c.o" \
"CMakeFiles/NightDuty.dir/NightDutyMain.c.o"

# External object files for target NightDuty
NightDuty_EXTERNAL_OBJECTS =

NightDuty: CMakeFiles/NightDuty.dir/CLinkedList.c.o
NightDuty: CMakeFiles/NightDuty.dir/NightDutyMain.c.o
NightDuty: CMakeFiles/NightDuty.dir/build.make
NightDuty: CMakeFiles/NightDuty.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kso00011134/GitProjects/Goorm/study/Q5-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable NightDuty"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NightDuty.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NightDuty.dir/build: NightDuty

.PHONY : CMakeFiles/NightDuty.dir/build

CMakeFiles/NightDuty.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NightDuty.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NightDuty.dir/clean

CMakeFiles/NightDuty.dir/depend:
	cd /home/kso00011134/GitProjects/Goorm/study/Q5-1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kso00011134/GitProjects/Goorm/study/Q5-1 /home/kso00011134/GitProjects/Goorm/study/Q5-1 /home/kso00011134/GitProjects/Goorm/study/Q5-1/build /home/kso00011134/GitProjects/Goorm/study/Q5-1/build /home/kso00011134/GitProjects/Goorm/study/Q5-1/build/CMakeFiles/NightDuty.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NightDuty.dir/depend
