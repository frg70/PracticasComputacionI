# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\980012754\Documents\Pruebas3\PracticasComputacionI\GaussJordan

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\980012754\Documents\Pruebas3\PracticasComputacionI\GaussJordan\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\GaussJordan.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\GaussJordan.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\GaussJordan.dir\flags.make

CMakeFiles\GaussJordan.dir\GaussJordan.cpp.obj: CMakeFiles\GaussJordan.dir\flags.make
CMakeFiles\GaussJordan.dir\GaussJordan.cpp.obj: ..\GaussJordan.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\980012754\Documents\Pruebas3\PracticasComputacionI\GaussJordan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GaussJordan.dir/GaussJordan.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\GaussJordan.dir\GaussJordan.cpp.obj /FdCMakeFiles\GaussJordan.dir\ /FS -c C:\Users\980012754\Documents\Pruebas3\PracticasComputacionI\GaussJordan\GaussJordan.cpp
<<

CMakeFiles\GaussJordan.dir\GaussJordan.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GaussJordan.dir/GaussJordan.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" > CMakeFiles\GaussJordan.dir\GaussJordan.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\980012754\Documents\Pruebas3\PracticasComputacionI\GaussJordan\GaussJordan.cpp
<<

CMakeFiles\GaussJordan.dir\GaussJordan.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GaussJordan.dir/GaussJordan.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\GaussJordan.dir\GaussJordan.cpp.s /c C:\Users\980012754\Documents\Pruebas3\PracticasComputacionI\GaussJordan\GaussJordan.cpp
<<

# Object files for target GaussJordan
GaussJordan_OBJECTS = \
"CMakeFiles\GaussJordan.dir\GaussJordan.cpp.obj"

# External object files for target GaussJordan
GaussJordan_EXTERNAL_OBJECTS =

GaussJordan.exe: CMakeFiles\GaussJordan.dir\GaussJordan.cpp.obj
GaussJordan.exe: CMakeFiles\GaussJordan.dir\build.make
GaussJordan.exe: CMakeFiles\GaussJordan.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\980012754\Documents\Pruebas3\PracticasComputacionI\GaussJordan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GaussJordan.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\GaussJordan.dir --rc="C:\PROGRA~2\Windows Kits\10\bin\10.0.20348.0\x86\rc.exe" --mt="C:\PROGRA~2\Windows Kits\10\bin\10.0.20348.0\x86\mt.exe" --manifests -- "C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\GaussJordan.dir\objects1.rsp @<<
 /out:GaussJordan.exe /implib:GaussJordan.lib /pdb:C:\Users\980012754\Documents\Pruebas3\PracticasComputacionI\GaussJordan\cmake-build-debug\GaussJordan.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\GaussJordan.dir\build: GaussJordan.exe
.PHONY : CMakeFiles\GaussJordan.dir\build

CMakeFiles\GaussJordan.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GaussJordan.dir\cmake_clean.cmake
.PHONY : CMakeFiles\GaussJordan.dir\clean

CMakeFiles\GaussJordan.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\980012754\Documents\Pruebas3\PracticasComputacionI\GaussJordan C:\Users\980012754\Documents\Pruebas3\PracticasComputacionI\GaussJordan C:\Users\980012754\Documents\Pruebas3\PracticasComputacionI\GaussJordan\cmake-build-debug C:\Users\980012754\Documents\Pruebas3\PracticasComputacionI\GaussJordan\cmake-build-debug C:\Users\980012754\Documents\Pruebas3\PracticasComputacionI\GaussJordan\cmake-build-debug\CMakeFiles\GaussJordan.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\GaussJordan.dir\depend

