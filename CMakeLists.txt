cmake_minimum_required (VERSION 2.6.0)
project (collada-dom)
set( CMAKE_ALLOW_LOOSE_LOOP_CONSTRUCTS TRUE )

# Define here the needed parameters
set (COLLADA_DOM_VERSION_MAJOR 2)
set (COLLADA_DOM_VERSION_MINOR 3)
set (COLLADA_DOM_VERSION_PATCH 0)
set (COLLADA_DOM_VERSION ${COLLADA_DOM_VERSION_MAJOR}.${COLLADA_DOM_VERSION_MINOR}.${COLLADA_DOM_VERSION_PATCH})
set (COLLADA_DOM_SOVERSION ${COLLADA_DOM_VERSION_MAJOR})
message(STATUS "Compiling Collada DOM Version ${COLLADA_DOM_VERSION}")

message(STATUS "Using cmake version ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" )
# some developers may be using an cmake cvs version which didn't have set_property() yet
# Tell them that a more recent version is required.
if(NOT COMMAND SET_PROPERTY)
  message(FATAL_ERROR "You are using an old version of CMake from cvs, please update to CMake >= 2.6.0 or cvs at least from Feb 20th, 2008")
endif(NOT COMMAND SET_PROPERTY)
# http://www.cmake.org/cmake/help/cmake-2.6.html#policy:CMP0002
cmake_policy(SET CMP0002 NEW)
# http://www.cmake.org/cmake/help/cmake-2.6.html#policy:CMP0003
cmake_policy(SET CMP0003 NEW)

##############################################################################
# Sets the location of nonstandard shared libraries
##############################################################################

# Use, i.e. don't skip the full RPATH for the build tree
set(CMAKE_SKIP_BUILD_RPATH  FALSE)

# When building, don't use the install RPATH already
# (but later on when installing)
set(CMAKE_BUILD_WITH_INSTALL_RPATH FALSE)

# The RPATH to be used when installing
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")

# Add the automatically determined parts of the RPATH
# which point to directories outside the build tree to the install RPATH
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

message(STATUS "installing to ${CMAKE_INSTALL_PREFIX}")

##############################################################################
# Custom CMake options
##############################################################################

option(OPT_COLLADA15 "Enable collada 1.5 compilation" ON)
option(OPT_COLLADA14 "Enable collada 1.4 compilation" ON)
option(OPT_COMPILE_VIEWER "Enable collada viewer compilation" OFF)
option(OPT_COMPILE_FX "Enable collada fx compilation" OFF)
option(OPT_COMPILE_RT "Enable collada rt compilation" OFF)

if( OPT_COMPILE_VIEWER )
  message(WARNING "compiling collada viewer currently not supported")
endif()
if( OPT_COMPILE_FX )
  message(WARNING "compiling collada fx currently not supported")
endif()
if( OPT_COMPILE_RT )
  message(WARNING "compiling collada rt currently not supported")
endif()

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake-modules")

include(CheckIncludeFile)
include(CheckIncludeFileCXX)
include(CheckLibraryExists)
include(CheckFunctionExists)
include(CheckCXXSourceCompiles)
#include(CheckCXXSourceRuns)
#include(CheckCXXCompilerFlag)
include(CheckTypeSize)
include(FindPkgConfig)

if( CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX )
  add_definitions("-fno-strict-aliasing -Wall")
endif()

if( CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX )
  set(CMAKE_CXX_FLAGS_RELEASE "-O2")# -DNDEBUG -DBOOST_DISABLE_ASSERTS -D_SECURE_SCL=0") # this practically removes all checks making it a very dangerous options to play with
  set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")
  set(CMAKE_CXX_FLAGS_DEBUG "-g -D_DEBUG")
endif()

if( UNIX OR CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX )
  set(STDC_LIBRARY stdc++)
else()
  set(STDC_LIBRARY)
endif()

