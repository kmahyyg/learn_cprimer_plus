# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CLionProject\CprimePlus\102

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CLionProject\CprimePlus\102\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/exp102.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exp102.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exp102.dir/flags.make

CMakeFiles/exp102.dir/main.c.obj: CMakeFiles/exp102.dir/flags.make
CMakeFiles/exp102.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/exp102.dir/main.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\exp102.dir\main.c.obj   -c D:\CLionProject\CprimePlus\102\main.c

CMakeFiles/exp102.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/exp102.dir/main.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\CLionProject\CprimePlus\102\main.c > CMakeFiles\exp102.dir\main.c.i

CMakeFiles/exp102.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/exp102.dir/main.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\CLionProject\CprimePlus\102\main.c -o CMakeFiles\exp102.dir\main.c.s

CMakeFiles/exp102.dir/main.c.obj.requires:

.PHONY : CMakeFiles/exp102.dir/main.c.obj.requires

CMakeFiles/exp102.dir/main.c.obj.provides: CMakeFiles/exp102.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\exp102.dir\build.make CMakeFiles/exp102.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/exp102.dir/main.c.obj.provides

CMakeFiles/exp102.dir/main.c.obj.provides.build: CMakeFiles/exp102.dir/main.c.obj


# Object files for target exp102
exp102_OBJECTS = \
"CMakeFiles/exp102.dir/main.c.obj"

# External object files for target exp102
exp102_EXTERNAL_OBJECTS =

exp102.exe: CMakeFiles/exp102.dir/main.c.obj
exp102.exe: CMakeFiles/exp102.dir/build.make
exp102.exe: CMakeFiles/exp102.dir/linklibs.rsp
exp102.exe: CMakeFiles/exp102.dir/objects1.rsp
exp102.exe: CMakeFiles/exp102.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable exp102.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\exp102.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exp102.dir/build: exp102.exe

.PHONY : CMakeFiles/exp102.dir/build

CMakeFiles/exp102.dir/requires: CMakeFiles/exp102.dir/main.c.obj.requires

.PHONY : CMakeFiles/exp102.dir/requires

CMakeFiles/exp102.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\exp102.dir\cmake_clean.cmake
.PHONY : CMakeFiles/exp102.dir/clean

CMakeFiles/exp102.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLionProject\CprimePlus\102 D:\CLionProject\CprimePlus\102 D:\CLionProject\CprimePlus\102\cmake-build-debug D:\CLionProject\CprimePlus\102\cmake-build-debug D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles\exp102.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exp102.dir/depend
