# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "C:\Users\Paulina\AppData\Local\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Paulina\AppData\Local\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Paulina\Desktop\array

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Paulina\Desktop\array\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/array.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/array.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/array.dir/flags.make

CMakeFiles/array.dir/main.cpp.obj: CMakeFiles/array.dir/flags.make
CMakeFiles/array.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Paulina\Desktop\array\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/array.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\array.dir\main.cpp.obj -c C:\Users\Paulina\Desktop\array\main.cpp

CMakeFiles/array.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/array.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Paulina\Desktop\array\main.cpp > CMakeFiles\array.dir\main.cpp.i

CMakeFiles/array.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/array.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Paulina\Desktop\array\main.cpp -o CMakeFiles\array.dir\main.cpp.s

# Object files for target array
array_OBJECTS = \
"CMakeFiles/array.dir/main.cpp.obj"

# External object files for target array
array_EXTERNAL_OBJECTS =

array.exe: CMakeFiles/array.dir/main.cpp.obj
array.exe: CMakeFiles/array.dir/build.make
array.exe: CMakeFiles/array.dir/linklibs.rsp
array.exe: CMakeFiles/array.dir/objects1.rsp
array.exe: CMakeFiles/array.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Paulina\Desktop\array\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable array.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\array.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/array.dir/build: array.exe

.PHONY : CMakeFiles/array.dir/build

CMakeFiles/array.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\array.dir\cmake_clean.cmake
.PHONY : CMakeFiles/array.dir/clean

CMakeFiles/array.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Paulina\Desktop\array C:\Users\Paulina\Desktop\array C:\Users\Paulina\Desktop\array\cmake-build-debug C:\Users\Paulina\Desktop\array\cmake-build-debug C:\Users\Paulina\Desktop\array\cmake-build-debug\CMakeFiles\array.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/array.dir/depend

