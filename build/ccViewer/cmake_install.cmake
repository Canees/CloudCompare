# Install script for directory: /Users/caner/Desktop/CloudCompare/ccViewer

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer" TYPE DIRECTORY FILES "/Users/caner/Desktop/CloudCompare/build/ccViewer/deployqt//ccViewer.app" USE_SOURCE_PERMISSIONS)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer" TYPE FILE FILES "/Users/caner/Desktop/CloudCompare/ccViewer/bin_other/license.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/ccViewer/ccViewer.app/Contents/PlugIns/ccPlugins/libQCORE_IO_PLUGIN.dylib")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/ccViewer/ccViewer.app/Contents/PlugIns/ccPlugins" TYPE SHARED_LIBRARY FILES "/Users/caner/Desktop/CloudCompare/build/plugins/core/IO/qCoreIO/libQCORE_IO_PLUGIN.dylib")
  if(EXISTS "$ENV{DESTDIR}/usr/local/ccViewer/ccViewer.app/Contents/PlugIns/ccPlugins/libQCORE_IO_PLUGIN.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/ccViewer/ccViewer.app/Contents/PlugIns/ccPlugins/libQCORE_IO_PLUGIN.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/caner/Desktop/CloudCompare/build/libs/CCPluginAPI"
      -delete_rpath "/Users/caner/Desktop/CloudCompare/build/libs/qCC_glWindow"
      -delete_rpath "/Users/caner/Desktop/CloudCompare/build/libs/qCC_io"
      -delete_rpath "/Users/caner/Desktop/CloudCompare/build/libs/qCC_db"
      -delete_rpath "/Users/caner/Desktop/CloudCompare/build/libs/qCC_db/extern/CCCoreLib"
      -delete_rpath "/Users/caner/Desktop/CloudCompare/build/libs/CCFbo"
      "$ENV{DESTDIR}/usr/local/ccViewer/ccViewer.app/Contents/PlugIns/ccPlugins/libQCORE_IO_PLUGIN.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" -x "$ENV{DESTDIR}/usr/local/ccViewer/ccViewer.app/Contents/PlugIns/ccPlugins/libQCORE_IO_PLUGIN.dylib")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/caner/Desktop/CloudCompare/build/ccViewer/Mac/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/caner/Desktop/CloudCompare/build/ccViewer/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()