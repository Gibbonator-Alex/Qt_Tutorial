# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alexander/QtCreator_Applications/Qt_Tutorial/TEst

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alexander/QtCreator_Applications/Qt_Tutorial/build/build-TEst-Desktop-Debug

# Utility rule file for TEst_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/TEst_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TEst_autogen.dir/progress.make

CMakeFiles/TEst_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/alexander/QtCreator_Applications/Qt_Tutorial/build/build-TEst-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target TEst"
	/usr/bin/cmake -E cmake_autogen /home/alexander/QtCreator_Applications/Qt_Tutorial/build/build-TEst-Desktop-Debug/CMakeFiles/TEst_autogen.dir/AutogenInfo.json Debug

TEst_autogen: CMakeFiles/TEst_autogen
TEst_autogen: CMakeFiles/TEst_autogen.dir/build.make
.PHONY : TEst_autogen

# Rule to build all files generated by this target.
CMakeFiles/TEst_autogen.dir/build: TEst_autogen
.PHONY : CMakeFiles/TEst_autogen.dir/build

CMakeFiles/TEst_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TEst_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TEst_autogen.dir/clean

CMakeFiles/TEst_autogen.dir/depend:
	cd /home/alexander/QtCreator_Applications/Qt_Tutorial/build/build-TEst-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alexander/QtCreator_Applications/Qt_Tutorial/TEst /home/alexander/QtCreator_Applications/Qt_Tutorial/TEst /home/alexander/QtCreator_Applications/Qt_Tutorial/build/build-TEst-Desktop-Debug /home/alexander/QtCreator_Applications/Qt_Tutorial/build/build-TEst-Desktop-Debug /home/alexander/QtCreator_Applications/Qt_Tutorial/build/build-TEst-Desktop-Debug/CMakeFiles/TEst_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TEst_autogen.dir/depend

