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
include CMakeFiles/exp342.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exp342.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exp342.dir/flags.make

CMakeFiles/exp342.dir/toobig.c.obj: CMakeFiles/exp342.dir/flags.make
CMakeFiles/exp342.dir/toobig.c.obj: ../toobig.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/exp342.dir/toobig.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\exp342.dir\toobig.c.obj   -c D:\CLionProject\CprimePlus\102\toobig.c

CMakeFiles/exp342.dir/toobig.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/exp342.dir/toobig.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\CLionProject\CprimePlus\102\toobig.c > CMakeFiles\exp342.dir\toobig.c.i

CMakeFiles/exp342.dir/toobig.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/exp342.dir/toobig.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\CLionProject\CprimePlus\102\toobig.c -o CMakeFiles\exp342.dir\toobig.c.s

CMakeFiles/exp342.dir/toobig.c.obj.requires:

.PHONY : CMakeFiles/exp342.dir/toobig.c.obj.requires

CMakeFiles/exp342.dir/toobig.c.obj.provides: CMakeFiles/exp342.dir/toobig.c.obj.requires
	$(MAKE) -f CMakeFiles\exp342.dir\build.make CMakeFiles/exp342.dir/toobig.c.obj.provides.build
.PHONY : CMakeFiles/exp342.dir/toobig.c.obj.provides

CMakeFiles/exp342.dir/toobig.c.obj.provides.build: CMakeFiles/exp342.dir/toobig.c.obj


# Object files for target exp342
exp342_OBJECTS = \
"CMakeFiles/exp342.dir/toobig.c.obj"

# External object files for target exp342
exp342_EXTERNAL_OBJECTS =

exp342.exe: CMakeFiles/exp342.dir/toobig.c.obj
exp342.exe: CMakeFiles/exp342.dir/build.make
exp342.exe: CMakeFiles/exp342.dir/linklibs.rsp
exp342.exe: CMakeFiles/exp342.dir/objects1.rsp
exp342.exe: CMakeFiles/exp342.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable exp342.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\exp342.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exp342.dir/build: exp342.exe

.PHONY : CMakeFiles/exp342.dir/build

CMakeFiles/exp342.dir/requires: CMakeFiles/exp342.dir/toobig.c.obj.requires

.PHONY : CMakeFiles/exp342.dir/requires

CMakeFiles/exp342.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\exp342.dir\cmake_clean.cmake
.PHONY : CMakeFiles/exp342.dir/clean

CMakeFiles/exp342.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLionProject\CprimePlus\102 D:\CLionProject\CprimePlus\102 D:\CLionProject\CprimePlus\102\cmake-build-debug D:\CLionProject\CprimePlus\102\cmake-build-debug D:\CLionProject\CprimePlus\102\cmake-build-debug\CMakeFiles\exp342.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exp342.dir/depend
