# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sj/Desktop/RMD_Motor_Wizard

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sj/Desktop/RMD_Motor_Wizard/build

# Include any dependencies generated for this target.
include CMakeFiles/qt_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/qt_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qt_test.dir/flags.make

CMakeFiles/qt_test.dir/qt_test_autogen/mocs_compilation.cpp.o: CMakeFiles/qt_test.dir/flags.make
CMakeFiles/qt_test.dir/qt_test_autogen/mocs_compilation.cpp.o: qt_test_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sj/Desktop/RMD_Motor_Wizard/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/qt_test.dir/qt_test_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qt_test.dir/qt_test_autogen/mocs_compilation.cpp.o -c /home/sj/Desktop/RMD_Motor_Wizard/build/qt_test_autogen/mocs_compilation.cpp

CMakeFiles/qt_test.dir/qt_test_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt_test.dir/qt_test_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sj/Desktop/RMD_Motor_Wizard/build/qt_test_autogen/mocs_compilation.cpp > CMakeFiles/qt_test.dir/qt_test_autogen/mocs_compilation.cpp.i

CMakeFiles/qt_test.dir/qt_test_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt_test.dir/qt_test_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sj/Desktop/RMD_Motor_Wizard/build/qt_test_autogen/mocs_compilation.cpp -o CMakeFiles/qt_test.dir/qt_test_autogen/mocs_compilation.cpp.s

CMakeFiles/qt_test.dir/main.cpp.o: CMakeFiles/qt_test.dir/flags.make
CMakeFiles/qt_test.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sj/Desktop/RMD_Motor_Wizard/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/qt_test.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qt_test.dir/main.cpp.o -c /home/sj/Desktop/RMD_Motor_Wizard/main.cpp

CMakeFiles/qt_test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt_test.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sj/Desktop/RMD_Motor_Wizard/main.cpp > CMakeFiles/qt_test.dir/main.cpp.i

CMakeFiles/qt_test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt_test.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sj/Desktop/RMD_Motor_Wizard/main.cpp -o CMakeFiles/qt_test.dir/main.cpp.s

CMakeFiles/qt_test.dir/mainwindow.cpp.o: CMakeFiles/qt_test.dir/flags.make
CMakeFiles/qt_test.dir/mainwindow.cpp.o: ../mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sj/Desktop/RMD_Motor_Wizard/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/qt_test.dir/mainwindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qt_test.dir/mainwindow.cpp.o -c /home/sj/Desktop/RMD_Motor_Wizard/mainwindow.cpp

CMakeFiles/qt_test.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt_test.dir/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sj/Desktop/RMD_Motor_Wizard/mainwindow.cpp > CMakeFiles/qt_test.dir/mainwindow.cpp.i

CMakeFiles/qt_test.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt_test.dir/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sj/Desktop/RMD_Motor_Wizard/mainwindow.cpp -o CMakeFiles/qt_test.dir/mainwindow.cpp.s

CMakeFiles/qt_test.dir/socket_can.cpp.o: CMakeFiles/qt_test.dir/flags.make
CMakeFiles/qt_test.dir/socket_can.cpp.o: ../socket_can.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sj/Desktop/RMD_Motor_Wizard/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/qt_test.dir/socket_can.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qt_test.dir/socket_can.cpp.o -c /home/sj/Desktop/RMD_Motor_Wizard/socket_can.cpp

CMakeFiles/qt_test.dir/socket_can.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt_test.dir/socket_can.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sj/Desktop/RMD_Motor_Wizard/socket_can.cpp > CMakeFiles/qt_test.dir/socket_can.cpp.i

CMakeFiles/qt_test.dir/socket_can.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt_test.dir/socket_can.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sj/Desktop/RMD_Motor_Wizard/socket_can.cpp -o CMakeFiles/qt_test.dir/socket_can.cpp.s

