# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\msys64\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\msys64\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\18797\Desktop\game\code\game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\18797\Desktop\game\code\game\build

# Include any dependencies generated for this target.
include CMakeFiles/MyGame.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyGame.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyGame.dir/flags.make

CMakeFiles/MyGame.dir/src/Map.cpp.obj: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/src/Map.cpp.obj: CMakeFiles/MyGame.dir/includes_CXX.rsp
CMakeFiles/MyGame.dir/src/Map.cpp.obj: C:/Users/18797/Desktop/game/code/game/src/Map.cpp
CMakeFiles/MyGame.dir/src/Map.cpp.obj: CMakeFiles/MyGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\18797\Desktop\game\code\game\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyGame.dir/src/Map.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyGame.dir/src/Map.cpp.obj -MF CMakeFiles\MyGame.dir\src\Map.cpp.obj.d -o CMakeFiles\MyGame.dir\src\Map.cpp.obj -c C:\Users\18797\Desktop\game\code\game\src\Map.cpp

CMakeFiles/MyGame.dir/src/Map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyGame.dir/src/Map.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\18797\Desktop\game\code\game\src\Map.cpp > CMakeFiles\MyGame.dir\src\Map.cpp.i

CMakeFiles/MyGame.dir/src/Map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyGame.dir/src/Map.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\18797\Desktop\game\code\game\src\Map.cpp -o CMakeFiles\MyGame.dir\src\Map.cpp.s

CMakeFiles/MyGame.dir/src/Player.cpp.obj: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/src/Player.cpp.obj: CMakeFiles/MyGame.dir/includes_CXX.rsp
CMakeFiles/MyGame.dir/src/Player.cpp.obj: C:/Users/18797/Desktop/game/code/game/src/Player.cpp
CMakeFiles/MyGame.dir/src/Player.cpp.obj: CMakeFiles/MyGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\18797\Desktop\game\code\game\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MyGame.dir/src/Player.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyGame.dir/src/Player.cpp.obj -MF CMakeFiles\MyGame.dir\src\Player.cpp.obj.d -o CMakeFiles\MyGame.dir\src\Player.cpp.obj -c C:\Users\18797\Desktop\game\code\game\src\Player.cpp

CMakeFiles/MyGame.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyGame.dir/src/Player.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\18797\Desktop\game\code\game\src\Player.cpp > CMakeFiles\MyGame.dir\src\Player.cpp.i

CMakeFiles/MyGame.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyGame.dir/src/Player.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\18797\Desktop\game\code\game\src\Player.cpp -o CMakeFiles\MyGame.dir\src\Player.cpp.s

CMakeFiles/MyGame.dir/src/main.cpp.obj: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/src/main.cpp.obj: CMakeFiles/MyGame.dir/includes_CXX.rsp
CMakeFiles/MyGame.dir/src/main.cpp.obj: C:/Users/18797/Desktop/game/code/game/src/main.cpp
CMakeFiles/MyGame.dir/src/main.cpp.obj: CMakeFiles/MyGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\18797\Desktop\game\code\game\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MyGame.dir/src/main.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyGame.dir/src/main.cpp.obj -MF CMakeFiles\MyGame.dir\src\main.cpp.obj.d -o CMakeFiles\MyGame.dir\src\main.cpp.obj -c C:\Users\18797\Desktop\game\code\game\src\main.cpp

CMakeFiles/MyGame.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyGame.dir/src/main.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\18797\Desktop\game\code\game\src\main.cpp > CMakeFiles\MyGame.dir\src\main.cpp.i

CMakeFiles/MyGame.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyGame.dir/src/main.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\18797\Desktop\game\code\game\src\main.cpp -o CMakeFiles\MyGame.dir\src\main.cpp.s

CMakeFiles/MyGame.dir/src/skills/Skill.cpp.obj: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/src/skills/Skill.cpp.obj: CMakeFiles/MyGame.dir/includes_CXX.rsp
CMakeFiles/MyGame.dir/src/skills/Skill.cpp.obj: C:/Users/18797/Desktop/game/code/game/src/skills/Skill.cpp
CMakeFiles/MyGame.dir/src/skills/Skill.cpp.obj: CMakeFiles/MyGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\18797\Desktop\game\code\game\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/MyGame.dir/src/skills/Skill.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyGame.dir/src/skills/Skill.cpp.obj -MF CMakeFiles\MyGame.dir\src\skills\Skill.cpp.obj.d -o CMakeFiles\MyGame.dir\src\skills\Skill.cpp.obj -c C:\Users\18797\Desktop\game\code\game\src\skills\Skill.cpp

CMakeFiles/MyGame.dir/src/skills/Skill.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyGame.dir/src/skills/Skill.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\18797\Desktop\game\code\game\src\skills\Skill.cpp > CMakeFiles\MyGame.dir\src\skills\Skill.cpp.i

CMakeFiles/MyGame.dir/src/skills/Skill.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyGame.dir/src/skills/Skill.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\18797\Desktop\game\code\game\src\skills\Skill.cpp -o CMakeFiles\MyGame.dir\src\skills\Skill.cpp.s

# Object files for target MyGame
MyGame_OBJECTS = \
"CMakeFiles/MyGame.dir/src/Map.cpp.obj" \
"CMakeFiles/MyGame.dir/src/Player.cpp.obj" \
"CMakeFiles/MyGame.dir/src/main.cpp.obj" \
"CMakeFiles/MyGame.dir/src/skills/Skill.cpp.obj"

# External object files for target MyGame
MyGame_EXTERNAL_OBJECTS =

MyGame.exe: CMakeFiles/MyGame.dir/src/Map.cpp.obj
MyGame.exe: CMakeFiles/MyGame.dir/src/Player.cpp.obj
MyGame.exe: CMakeFiles/MyGame.dir/src/main.cpp.obj
MyGame.exe: CMakeFiles/MyGame.dir/src/skills/Skill.cpp.obj
MyGame.exe: CMakeFiles/MyGame.dir/build.make
MyGame.exe: C:/msys64/mingw64/lib/libraylib.dll.a
MyGame.exe: CMakeFiles/MyGame.dir/linkLibs.rsp
MyGame.exe: CMakeFiles/MyGame.dir/objects1.rsp
MyGame.exe: CMakeFiles/MyGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\18797\Desktop\game\code\game\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable MyGame.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MyGame.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyGame.dir/build: MyGame.exe
.PHONY : CMakeFiles/MyGame.dir/build

CMakeFiles/MyGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MyGame.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MyGame.dir/clean

CMakeFiles/MyGame.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\18797\Desktop\game\code\game C:\Users\18797\Desktop\game\code\game C:\Users\18797\Desktop\game\code\game\build C:\Users\18797\Desktop\game\code\game\build C:\Users\18797\Desktop\game\code\game\build\CMakeFiles\MyGame.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/MyGame.dir/depend
