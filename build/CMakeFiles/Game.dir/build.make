# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.30.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.30.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jannis/Desktop/GameProjectV2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jannis/Desktop/GameProjectV2/build

# Include any dependencies generated for this target.
include CMakeFiles/Game.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Game.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Game.dir/flags.make

CMakeFiles/Game.dir/src/main.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/main.cpp.o: /Users/jannis/Desktop/GameProjectV2/src/main.cpp
CMakeFiles/Game.dir/src/main.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/GameProjectV2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Game.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/main.cpp.o -MF CMakeFiles/Game.dir/src/main.cpp.o.d -o CMakeFiles/Game.dir/src/main.cpp.o -c /Users/jannis/Desktop/GameProjectV2/src/main.cpp

CMakeFiles/Game.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/GameProjectV2/src/main.cpp > CMakeFiles/Game.dir/src/main.cpp.i

CMakeFiles/Game.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/GameProjectV2/src/main.cpp -o CMakeFiles/Game.dir/src/main.cpp.s

CMakeFiles/Game.dir/src/Game/Components/Stats.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Game/Components/Stats.cpp.o: /Users/jannis/Desktop/GameProjectV2/src/Game/Components/Stats.cpp
CMakeFiles/Game.dir/src/Game/Components/Stats.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/GameProjectV2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Game.dir/src/Game/Components/Stats.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/Game/Components/Stats.cpp.o -MF CMakeFiles/Game.dir/src/Game/Components/Stats.cpp.o.d -o CMakeFiles/Game.dir/src/Game/Components/Stats.cpp.o -c /Users/jannis/Desktop/GameProjectV2/src/Game/Components/Stats.cpp

CMakeFiles/Game.dir/src/Game/Components/Stats.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Game/Components/Stats.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/GameProjectV2/src/Game/Components/Stats.cpp > CMakeFiles/Game.dir/src/Game/Components/Stats.cpp.i

CMakeFiles/Game.dir/src/Game/Components/Stats.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Game/Components/Stats.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/GameProjectV2/src/Game/Components/Stats.cpp -o CMakeFiles/Game.dir/src/Game/Components/Stats.cpp.s

CMakeFiles/Game.dir/src/Game/Core/Game.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Game/Core/Game.cpp.o: /Users/jannis/Desktop/GameProjectV2/src/Game/Core/Game.cpp
CMakeFiles/Game.dir/src/Game/Core/Game.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/GameProjectV2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Game.dir/src/Game/Core/Game.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/Game/Core/Game.cpp.o -MF CMakeFiles/Game.dir/src/Game/Core/Game.cpp.o.d -o CMakeFiles/Game.dir/src/Game/Core/Game.cpp.o -c /Users/jannis/Desktop/GameProjectV2/src/Game/Core/Game.cpp

CMakeFiles/Game.dir/src/Game/Core/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Game/Core/Game.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/GameProjectV2/src/Game/Core/Game.cpp > CMakeFiles/Game.dir/src/Game/Core/Game.cpp.i

CMakeFiles/Game.dir/src/Game/Core/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Game/Core/Game.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/GameProjectV2/src/Game/Core/Game.cpp -o CMakeFiles/Game.dir/src/Game/Core/Game.cpp.s

CMakeFiles/Game.dir/src/Game/Entities/Character.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Game/Entities/Character.cpp.o: /Users/jannis/Desktop/GameProjectV2/src/Game/Entities/Character.cpp
CMakeFiles/Game.dir/src/Game/Entities/Character.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/GameProjectV2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Game.dir/src/Game/Entities/Character.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/Game/Entities/Character.cpp.o -MF CMakeFiles/Game.dir/src/Game/Entities/Character.cpp.o.d -o CMakeFiles/Game.dir/src/Game/Entities/Character.cpp.o -c /Users/jannis/Desktop/GameProjectV2/src/Game/Entities/Character.cpp

CMakeFiles/Game.dir/src/Game/Entities/Character.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Game/Entities/Character.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/GameProjectV2/src/Game/Entities/Character.cpp > CMakeFiles/Game.dir/src/Game/Entities/Character.cpp.i

CMakeFiles/Game.dir/src/Game/Entities/Character.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Game/Entities/Character.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/GameProjectV2/src/Game/Entities/Character.cpp -o CMakeFiles/Game.dir/src/Game/Entities/Character.cpp.s

