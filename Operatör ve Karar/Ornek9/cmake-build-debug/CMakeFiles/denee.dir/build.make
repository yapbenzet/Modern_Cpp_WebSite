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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Nursena\CLionProjects\denee

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Nursena\CLionProjects\denee\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/denee.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/denee.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/denee.dir/flags.make

CMakeFiles/denee.dir/main.cpp.obj: CMakeFiles/denee.dir/flags.make
CMakeFiles/denee.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Nursena\CLionProjects\denee\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/denee.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\denee.dir\main.cpp.obj -c C:\Users\Nursena\CLionProjects\denee\main.cpp

CMakeFiles/denee.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/denee.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Nursena\CLionProjects\denee\main.cpp > CMakeFiles\denee.dir\main.cpp.i

CMakeFiles/denee.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/denee.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Nursena\CLionProjects\denee\main.cpp -o CMakeFiles\denee.dir\main.cpp.s

CMakeFiles/denee.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/denee.dir/main.cpp.obj.requires

CMakeFiles/denee.dir/main.cpp.obj.provides: CMakeFiles/denee.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\denee.dir\build.make CMakeFiles/denee.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/denee.dir/main.cpp.obj.provides

CMakeFiles/denee.dir/main.cpp.obj.provides.build: CMakeFiles/denee.dir/main.cpp.obj


# Object files for target denee
denee_OBJECTS = \
"CMakeFiles/denee.dir/main.cpp.obj"

# External object files for target denee
denee_EXTERNAL_OBJECTS =

denee.exe: CMakeFiles/denee.dir/main.cpp.obj
denee.exe: CMakeFiles/denee.dir/build.make
denee.exe: CMakeFiles/denee.dir/linklibs.rsp
denee.exe: CMakeFiles/denee.dir/objects1.rsp
denee.exe: CMakeFiles/denee.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Nursena\CLionProjects\denee\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable denee.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\denee.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/denee.dir/build: denee.exe

.PHONY : CMakeFiles/denee.dir/build

CMakeFiles/denee.dir/requires: CMakeFiles/denee.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/denee.dir/requires

CMakeFiles/denee.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\denee.dir\cmake_clean.cmake
.PHONY : CMakeFiles/denee.dir/clean

CMakeFiles/denee.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Nursena\CLionProjects\denee C:\Users\Nursena\CLionProjects\denee C:\Users\Nursena\CLionProjects\denee\cmake-build-debug C:\Users\Nursena\CLionProjects\denee\cmake-build-debug C:\Users\Nursena\CLionProjects\denee\cmake-build-debug\CMakeFiles\denee.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/denee.dir/depend

