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
include CMakeFiles/exp205.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exp205.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exp205.dir/flags.make

CMakeFiles/exp205.dir/fathm_ft.c.obj: CMakeFiles/exp205.dir/flags.make
CMakeFiles/exp205.dir/fathm_ft.c.obj: ../fathm_ft.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/exp205.dir/fathm_ft.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\exp205.dir\fathm_ft.c.obj   -c D:\CLionProject\CprimePlus\102\fathm_ft.c

CMakeFiles/exp205.dir/fathm_ft.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/exp205.dir/fathm_ft.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\CLionProject\CprimePlus\102\fathm_ft.c > CMakeFiles\exp205.dir\fathm_ft.c.i

CMakeFiles/exp205.dir/fathm_ft.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/exp205.dir/fathm_ft.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\CLionProject\CprimePlus\102\fathm_ft.c -o CMakeFiles\exp205.dir\fathm_ft.c.s

CMakeFiles/exp205.dir/fathm_ft.c.obj.requires:

.PHONY : CMakeFiles/exp205.dir/fathm_ft.c.obj.requires

CMakeFiles/exp205.dir/fathm_ft.c.obj.provides: CMakeFiles/exp205.dir/fathm_ft.c.obj.requires
	$(MAKE) -f CMakeFiles\exp205.dir\build.make CMakeFiles/exp205.dir/fathm_ft.c.obj.provides.build
.PHONY : CMakeFiles/exp205.dir/fathm_ft.c.obj.provides

CMakeFiles/exp205.dir/fathm_ft.c.obj.provides.build: CMakeFiles/exp205.dir/fathm_ft.c.obj


# Object files for target exp205
exp205_OBJECTS = \
"CMakeFiles/exp205.dir/fathm_ft.c.obj"

# External object files for target exp205
exp205_EXTERNAL_OBJECTS =

exp205.exe: CMakeFiles/exp205.dir/fathm_ft.c.obj
exp205.exe: CMakeFiles/exp205.dir/build.make
exp205.exe: CMakeFiles/exp205.dir/linklibs.rsp
exp205.exe: CMakeFiles/exp205.dir/objects1.rsp
exp205.exe: CMakeFiles/exp205.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable exp205.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\exp205.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exp205.dir/build: exp205.exe

.PHONY : CMakeFiles/exp205.dir/build

CMakeFiles/exp205.dir/requires: CMakeFiles/exp205.dir/fathm_ft.c.obj.requires

.PHONY : CMakeFiles/exp205.dir/requires

CMakeFiles/exp205.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\exp205.dir\cmake_clean.cmake
.PHONY : CMakeFiles/exp205.dir/clean

CMakeFiles/exp205.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLionProject\CprimePlus\102 D:\CLionProject\CprimePlus\102 D:\CLionProject\CprimePlus\102\cmake-build-debug D:\CLionProject\CprimePlus\102\cmake-build-debug D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles\exp205.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exp205.dir/depend
