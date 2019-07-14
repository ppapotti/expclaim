# Install script for directory: /home/ubuntu/LPMLN1.1/lpmln_infer/clingo

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/clasp/cmake_install.cmake")
  include("/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libreify/cmake_install.cmake")
  include("/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/cmake_install.cmake")
  include("/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libclingo/cmake_install.cmake")
  include("/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libpyclingo/cmake_install.cmake")
  include("/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libluaclingo/cmake_install.cmake")
  include("/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/app/reify/cmake_install.cmake")
  include("/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/app/gringo/cmake_install.cmake")
  include("/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/app/clingo/cmake_install.cmake")
  include("/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/app/pyclingo/cmake_install.cmake")
  include("/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/app/luaclingo/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