if( APPLE OR ${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  # apple doesn't have 64bit versions of file opening functions, so add them
  add_definitions("-Dfopen64=fopen -Dfseeko64=fseeko -Dfseek64=fseek -Dftell64=ftell -Dftello64=ftello")
endif()

set(COLLADA_DOM_INCLUDE_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/include/collada-dom")

set(COLLADA_DOM_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/dom/include)
set(COLLADA_DOM_LINK_DIRS "")

set(Boost_ADDITIONAL_VERSIONS "1.46" "1.45" "1.44" "1.43" "1.42" "1.41" "1.40" "1.39" "1.38" "1.37.0" "1.37" "1.35.0" "1.34.1" "1.34.0" "1.34" "1.33.1" "1.33.0" "1.33")

if( NOT $ENV{BOOST_INCLUDEDIR} STREQUAL "" )
  set(Boost_INCLUDE_DIR $ENV{BOOST_INCLUDEDIR})
endif()
if( NOT $ENV{BOOST_LIBRARYDIR} STREQUAL "" )
  set(Boost_LIBRARY_DIRS $ENV{BOOST_LIBRARYDIR})
endif()
find_package(Boost COMPONENTS filesystem system)

message(STATUS "found boost version: ${Boost_VERSION}")

if( Boost_FOUND )
  include_directories(${Boost_INCLUDE_DIRS})
  set(COLLADA_DOM_LINK_DIRS ${COLLADA_DOM_LINK_DIRS} ${Boost_LIBRARY_DIRS})
elseif(Boost_VERSION AND NOT "${Boost_VERSION}" STREQUAL "0")
  include_directories(${Boost_INCLUDE_DIRS})
  set(COLLADA_DOM_LINK_DIRS ${COLLADA_DOM_LINK_DIRS} ${Boost_LIBRARY_DIRS})
else()
  message(FATAL_ERROR "Could not find boost libraries!")
endif()

if( NOT Boost_FILESYSTEM_FOUND OR NOT Boost_SYSTEM_FOUND )
  message(FATAL_ERROR "Need to install boost filesystem and boost system.")
endif()

set(COLLADA_DOM_BOOST_INCLUDE_DIRS)
foreach(idir ${Boost_INCLUDE_DIRS})
  set(COLLADA_DOM_BOOST_INCLUDE_DIRS "${COLLADA_DOM_BOOST_INCLUDE_DIRS} -I${idir}")
endforeach()

set(COLLADA_DOM_BOOST_LIB_DIRS)
foreach(ldir ${Boost_LIBRARY_DIRS})
  set(COLLADA_DOM_BOOST_LIB_DIRS "${COLLADA_DOM_BOOST_LIB_DIRS} -L${ldir}")
endforeach()

if(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
  set(EXTRA_COMPILE_FLAGS "-fPIC")
else()
  set(EXTRA_COMPILE_FLAGS "")
endif()

find_package(LibXml2)

if( LIBXML2_FOUND )
  include_directories(${LIBXML2_INCLUDE_DIR})
  add_definitions(${LIBXML2_DEFINITIONS})
  message(STATUS "libxml2 found")
else()
  if( MSVC )
    set(LIBXML2_LIBRARIES optimized libxml2 debug libxml2d)
    set(LIBXML2_INCLUDE_DIR)
    set(LIBXML2_DEFINITIONS)
  else()
    message(FATAL_ERROR "Could not find libxml2")
  endif()
endif()

find_package(ZLIB)
if( NOT ZLIB_FOUND )
  message(FATAL_ERROR "could not find zlib")
endif()

add_subdirectory(dom/external-libs/minizip-1.1)
set(MINIZIP_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/dom/external-libs/minizip-1.1 ${ZLIB_INCLUDE_DIR})

pkg_check_modules(libpcrecpp libpcrecpp)
if( libpcrecpp_FOUND )
  set(CMAKE_REQUIRED_INCLUDES ${libpcrecpp_INCLUDE_DIRS})
  check_include_file_cxx(pcrecpp.h HAVE_PCRECPP_H)
  set(CMAKE_REQUIRED_INCLUDES)
  if( NOT HAVE_PCRECPP_H )
    set(libpcrecpp_FOUND 0)
  endif()
else()
  message(FATAL_ERROR "need to install pcre and pcrecpp")
endif()

if( LIBXML2_DEFINITIONS )
  add_definitions(${LIBXML2_DEFINITIONS})
endif()
if( LIBXML2_INCLUDE_DIR )
  include_directories(${LIBXML2_INCLUDE_DIR})
endif()

include_directories(${MINIZIP_INCLUDE_DIR})
include_directories(BEFORE ${libpcrecpp_INCLUDE_DIRS})

set(COLLADA_DOM_LINK_DIRS ${COLLADA_DOM_LINK_DIRS} ${libpcrecpp_LIBRARY_DIRS})
link_directories(${COLLADA_DOM_LINK_DIRS})

add_subdirectory(dom)

if( OPT_COLLADA15 )
  configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/collada15dom.pc.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/collada15dom.pc" @ONLY IMMEDIATE)
  if(UNIX)
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/collada15dom.pc DESTINATION lib/pkgconfig)
  endif()
endif()

if( OPT_COLLADA14 )
  configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/collada14dom.pc.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/collada14dom.pc" @ONLY IMMEDIATE)
  if(UNIX)
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/collada14dom.pc DESTINATION lib/pkgconfig)
  endif()
endif()

# add make uninstall capability
configure_file(
  "${CMAKE_CURRENT_SOURCE_DIR}/cmake-modules/cmake_uninstall.cmake.in"
  "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
  IMMEDIATE @ONLY)

add_custom_target(uninstall
  "${CMAKE_COMMAND}" -P "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake")
