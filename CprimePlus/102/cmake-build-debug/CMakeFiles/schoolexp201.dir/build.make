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
include CMakeFiles/schoolexp201.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/schoolexp201.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/schoolexp201.dir/flags.make

CMakeFiles/schoolexp201.dir/school-exp002-1.c.obj: CMakeFiles/schoolexp201.dir/flags.make
CMakeFiles/schoolexp201.dir/school-exp002-1.c.obj: ../school-exp002-1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/schoolexp201.dir/school-exp002-1.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\schoolexp201.dir\school-exp002-1.c.obj   -c D:\CLionProject\CprimePlus\102\school-exp002-1.c

CMakeFiles/schoolexp201.dir/school-exp002-1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/schoolexp201.dir/school-exp002-1.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\CLionProject\CprimePlus\102\school-exp002-1.c > CMakeFiles\schoolexp201.dir\school-exp002-1.c.i

CMakeFiles/schoolexp201.dir/school-exp002-1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/schoolexp201.dir/school-exp002-1.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\CLionProject\CprimePlus\102\school-exp002-1.c -o CMakeFiles\schoolexp201.dir\school-exp002-1.c.s

CMakeFiles/schoolexp201.dir/school-exp002-1.c.obj.requires:

.PHONY : CMakeFiles/schoolexp201.dir/school-exp002-1.c.obj.requires

CMakeFiles/schoolexp201.dir/school-exp002-1.c.obj.provides: CMakeFiles/schoolexp201.dir/school-exp002-1.c.obj.requires
	$(MAKE) -f CMakeFiles\schoolexp201.dir\build.make CMakeFiles/schoolexp201.dir/school-exp002-1.c.obj.provides.build
.PHONY : CMakeFiles/schoolexp201.dir/school-exp002-1.c.obj.provides

CMakeFiles/schoolexp201.dir/school-exp002-1.c.obj.provides.build: CMakeFiles/schoolexp201.dir/school-exp002-1.c.obj


# Object files for target schoolexp201
schoolexp201_OBJECTS = \
"CMakeFiles/schoolexp201.dir/school-exp002-1.c.obj"

# External object files for target schoolexp201
schoolexp201_EXTERNAL_OBJECTS =

schoolexp201.exe: CMakeFiles/schoolexp201.dir/school-exp002-1.c.obj
schoolexp201.exe: CMakeFiles/schoolexp201.dir/build.make
schoolexp201.exe: CMakeFiles/schoolexp201.dir/linklibs.rsp
schoolexp201.exe: CMakeFiles/schoolexp201.dir/objects1.rsp
schoolexp201.exe: CMakeFiles/schoolexp201.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable schoolexp201.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\schoolexp201.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/schoolexp201.dir/build: schoolexp201.exe

.PHONY : CMakeFiles/schoolexp201.dir/build

CMakeFiles/schoolexp201.dir/requires: CMakeFiles/schoolexp201.dir/school-exp002-1.c.obj.requires

.PHONY : CMakeFiles/schoolexp201.dir/requires

CMakeFiles/schoolexp201.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\schoolexp201.dir\cmake_clean.cmake
.PHONY : CMakeFiles/schoolexp201.dir/clean

CMakeFiles/schoolexp201.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLionProject\CprimePlus\102 D:\CLionProject\CprimePlus\102 D:\CLionProject\CprimePlus\102\cmake-build-debug D:\CLionProject\CprimePlus\102\cmake-build-debug D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles\schoolexp201.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/schoolexp201.dir/depend

