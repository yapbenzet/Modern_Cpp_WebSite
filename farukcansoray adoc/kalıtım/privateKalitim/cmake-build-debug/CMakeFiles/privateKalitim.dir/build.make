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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 172.3317.14\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 172.3317.14\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\faruk\CLionProjects\privateKalitim

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\faruk\CLionProjects\privateKalitim\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/privateKalitim.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/privateKalitim.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/privateKalitim.dir/flags.make

CMakeFiles/privateKalitim.dir/main.cpp.obj: CMakeFiles/privateKalitim.dir/flags.make
CMakeFiles/privateKalitim.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\faruk\CLionProjects\privateKalitim\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/privateKalitim.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\privateKalitim.dir\main.cpp.obj -c C:\Users\faruk\CLionProjects\privateKalitim\main.cpp

CMakeFiles/privateKalitim.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/privateKalitim.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\faruk\CLionProjects\privateKalitim\main.cpp > CMakeFiles\privateKalitim.dir\main.cpp.i

CMakeFiles/privateKalitim.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/privateKalitim.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\faruk\CLionProjects\privateKalitim\main.cpp -o CMakeFiles\privateKalitim.dir\main.cpp.s

CMakeFiles/privateKalitim.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/privateKalitim.dir/main.cpp.obj.requires

CMakeFiles/privateKalitim.dir/main.cpp.obj.provides: CMakeFiles/privateKalitim.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\privateKalitim.dir\build.make CMakeFiles/privateKalitim.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/privateKalitim.dir/main.cpp.obj.provides

CMakeFiles/privateKalitim.dir/main.cpp.obj.provides.build: CMakeFiles/privateKalitim.dir/main.cpp.obj


# Object files for target privateKalitim
privateKalitim_OBJECTS = \
"CMakeFiles/privateKalitim.dir/main.cpp.obj"

# External object files for target privateKalitim
privateKalitim_EXTERNAL_OBJECTS =

privateKalitim.exe: CMakeFiles/privateKalitim.dir/main.cpp.obj
privateKalitim.exe: CMakeFiles/privateKalitim.dir/build.make
privateKalitim.exe: CMakeFiles/privateKalitim.dir/linklibs.rsp
privateKalitim.exe: CMakeFiles/privateKalitim.dir/objects1.rsp
privateKalitim.exe: CMakeFiles/privateKalitim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\faruk\CLionProjects\privateKalitim\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable privateKalitim.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\privateKalitim.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/privateKalitim.dir/build: privateKalitim.exe

.PHONY : CMakeFiles/privateKalitim.dir/build

CMakeFiles/privateKalitim.dir/requires: CMakeFiles/privateKalitim.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/privateKalitim.dir/requires

CMakeFiles/privateKalitim.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\privateKalitim.dir\cmake_clean.cmake
.PHONY : CMakeFiles/privateKalitim.dir/clean

CMakeFiles/privateKalitim.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\faruk\CLionProjects\privateKalitim C:\Users\faruk\CLionProjects\privateKalitim C:\Users\faruk\CLionProjects\privateKalitim\cmake-build-debug C:\Users\faruk\CLionProjects\privateKalitim\cmake-build-debug C:\Users\faruk\CLionProjects\privateKalitim\cmake-build-debug\CMakeFiles\privateKalitim.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/privateKalitim.dir/depend