CMakeFiles/Game.dir/src/Game/Managers/CharacterManager.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Game/Managers/CharacterManager.cpp.o: /Users/jannis/Desktop/GameProjectV2/src/Game/Managers/CharacterManager.cpp
CMakeFiles/Game.dir/src/Game/Managers/CharacterManager.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/GameProjectV2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Game.dir/src/Game/Managers/CharacterManager.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/Game/Managers/CharacterManager.cpp.o -MF CMakeFiles/Game.dir/src/Game/Managers/CharacterManager.cpp.o.d -o CMakeFiles/Game.dir/src/Game/Managers/CharacterManager.cpp.o -c /Users/jannis/Desktop/GameProjectV2/src/Game/Managers/CharacterManager.cpp

CMakeFiles/Game.dir/src/Game/Managers/CharacterManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Game/Managers/CharacterManager.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/GameProjectV2/src/Game/Managers/CharacterManager.cpp > CMakeFiles/Game.dir/src/Game/Managers/CharacterManager.cpp.i

CMakeFiles/Game.dir/src/Game/Managers/CharacterManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Game/Managers/CharacterManager.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/GameProjectV2/src/Game/Managers/CharacterManager.cpp -o CMakeFiles/Game.dir/src/Game/Managers/CharacterManager.cpp.s

CMakeFiles/Game.dir/src/Game/Managers/StateManager.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Game/Managers/StateManager.cpp.o: /Users/jannis/Desktop/GameProjectV2/src/Game/Managers/StateManager.cpp
CMakeFiles/Game.dir/src/Game/Managers/StateManager.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/GameProjectV2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Game.dir/src/Game/Managers/StateManager.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/Game/Managers/StateManager.cpp.o -MF CMakeFiles/Game.dir/src/Game/Managers/StateManager.cpp.o.d -o CMakeFiles/Game.dir/src/Game/Managers/StateManager.cpp.o -c /Users/jannis/Desktop/GameProjectV2/src/Game/Managers/StateManager.cpp

CMakeFiles/Game.dir/src/Game/Managers/StateManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Game/Managers/StateManager.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/GameProjectV2/src/Game/Managers/StateManager.cpp > CMakeFiles/Game.dir/src/Game/Managers/StateManager.cpp.i

CMakeFiles/Game.dir/src/Game/Managers/StateManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Game/Managers/StateManager.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/GameProjectV2/src/Game/Managers/StateManager.cpp -o CMakeFiles/Game.dir/src/Game/Managers/StateManager.cpp.s

CMakeFiles/Game.dir/src/Game/States/CharacterCreationState.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Game/States/CharacterCreationState.cpp.o: /Users/jannis/Desktop/GameProjectV2/src/Game/States/CharacterCreationState.cpp
CMakeFiles/Game.dir/src/Game/States/CharacterCreationState.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/GameProjectV2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Game.dir/src/Game/States/CharacterCreationState.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/Game/States/CharacterCreationState.cpp.o -MF CMakeFiles/Game.dir/src/Game/States/CharacterCreationState.cpp.o.d -o CMakeFiles/Game.dir/src/Game/States/CharacterCreationState.cpp.o -c /Users/jannis/Desktop/GameProjectV2/src/Game/States/CharacterCreationState.cpp

CMakeFiles/Game.dir/src/Game/States/CharacterCreationState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Game/States/CharacterCreationState.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/GameProjectV2/src/Game/States/CharacterCreationState.cpp > CMakeFiles/Game.dir/src/Game/States/CharacterCreationState.cpp.i

CMakeFiles/Game.dir/src/Game/States/CharacterCreationState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Game/States/CharacterCreationState.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/GameProjectV2/src/Game/States/CharacterCreationState.cpp -o CMakeFiles/Game.dir/src/Game/States/CharacterCreationState.cpp.s

CMakeFiles/Game.dir/src/Game/States/CharacterLoadingState.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Game/States/CharacterLoadingState.cpp.o: /Users/jannis/Desktop/GameProjectV2/src/Game/States/CharacterLoadingState.cpp
CMakeFiles/Game.dir/src/Game/States/CharacterLoadingState.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/GameProjectV2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Game.dir/src/Game/States/CharacterLoadingState.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/Game/States/CharacterLoadingState.cpp.o -MF CMakeFiles/Game.dir/src/Game/States/CharacterLoadingState.cpp.o.d -o CMakeFiles/Game.dir/src/Game/States/CharacterLoadingState.cpp.o -c /Users/jannis/Desktop/GameProjectV2/src/Game/States/CharacterLoadingState.cpp

CMakeFiles/Game.dir/src/Game/States/CharacterLoadingState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Game/States/CharacterLoadingState.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/GameProjectV2/src/Game/States/CharacterLoadingState.cpp > CMakeFiles/Game.dir/src/Game/States/CharacterLoadingState.cpp.i

