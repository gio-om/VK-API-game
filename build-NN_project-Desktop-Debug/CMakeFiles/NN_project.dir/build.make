# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/gioom/nn/NN_project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gioom/nn/build-NN_project-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/NN_project.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/NN_project.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/NN_project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NN_project.dir/flags.make

NN_project_autogen/EWIEGA46WW/qrc_resources.cpp: /home/gioom/nn/NN_project/resources.qrc
NN_project_autogen/EWIEGA46WW/qrc_resources.cpp: CMakeFiles/NN_project_autogen.dir/AutoRcc_resources_EWIEGA46WW_Info.json
NN_project_autogen/EWIEGA46WW/qrc_resources.cpp: /home/gioom/nn/NN_project/vkIcon.png
NN_project_autogen/EWIEGA46WW/qrc_resources.cpp: /home/gioom/nn/NN_project/playerIcon.png
NN_project_autogen/EWIEGA46WW/qrc_resources.cpp: /home/gioom/nn/NN_project/neuralIcon.png
NN_project_autogen/EWIEGA46WW/qrc_resources.cpp: /home/gioom/Qt/6.4.3/gcc_64/./libexec/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/gioom/nn/build-NN_project-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic RCC for resources.qrc"
	/usr/bin/cmake -E cmake_autorcc /home/gioom/nn/build-NN_project-Desktop-Debug/CMakeFiles/NN_project_autogen.dir/AutoRcc_resources_EWIEGA46WW_Info.json Debug

CMakeFiles/NN_project.dir/NN_project_autogen/mocs_compilation.cpp.o: CMakeFiles/NN_project.dir/flags.make
CMakeFiles/NN_project.dir/NN_project_autogen/mocs_compilation.cpp.o: NN_project_autogen/mocs_compilation.cpp
CMakeFiles/NN_project.dir/NN_project_autogen/mocs_compilation.cpp.o: CMakeFiles/NN_project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gioom/nn/build-NN_project-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/NN_project.dir/NN_project_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NN_project.dir/NN_project_autogen/mocs_compilation.cpp.o -MF CMakeFiles/NN_project.dir/NN_project_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/NN_project.dir/NN_project_autogen/mocs_compilation.cpp.o -c /home/gioom/nn/build-NN_project-Desktop-Debug/NN_project_autogen/mocs_compilation.cpp

CMakeFiles/NN_project.dir/NN_project_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NN_project.dir/NN_project_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gioom/nn/build-NN_project-Desktop-Debug/NN_project_autogen/mocs_compilation.cpp > CMakeFiles/NN_project.dir/NN_project_autogen/mocs_compilation.cpp.i

CMakeFiles/NN_project.dir/NN_project_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NN_project.dir/NN_project_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gioom/nn/build-NN_project-Desktop-Debug/NN_project_autogen/mocs_compilation.cpp -o CMakeFiles/NN_project.dir/NN_project_autogen/mocs_compilation.cpp.s

CMakeFiles/NN_project.dir/main.cpp.o: CMakeFiles/NN_project.dir/flags.make
CMakeFiles/NN_project.dir/main.cpp.o: /home/gioom/nn/NN_project/main.cpp
CMakeFiles/NN_project.dir/main.cpp.o: CMakeFiles/NN_project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gioom/nn/build-NN_project-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/NN_project.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NN_project.dir/main.cpp.o -MF CMakeFiles/NN_project.dir/main.cpp.o.d -o CMakeFiles/NN_project.dir/main.cpp.o -c /home/gioom/nn/NN_project/main.cpp

CMakeFiles/NN_project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NN_project.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gioom/nn/NN_project/main.cpp > CMakeFiles/NN_project.dir/main.cpp.i

CMakeFiles/NN_project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NN_project.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gioom/nn/NN_project/main.cpp -o CMakeFiles/NN_project.dir/main.cpp.s

CMakeFiles/NN_project.dir/mainwindow.cpp.o: CMakeFiles/NN_project.dir/flags.make
CMakeFiles/NN_project.dir/mainwindow.cpp.o: /home/gioom/nn/NN_project/mainwindow.cpp
CMakeFiles/NN_project.dir/mainwindow.cpp.o: CMakeFiles/NN_project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gioom/nn/build-NN_project-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/NN_project.dir/mainwindow.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NN_project.dir/mainwindow.cpp.o -MF CMakeFiles/NN_project.dir/mainwindow.cpp.o.d -o CMakeFiles/NN_project.dir/mainwindow.cpp.o -c /home/gioom/nn/NN_project/mainwindow.cpp

CMakeFiles/NN_project.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NN_project.dir/mainwindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gioom/nn/NN_project/mainwindow.cpp > CMakeFiles/NN_project.dir/mainwindow.cpp.i

