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
include CMakeFiles/example206.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/example206.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/example206.dir/flags.make

CMakeFiles/example206.dir/two_func.c.obj: CMakeFiles/example206.dir/flags.make
CMakeFiles/example206.dir/two_func.c.obj: ../two_func.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/example206.dir/two_func.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\example206.dir\two_func.c.obj   -c D:\CLionProject\CprimePlus\102\two_func.c

CMakeFiles/example206.dir/two_func.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/example206.dir/two_func.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\CLionProject\CprimePlus\102\two_func.c > CMakeFiles\example206.dir\two_func.c.i

CMakeFiles/example206.dir/two_func.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/example206.dir/two_func.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\CLionProject\CprimePlus\102\two_func.c -o CMakeFiles\example206.dir\two_func.c.s

CMakeFiles/example206.dir/two_func.c.obj.requires:

.PHONY : CMakeFiles/example206.dir/two_func.c.obj.requires

CMakeFiles/example206.dir/two_func.c.obj.provides: CMakeFiles/example206.dir/two_func.c.obj.requires
	$(MAKE) -f CMakeFiles\example206.dir\build.make CMakeFiles/example206.dir/two_func.c.obj.provides.build
.PHONY : CMakeFiles/example206.dir/two_func.c.obj.provides

CMakeFiles/example206.dir/two_func.c.obj.provides.build: CMakeFiles/example206.dir/two_func.c.obj


# Object files for target example206
example206_OBJECTS = \
"CMakeFiles/example206.dir/two_func.c.obj"

# External object files for target example206
example206_EXTERNAL_OBJECTS =

example206.exe: CMakeFiles/example206.dir/two_func.c.obj
example206.exe: CMakeFiles/example206.dir/build.make
example206.exe: CMakeFiles/example206.dir/linklibs.rsp
example206.exe: CMakeFiles/example206.dir/objects1.rsp
example206.exe: CMakeFiles/example206.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable example206.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\example206.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/example206.dir/build: example206.exe

.PHONY : CMakeFiles/example206.dir/build

CMakeFiles/example206.dir/requires: CMakeFiles/example206.dir/two_func.c.obj.requires

.PHONY : CMakeFiles/example206.dir/requires

CMakeFiles/example206.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\example206.dir\cmake_clean.cmake
.PHONY : CMakeFiles/example206.dir/clean

CMakeFiles/example206.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLionProject\CprimePlus\102 D:\CLionProject\CprimePlus\102 D:\CLionProject\CprimePlus\102\cmake-build-debug D:\CLionProject\CprimePlus\102\cmake-build-debug D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles\example206.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/example206.dir/depend
