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
include CMakeFiles/hworld.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hworld.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hworld.dir/flags.make

CMakeFiles/hworld.dir/helloworld.c.obj: CMakeFiles/hworld.dir/flags.make
CMakeFiles/hworld.dir/helloworld.c.obj: ../helloworld.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/hworld.dir/helloworld.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\hworld.dir\helloworld.c.obj   -c D:\CLionProject\CprimePlus\102\helloworld.c

CMakeFiles/hworld.dir/helloworld.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hworld.dir/helloworld.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\CLionProject\CprimePlus\102\helloworld.c > CMakeFiles\hworld.dir\helloworld.c.i

CMakeFiles/hworld.dir/helloworld.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hworld.dir/helloworld.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\CLionProject\CprimePlus\102\helloworld.c -o CMakeFiles\hworld.dir\helloworld.c.s

CMakeFiles/hworld.dir/helloworld.c.obj.requires:

.PHONY : CMakeFiles/hworld.dir/helloworld.c.obj.requires

CMakeFiles/hworld.dir/helloworld.c.obj.provides: CMakeFiles/hworld.dir/helloworld.c.obj.requires
	$(MAKE) -f CMakeFiles\hworld.dir\build.make CMakeFiles/hworld.dir/helloworld.c.obj.provides.build
.PHONY : CMakeFiles/hworld.dir/helloworld.c.obj.provides

CMakeFiles/hworld.dir/helloworld.c.obj.provides.build: CMakeFiles/hworld.dir/helloworld.c.obj


# Object files for target hworld
hworld_OBJECTS = \
"CMakeFiles/hworld.dir/helloworld.c.obj"

# External object files for target hworld
hworld_EXTERNAL_OBJECTS =

hworld.exe: CMakeFiles/hworld.dir/helloworld.c.obj
hworld.exe: CMakeFiles/hworld.dir/build.make
hworld.exe: CMakeFiles/hworld.dir/linklibs.rsp
hworld.exe: CMakeFiles/hworld.dir/objects1.rsp
hworld.exe: CMakeFiles/hworld.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable hworld.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hworld.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hworld.dir/build: hworld.exe

.PHONY : CMakeFiles/hworld.dir/build

CMakeFiles/hworld.dir/requires: CMakeFiles/hworld.dir/helloworld.c.obj.requires

.PHONY : CMakeFiles/hworld.dir/requires

CMakeFiles/hworld.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\hworld.dir\cmake_clean.cmake
.PHONY : CMakeFiles/hworld.dir/clean

CMakeFiles/hworld.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLionProject\CprimePlus\102 D:\CLionProject\CprimePlus\102 D:\CLionProject\CprimePlus\102\cmake-build-debug D:\CLionProject\CprimePlus\102\cmake-build-debug D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles\hworld.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hworld.dir/depend