CMakeFiles/NN_project.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NN_project.dir/mainwindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gioom/nn/NN_project/mainwindow.cpp -o CMakeFiles/NN_project.dir/mainwindow.cpp.s

CMakeFiles/NN_project.dir/gamewindow.cpp.o: CMakeFiles/NN_project.dir/flags.make
CMakeFiles/NN_project.dir/gamewindow.cpp.o: /home/gioom/nn/NN_project/gamewindow.cpp
CMakeFiles/NN_project.dir/gamewindow.cpp.o: CMakeFiles/NN_project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gioom/nn/build-NN_project-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/NN_project.dir/gamewindow.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NN_project.dir/gamewindow.cpp.o -MF CMakeFiles/NN_project.dir/gamewindow.cpp.o.d -o CMakeFiles/NN_project.dir/gamewindow.cpp.o -c /home/gioom/nn/NN_project/gamewindow.cpp

CMakeFiles/NN_project.dir/gamewindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NN_project.dir/gamewindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gioom/nn/NN_project/gamewindow.cpp > CMakeFiles/NN_project.dir/gamewindow.cpp.i

CMakeFiles/NN_project.dir/gamewindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NN_project.dir/gamewindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gioom/nn/NN_project/gamewindow.cpp -o CMakeFiles/NN_project.dir/gamewindow.cpp.s

CMakeFiles/NN_project.dir/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp.o: CMakeFiles/NN_project.dir/flags.make
CMakeFiles/NN_project.dir/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp.o: NN_project_autogen/EWIEGA46WW/qrc_resources.cpp
CMakeFiles/NN_project.dir/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp.o: CMakeFiles/NN_project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gioom/nn/build-NN_project-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/NN_project.dir/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NN_project.dir/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp.o -MF CMakeFiles/NN_project.dir/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp.o.d -o CMakeFiles/NN_project.dir/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp.o -c /home/gioom/nn/build-NN_project-Desktop-Debug/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp

CMakeFiles/NN_project.dir/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NN_project.dir/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gioom/nn/build-NN_project-Desktop-Debug/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp > CMakeFiles/NN_project.dir/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp.i

CMakeFiles/NN_project.dir/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NN_project.dir/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gioom/nn/build-NN_project-Desktop-Debug/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp -o CMakeFiles/NN_project.dir/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp.s

# Object files for target NN_project
NN_project_OBJECTS = \
"CMakeFiles/NN_project.dir/NN_project_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/NN_project.dir/main.cpp.o" \
"CMakeFiles/NN_project.dir/mainwindow.cpp.o" \
"CMakeFiles/NN_project.dir/gamewindow.cpp.o" \
"CMakeFiles/NN_project.dir/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp.o"

# External object files for target NN_project
NN_project_EXTERNAL_OBJECTS =

NN_project: CMakeFiles/NN_project.dir/NN_project_autogen/mocs_compilation.cpp.o
NN_project: CMakeFiles/NN_project.dir/main.cpp.o
NN_project: CMakeFiles/NN_project.dir/mainwindow.cpp.o
NN_project: CMakeFiles/NN_project.dir/gamewindow.cpp.o
NN_project: CMakeFiles/NN_project.dir/NN_project_autogen/EWIEGA46WW/qrc_resources.cpp.o
NN_project: CMakeFiles/NN_project.dir/build.make
NN_project: /home/gioom/Qt/6.4.3/gcc_64/lib/libQt6Widgets.so.6.4.3
NN_project: /usr/lib/libboost_program_options.so.1.82.0
NN_project: /usr/lib/libboost_url.so.1.82.0
NN_project: /home/gioom/Qt/6.4.3/gcc_64/lib/libQt6Gui.so.6.4.3
NN_project: /home/gioom/Qt/6.4.3/gcc_64/lib/libQt6Core.so.6.4.3
NN_project: /usr/lib/x86_64-linux-gnu/libGLX.so
NN_project: /usr/lib/x86_64-linux-gnu/libOpenGL.so
NN_project: CMakeFiles/NN_project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gioom/nn/build-NN_project-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable NN_project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NN_project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NN_project.dir/build: NN_project
.PHONY : CMakeFiles/NN_project.dir/build

CMakeFiles/NN_project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NN_project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NN_project.dir/clean

CMakeFiles/NN_project.dir/depend: NN_project_autogen/EWIEGA46WW/qrc_resources.cpp
	cd /home/gioom/nn/build-NN_project-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gioom/nn/NN_project /home/gioom/nn/NN_project /home/gioom/nn/build-NN_project-Desktop-Debug /home/gioom/nn/build-NN_project-Desktop-Debug /home/gioom/nn/build-NN_project-Desktop-Debug/CMakeFiles/NN_project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NN_project.dir/depend