CMakeFiles/Game.dir/src/Game/States/CharacterLoadingState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Game/States/CharacterLoadingState.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/GameProjectV2/src/Game/States/CharacterLoadingState.cpp -o CMakeFiles/Game.dir/src/Game/States/CharacterLoadingState.cpp.s

CMakeFiles/Game.dir/src/Game/States/CharacterMenuState.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Game/States/CharacterMenuState.cpp.o: /Users/jannis/Desktop/GameProjectV2/src/Game/States/CharacterMenuState.cpp
CMakeFiles/Game.dir/src/Game/States/CharacterMenuState.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/GameProjectV2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Game.dir/src/Game/States/CharacterMenuState.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/Game/States/CharacterMenuState.cpp.o -MF CMakeFiles/Game.dir/src/Game/States/CharacterMenuState.cpp.o.d -o CMakeFiles/Game.dir/src/Game/States/CharacterMenuState.cpp.o -c /Users/jannis/Desktop/GameProjectV2/src/Game/States/CharacterMenuState.cpp

CMakeFiles/Game.dir/src/Game/States/CharacterMenuState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Game/States/CharacterMenuState.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/GameProjectV2/src/Game/States/CharacterMenuState.cpp > CMakeFiles/Game.dir/src/Game/States/CharacterMenuState.cpp.i

CMakeFiles/Game.dir/src/Game/States/CharacterMenuState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Game/States/CharacterMenuState.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/GameProjectV2/src/Game/States/CharacterMenuState.cpp -o CMakeFiles/Game.dir/src/Game/States/CharacterMenuState.cpp.s

CMakeFiles/Game.dir/src/Game/States/ExitState.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Game/States/ExitState.cpp.o: /Users/jannis/Desktop/GameProjectV2/src/Game/States/ExitState.cpp
CMakeFiles/Game.dir/src/Game/States/ExitState.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/GameProjectV2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Game.dir/src/Game/States/ExitState.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/Game/States/ExitState.cpp.o -MF CMakeFiles/Game.dir/src/Game/States/ExitState.cpp.o.d -o CMakeFiles/Game.dir/src/Game/States/ExitState.cpp.o -c /Users/jannis/Desktop/GameProjectV2/src/Game/States/ExitState.cpp

CMakeFiles/Game.dir/src/Game/States/ExitState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Game/States/ExitState.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/GameProjectV2/src/Game/States/ExitState.cpp > CMakeFiles/Game.dir/src/Game/States/ExitState.cpp.i

CMakeFiles/Game.dir/src/Game/States/ExitState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Game/States/ExitState.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/GameProjectV2/src/Game/States/ExitState.cpp -o CMakeFiles/Game.dir/src/Game/States/ExitState.cpp.s

CMakeFiles/Game.dir/src/Game/States/InGameState.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Game/States/InGameState.cpp.o: /Users/jannis/Desktop/GameProjectV2/src/Game/States/InGameState.cpp
CMakeFiles/Game.dir/src/Game/States/InGameState.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/GameProjectV2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Game.dir/src/Game/States/InGameState.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/Game/States/InGameState.cpp.o -MF CMakeFiles/Game.dir/src/Game/States/InGameState.cpp.o.d -o CMakeFiles/Game.dir/src/Game/States/InGameState.cpp.o -c /Users/jannis/Desktop/GameProjectV2/src/Game/States/InGameState.cpp

CMakeFiles/Game.dir/src/Game/States/InGameState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Game/States/InGameState.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/GameProjectV2/src/Game/States/InGameState.cpp > CMakeFiles/Game.dir/src/Game/States/InGameState.cpp.i

CMakeFiles/Game.dir/src/Game/States/InGameState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Game/States/InGameState.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/GameProjectV2/src/Game/States/InGameState.cpp -o CMakeFiles/Game.dir/src/Game/States/InGameState.cpp.s

CMakeFiles/Game.dir/src/Game/States/MainMenuState.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Game/States/MainMenuState.cpp.o: /Users/jannis/Desktop/GameProjectV2/src/Game/States/MainMenuState.cpp
CMakeFiles/Game.dir/src/Game/States/MainMenuState.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/GameProjectV2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Game.dir/src/Game/States/MainMenuState.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/Game/States/MainMenuState.cpp.o -MF CMakeFiles/Game.dir/src/Game/States/MainMenuState.cpp.o.d -o CMakeFiles/Game.dir/src/Game/States/MainMenuState.cpp.o -c /Users/jannis/Desktop/GameProjectV2/src/Game/States/MainMenuState.cpp