CMakeFiles/qt_test.dir/qcustomplot.cpp.o: CMakeFiles/qt_test.dir/flags.make
CMakeFiles/qt_test.dir/qcustomplot.cpp.o: ../qcustomplot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sj/Desktop/RMD_Motor_Wizard/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/qt_test.dir/qcustomplot.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qt_test.dir/qcustomplot.cpp.o -c /home/sj/Desktop/RMD_Motor_Wizard/qcustomplot.cpp

CMakeFiles/qt_test.dir/qcustomplot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt_test.dir/qcustomplot.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sj/Desktop/RMD_Motor_Wizard/qcustomplot.cpp > CMakeFiles/qt_test.dir/qcustomplot.cpp.i

CMakeFiles/qt_test.dir/qcustomplot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt_test.dir/qcustomplot.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sj/Desktop/RMD_Motor_Wizard/qcustomplot.cpp -o CMakeFiles/qt_test.dir/qcustomplot.cpp.s

CMakeFiles/qt_test.dir/axistag.cpp.o: CMakeFiles/qt_test.dir/flags.make
CMakeFiles/qt_test.dir/axistag.cpp.o: ../axistag.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sj/Desktop/RMD_Motor_Wizard/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/qt_test.dir/axistag.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qt_test.dir/axistag.cpp.o -c /home/sj/Desktop/RMD_Motor_Wizard/axistag.cpp

CMakeFiles/qt_test.dir/axistag.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt_test.dir/axistag.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sj/Desktop/RMD_Motor_Wizard/axistag.cpp > CMakeFiles/qt_test.dir/axistag.cpp.i

CMakeFiles/qt_test.dir/axistag.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt_test.dir/axistag.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sj/Desktop/RMD_Motor_Wizard/axistag.cpp -o CMakeFiles/qt_test.dir/axistag.cpp.s

# Object files for target qt_test
qt_test_OBJECTS = \
"CMakeFiles/qt_test.dir/qt_test_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/qt_test.dir/main.cpp.o" \
"CMakeFiles/qt_test.dir/mainwindow.cpp.o" \
"CMakeFiles/qt_test.dir/socket_can.cpp.o" \
"CMakeFiles/qt_test.dir/qcustomplot.cpp.o" \
"CMakeFiles/qt_test.dir/axistag.cpp.o"

# External object files for target qt_test
qt_test_EXTERNAL_OBJECTS =

qt_test: CMakeFiles/qt_test.dir/qt_test_autogen/mocs_compilation.cpp.o
qt_test: CMakeFiles/qt_test.dir/main.cpp.o
qt_test: CMakeFiles/qt_test.dir/mainwindow.cpp.o
qt_test: CMakeFiles/qt_test.dir/socket_can.cpp.o
qt_test: CMakeFiles/qt_test.dir/qcustomplot.cpp.o
qt_test: CMakeFiles/qt_test.dir/axistag.cpp.o
qt_test: CMakeFiles/qt_test.dir/build.make
qt_test: /usr/lib/x86_64-linux-gnu/libQt5PrintSupport.so.5.9.5
qt_test: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.9.5
qt_test: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.9.5
qt_test: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.9.5
qt_test: CMakeFiles/qt_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sj/Desktop/RMD_Motor_Wizard/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable qt_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qt_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qt_test.dir/build: qt_test

.PHONY : CMakeFiles/qt_test.dir/build

CMakeFiles/qt_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qt_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qt_test.dir/clean

CMakeFiles/qt_test.dir/depend:
	cd /home/sj/Desktop/RMD_Motor_Wizard/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sj/Desktop/RMD_Motor_Wizard /home/sj/Desktop/RMD_Motor_Wizard /home/sj/Desktop/RMD_Motor_Wizard/build /home/sj/Desktop/RMD_Motor_Wizard/build /home/sj/Desktop/RMD_Motor_Wizard/build/CMakeFiles/qt_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qt_test.dir/depend

