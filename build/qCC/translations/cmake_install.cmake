# Install script for directory: /Users/caner/Desktop/CloudCompare/qCC/translations

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
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/CloudCompare/CloudCompare.app/Contents/translations/CloudCompare_chs.qm;/usr/local/CloudCompare/CloudCompare.app/Contents/translations/CloudCompare_de.qm;/usr/local/CloudCompare/CloudCompare.app/Contents/translations/CloudCompare_es_AR.qm;/usr/local/CloudCompare/CloudCompare.app/Contents/translations/CloudCompare_fr.qm;/usr/local/CloudCompare/CloudCompare.app/Contents/translations/CloudCompare_ja.qm;/usr/local/CloudCompare/CloudCompare.app/Contents/translations/CloudCompare_ko.qm;/usr/local/CloudCompare/CloudCompare.app/Contents/translations/CloudCompare_pt.qm;/usr/local/CloudCompare/CloudCompare.app/Contents/translations/CloudCompare_ru.qm;/usr/local/CloudCompare/CloudCompare.app/Contents/translations/CloudCompare_zh.qm;/usr/local/CloudCompare/CloudCompare.app/Contents/translations/qt_de.qm;/usr/local/CloudCompare/CloudCompare.app/Contents/translations/qt_es.qm;/usr/local/CloudCompare/CloudCompare.app/Contents/translations/qt_fr.qm;/usr/local/CloudCompare/CloudCompare.app/Contents/translations/qt_ja.qm;/usr/local/CloudCompare/CloudCompare.app/Contents/translations/qt_ko.qm;/usr/local/CloudCompare/CloudCompare.app/Contents/translations/qt_ru.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/CloudCompare/CloudCompare.app/Contents/translations" TYPE FILE FILES
    "/Users/caner/Desktop/CloudCompare/build/qCC/translations/CloudCompare_chs.qm"
    "/Users/caner/Desktop/CloudCompare/build/qCC/translations/CloudCompare_de.qm"
    "/Users/caner/Desktop/CloudCompare/build/qCC/translations/CloudCompare_es_AR.qm"
    "/Users/caner/Desktop/CloudCompare/build/qCC/translations/CloudCompare_fr.qm"
    "/Users/caner/Desktop/CloudCompare/build/qCC/translations/CloudCompare_ja.qm"
    "/Users/caner/Desktop/CloudCompare/build/qCC/translations/CloudCompare_ko.qm"
    "/Users/caner/Desktop/CloudCompare/build/qCC/translations/CloudCompare_pt.qm"
    "/Users/caner/Desktop/CloudCompare/build/qCC/translations/CloudCompare_ru.qm"
    "/Users/caner/Desktop/CloudCompare/build/qCC/translations/CloudCompare_zh.qm"
    "/Users/caner/Desktop/CloudCompare/build/qCC/translations/qt_de.qm"
    "/Users/caner/Desktop/CloudCompare/build/qCC/translations/qt_es.qm"
    "/Users/caner/Desktop/CloudCompare/build/qCC/translations/qt_fr.qm"
    "/Users/caner/Desktop/CloudCompare/build/qCC/translations/qt_ja.qm"
    "/Users/caner/Desktop/CloudCompare/build/qCC/translations/qt_ko.qm"
    "/Users/caner/Desktop/CloudCompare/build/qCC/translations/qt_ru.qm"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/caner/Desktop/CloudCompare/build/qCC/translations/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
