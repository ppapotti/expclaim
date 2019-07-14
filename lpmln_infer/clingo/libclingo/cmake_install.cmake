# Install script for directory: /home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libclingo

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
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclingo.so.2.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclingo.so.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclingo.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/usr/local/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/bin/libclingo.so.2.0"
    "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/bin/libclingo.so.2"
    "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/bin/libclingo.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclingo.so.2.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclingo.so.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclingo.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "::::::::::::::"
           NEW_RPATH "/usr/local/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libclingo/clingo.hh"
    "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libclingo/clingo.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Clingo/ClingoTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Clingo/ClingoTargets.cmake"
         "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libclingo/CMakeFiles/Export/lib/cmake/Clingo/ClingoTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Clingo/ClingoTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Clingo/ClingoTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Clingo" TYPE FILE FILES "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libclingo/CMakeFiles/Export/lib/cmake/Clingo/ClingoTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Clingo" TYPE FILE FILES "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libclingo/CMakeFiles/Export/lib/cmake/Clingo/ClingoTargets-release.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Clingo" TYPE FILE FILES
    "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libclingo/ClingoConfig.cmake"
    "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libclingo/ClingoConfigVersion.cmake"
    )
endif()

