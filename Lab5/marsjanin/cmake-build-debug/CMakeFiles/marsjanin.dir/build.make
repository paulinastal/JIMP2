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
CMAKE_SOURCE_DIR = C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/marsjanin.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/marsjanin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/marsjanin.dir/flags.make

CMakeFiles/marsjanin.dir/main.cpp.obj: CMakeFiles/marsjanin.dir/flags.make
CMakeFiles/marsjanin.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/marsjanin.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\marsjanin.dir\main.cpp.obj -c C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin\main.cpp

CMakeFiles/marsjanin.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/marsjanin.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin\main.cpp > CMakeFiles\marsjanin.dir\main.cpp.i

CMakeFiles/marsjanin.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/marsjanin.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin\main.cpp -o CMakeFiles\marsjanin.dir\main.cpp.s

CMakeFiles/marsjanin.dir/marsjanin.cpp.obj: CMakeFiles/marsjanin.dir/flags.make
CMakeFiles/marsjanin.dir/marsjanin.cpp.obj: ../marsjanin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/marsjanin.dir/marsjanin.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\marsjanin.dir\marsjanin.cpp.obj -c C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin\marsjanin.cpp

CMakeFiles/marsjanin.dir/marsjanin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/marsjanin.dir/marsjanin.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin\marsjanin.cpp > CMakeFiles\marsjanin.dir\marsjanin.cpp.i

CMakeFiles/marsjanin.dir/marsjanin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/marsjanin.dir/marsjanin.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin\marsjanin.cpp -o CMakeFiles\marsjanin.dir\marsjanin.cpp.s

# Object files for target marsjanin
marsjanin_OBJECTS = \
"CMakeFiles/marsjanin.dir/main.cpp.obj" \
"CMakeFiles/marsjanin.dir/marsjanin.cpp.obj"

# External object files for target marsjanin
marsjanin_EXTERNAL_OBJECTS =

marsjanin.exe: CMakeFiles/marsjanin.dir/main.cpp.obj
marsjanin.exe: CMakeFiles/marsjanin.dir/marsjanin.cpp.obj
marsjanin.exe: CMakeFiles/marsjanin.dir/build.make
marsjanin.exe: CMakeFiles/marsjanin.dir/linklibs.rsp
marsjanin.exe: CMakeFiles/marsjanin.dir/objects1.rsp
marsjanin.exe: CMakeFiles/marsjanin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable marsjanin.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\marsjanin.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/marsjanin.dir/build: marsjanin.exe

.PHONY : CMakeFiles/marsjanin.dir/build

CMakeFiles/marsjanin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\marsjanin.dir\cmake_clean.cmake
.PHONY : CMakeFiles/marsjanin.dir/clean

CMakeFiles/marsjanin.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin\cmake-build-debug C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin\cmake-build-debug C:\Users\Paulina\Desktop\na5zJIMP\Lab5\marsjanin\cmake-build-debug\CMakeFiles\marsjanin.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/marsjanin.dir/depend