CMakeFiles/Game.dir/src/Game/States/MainMenuState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Game/States/MainMenuState.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/GameProjectV2/src/Game/States/MainMenuState.cpp > CMakeFiles/Game.dir/src/Game/States/MainMenuState.cpp.i

CMakeFiles/Game.dir/src/Game/States/MainMenuState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Game/States/MainMenuState.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/GameProjectV2/src/Game/States/MainMenuState.cpp -o CMakeFiles/Game.dir/src/Game/States/MainMenuState.cpp.s

CMakeFiles/Game.dir/src/Game/States/State.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Game/States/State.cpp.o: /Users/jannis/Desktop/GameProjectV2/src/Game/States/State.cpp
CMakeFiles/Game.dir/src/Game/States/State.cpp.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jannis/Desktop/GameProjectV2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Game.dir/src/Game/States/State.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/src/Game/States/State.cpp.o -MF CMakeFiles/Game.dir/src/Game/States/State.cpp.o.d -o CMakeFiles/Game.dir/src/Game/States/State.cpp.o -c /Users/jannis/Desktop/GameProjectV2/src/Game/States/State.cpp

CMakeFiles/Game.dir/src/Game/States/State.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Game/States/State.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jannis/Desktop/GameProjectV2/src/Game/States/State.cpp > CMakeFiles/Game.dir/src/Game/States/State.cpp.i

CMakeFiles/Game.dir/src/Game/States/State.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Game/States/State.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jannis/Desktop/GameProjectV2/src/Game/States/State.cpp -o CMakeFiles/Game.dir/src/Game/States/State.cpp.s

# Object files for target Game
Game_OBJECTS = \
"CMakeFiles/Game.dir/src/main.cpp.o" \
"CMakeFiles/Game.dir/src/Game/Components/Stats.cpp.o" \
"CMakeFiles/Game.dir/src/Game/Core/Game.cpp.o" \
"CMakeFiles/Game.dir/src/Game/Entities/Character.cpp.o" \
"CMakeFiles/Game.dir/src/Game/Managers/CharacterManager.cpp.o" \
"CMakeFiles/Game.dir/src/Game/Managers/StateManager.cpp.o" \
"CMakeFiles/Game.dir/src/Game/States/CharacterCreationState.cpp.o" \
"CMakeFiles/Game.dir/src/Game/States/CharacterLoadingState.cpp.o" \
"CMakeFiles/Game.dir/src/Game/States/CharacterMenuState.cpp.o" \
"CMakeFiles/Game.dir/src/Game/States/ExitState.cpp.o" \
"CMakeFiles/Game.dir/src/Game/States/InGameState.cpp.o" \
"CMakeFiles/Game.dir/src/Game/States/MainMenuState.cpp.o" \
"CMakeFiles/Game.dir/src/Game/States/State.cpp.o"

# External object files for target Game
Game_EXTERNAL_OBJECTS =

Game: CMakeFiles/Game.dir/src/main.cpp.o
Game: CMakeFiles/Game.dir/src/Game/Components/Stats.cpp.o
Game: CMakeFiles/Game.dir/src/Game/Core/Game.cpp.o
Game: CMakeFiles/Game.dir/src/Game/Entities/Character.cpp.o
Game: CMakeFiles/Game.dir/src/Game/Managers/CharacterManager.cpp.o
Game: CMakeFiles/Game.dir/src/Game/Managers/StateManager.cpp.o
Game: CMakeFiles/Game.dir/src/Game/States/CharacterCreationState.cpp.o
Game: CMakeFiles/Game.dir/src/Game/States/CharacterLoadingState.cpp.o
Game: CMakeFiles/Game.dir/src/Game/States/CharacterMenuState.cpp.o
Game: CMakeFiles/Game.dir/src/Game/States/ExitState.cpp.o
Game: CMakeFiles/Game.dir/src/Game/States/InGameState.cpp.o
Game: CMakeFiles/Game.dir/src/Game/States/MainMenuState.cpp.o
Game: CMakeFiles/Game.dir/src/Game/States/State.cpp.o
Game: CMakeFiles/Game.dir/build.make
Game: CMakeFiles/Game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/jannis/Desktop/GameProjectV2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable Game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Game.dir/build: Game
.PHONY : CMakeFiles/Game.dir/build

CMakeFiles/Game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Game.dir/clean

CMakeFiles/Game.dir/depend:
	cd /Users/jannis/Desktop/GameProjectV2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jannis/Desktop/GameProjectV2 /Users/jannis/Desktop/GameProjectV2 /Users/jannis/Desktop/GameProjectV2/build /Users/jannis/Desktop/GameProjectV2/build /Users/jannis/Desktop/GameProjectV2/build/CMakeFiles/Game.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Game.dir/depend

