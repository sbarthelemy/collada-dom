cmake_minimum_required (VERSION 2.6.0)
project (collada-dom)
set( CMAKE_ALLOW_LOOSE_LOOP_CONSTRUCTS TRUE )

# Define here the needed parameters
set (COLLADA_DOM_VERSION_MAJOR 2)
set (COLLADA_DOM_VERSION_MINOR 3)
set (COLLADA_DOM_VERSION_PATCH 1)
set (COLLADA_DOM_VERSION ${COLLADA_DOM_VERSION_MAJOR}.${COLLADA_DOM_VERSION_MINOR}.${COLLADA_DOM_VERSION_PATCH})
set (COLLADA_DOM_SOVERSION ${COLLADA_DOM_VERSION_MAJOR})

message(STATUS "Compiling Collada DOM Version ${COLLADA_DOM_VERSION}")
message(STATUS "Using cmake version ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" )

# http://www.cmake.org/cmake/help/cmake-2.6.html#policy:CMP0002
cmake_policy(SET CMP0002 NEW)
# http://www.cmake.org/cmake/help/cmake-2.6.html#policy:CMP0003
cmake_policy(SET CMP0003 NEW)

# Use, i.e. don't skip the full RPATH for the build tree
set(CMAKE_SKIP_BUILD_RPATH  FALSE)

# When building, don't use the install RPATH already
# (but later on when installing)
set(CMAKE_BUILD_WITH_INSTALL_RPATH FALSE)

# The RPATH to be used when installing
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX}")

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
option(OPT_BUILD_PACKAGES "Set to ON to generate CPack configuration files and packaging targets" OFF)

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
set(COMPONENT_PREFIX libcollada)
string(TOUPPER ${COMPONENT_PREFIX} COMPONENT_PREFIX_UPPER)
set(CPACK_COMPONENTS_ALL ${COMPONENT_PREFIX}dom-dev)

if( MSVC )
  if( MSVC70 OR MSVC71 )
    set(MESSAGE "Visual Studio 2003 and before are not supported!")
    set(MSVC_PREFIX "vc80")
  elseif( MSVC80 )
    set(MSVC_PREFIX "vc80")
  elseif( MSVC90 )
    set(MSVC_PREFIX "vc90")
  else()
    set(MSVC_PREFIX "vc100")
  endif()
  set(COLLADA_DOM_LIBRARY_SUFFIX "${COLLADA_DOM_SOVERSION}-${MSVC_PREFIX}-mt")
endif()

include(CheckIncludeFile)
include(CheckIncludeFileCXX)
include(CheckLibraryExists)
include(CheckFunctionExists)
include(CheckCXXSourceCompiles)
#include(CheckCXXSourceRuns)
#include(CheckCXXCompilerFlag)
include(CheckTypeSize)
find_package(PkgConfig)

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

set(COLLADA_DOM_INCLUDE_INSTALL_DIR "include/collada-dom")

set(COLLADA_DOM_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/dom/include)
set(COLLADA_DOM_LINK_DIRS "")

if( MSVC )
  # force multi-threaded DLL boost
  set(Boost_USE_MULTITHREAD ON)
  set(Boost_USE_STATIC_LIBS OFF)
  set(Boost_USE_STATIC_RUNTIME OFF)
  set(Boost_CFLAGS "-DBOOST_ALL_DYN_LINK -DBOOST_ALL_NO_LIB")
endif()
  
set(Boost_ADDITIONAL_VERSIONS "1.46" "1.45" "1.44" "1.43" "1.42" "1.41" "1.40" "1.39" "1.38" "1.37.0" "1.37" "1.35.0" "1.34.1" "1.34.0" "1.34" "1.33.1" "1.33.0" "1.33")

if( NOT $ENV{BOOST_INCLUDEDIR} STREQUAL "" )
  set(Boost_INCLUDE_DIR $ENV{BOOST_INCLUDEDIR})
endif()
if( NOT $ENV{BOOST_LIBRARYDIR} STREQUAL "" )
  set(Boost_LIBRARY_DIRS $ENV{BOOST_LIBRARYDIR})
endif()
find_package(Boost COMPONENTS filesystem system REQUIRED)

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

find_package(ZLIB)
if( NOT ZLIB_FOUND )
  message(STATUS "compiling zlib from souces and linking statically")
  # compile from sources
  add_subdirectory(dom/external-libs/zlib-1.2.5)
  set(ZLIB_FOUND 1)
  set(ZLIB_LIBRARIES zlib)
  set(ZLIB_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/dom/external-libs/zlib-1.2.5)
endif()

find_package(LibXml2)
if( LIBXML2_FOUND )
  include_directories(${LIBXML2_INCLUDE_DIR})
  add_definitions(${LIBXML2_DEFINITIONS} -DDOM_INCLUDE_LIBXML)
  message(STATUS "libxml2 found")
else()
  if( MSVC )
    set(LIBXML2_LIBRARIES ${CMAKE_CURRENT_SOURCE_DIR}/dom/external-libs/libxml2/win32/lib/libxml2)
    set(LIBXML2_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/dom/external-libs/libxml2/include)
    set(LIBXML2_DEFINITIONS)
    include_directories(${LIBXML2_INCLUDE_DIR})
    add_definitions(-DDOM_INCLUDE_LIBXML)
  else()
    message(FATAL_ERROR "Could not find libxml2")
  endif()
endif()

pkg_check_modules(minizip minizip)
if(minizip_FOUND)
  set(MINIZIP_INCLUDE_DIR ${minizip_INCLUDE_DIRS})
else()
  message(STATUS "compiling minizip from sources and linking statically")
  add_subdirectory(dom/external-libs/minizip-1.1)
  set(MINIZIP_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/dom/external-libs/minizip-1.1 ${ZLIB_INCLUDE_DIR})
endif()

pkg_check_modules(libpcrecpp libpcrecpp)
if( libpcrecpp_FOUND )
  set(CMAKE_REQUIRED_INCLUDES ${libpcrecpp_INCLUDE_DIRS})
  check_include_file_cxx(pcrecpp.h HAVE_PCRECPP_H)
  set(CMAKE_REQUIRED_INCLUDES)
  if( NOT HAVE_PCRECPP_H )
    set(libpcrecpp_FOUND 0)
  endif()
endif()

if( NOT libpcrecpp_FOUND )
  message(STATUS "System pcre not found, using local from sources")
  # include the local pcre
  add_subdirectory(dom/external-libs/pcre-8.02)
  set(libpcrecpp_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/dom/external-libs/pcre-8.02)
  set(libpcrecpp_LIBRARY_DIRS)
  set(libpcrecpp_LIBRARIES pcrecpp_local)
  set(libpcrecpp_CFLAGS_OTHERS "-DPCRE_STATIC")
  set(libpcrecpp_LDFLAGS_OTHERS)
endif()

# declare minizip/zlib before libxml2! (for some reason the precompiled libxml2 libraries have zlib.h/zconf.h)
include_directories(BEFORE ${MINIZIP_INCLUDE_DIR})
include_directories(BEFORE ${libpcrecpp_INCLUDE_DIRS})

set(COLLADA_DOM_LINK_DIRS ${COLLADA_DOM_LINK_DIRS} ${libpcrecpp_LIBRARY_DIRS})
link_directories(${COLLADA_DOM_LINK_DIRS})

add_subdirectory(dom)

if( OPT_COLLADA15 )
  if(UNIX)
    configure_file("${CMAKE_CURRENT_SOURCE_DIR}/collada15dom.pc.in" "${CMAKE_CURRENT_BINARY_DIR}/collada15dom.pc" @ONLY IMMEDIATE)
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/collada15dom.pc DESTINATION lib${LIB_SUFFIX}/pkgconfig COMPONENT ${COMPONENT_PREFIX}15dom-dev)
  endif()
  set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} ${COMPONENT_PREFIX}15dom ${COMPONENT_PREFIX}15dom-dev)
  set(CPACK_COMPONENT_${COMPONENT_PREFIX_UPPER}15DOM-DEV_DEPENDS ${COMPONENT_PREFIX}dom-dev ${COMPONENT_PREFIX}15dom)
endif()

if( OPT_COLLADA14 )
  if(UNIX)
    configure_file("${CMAKE_CURRENT_SOURCE_DIR}/collada14dom.pc.in" "${CMAKE_CURRENT_BINARY_DIR}/collada14dom.pc" @ONLY IMMEDIATE)
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/collada14dom.pc DESTINATION lib${LIB_SUFFIX}/pkgconfig COMPONENT ${COMPONENT_PREFIX}14dom-dev)
  endif()
  set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} ${COMPONENT_PREFIX}14dom ${COMPONENT_PREFIX}14dom-dev)
  set(CPACK_COMPONENT_${COMPONENT_PREFIX_UPPER}14DOM-DEV_DEPENDS ${COMPONENT_PREFIX}dom-dev ${COMPONENT_PREFIX}14dom)
endif()

configure_file("${CMAKE_CURRENT_SOURCE_DIR}/collada_dom-config.cmake.in" "${CMAKE_CURRENT_BINARY_DIR}/collada_dom-config.cmake" @ONLY IMMEDIATE)
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/collada_dom-config-version.cmake.in" "${CMAKE_CURRENT_BINARY_DIR}/collada_dom-config-version.cmake" @ONLY IMMEDIATE)
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/collada_dom-config.cmake" "${CMAKE_CURRENT_BINARY_DIR}/collada_dom-config-version.cmake" DESTINATION "lib${LIB_SUFFIX}/cmake/collada_dom" COMPONENT ${COMPONENT_PREFIX}dom-dev)

# add make uninstall capability
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/cmake-modules/cmake_uninstall.cmake.in" "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake" IMMEDIATE @ONLY)

add_custom_target(uninstall "${CMAKE_COMMAND}" -P "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake")

if(CMAKE_CPACK_COMMAND AND UNIX AND OPT_BUILD_PACKAGES)
  # Packing information
  set(CPACK_PACKAGE_NAME collada-dom${COLLADA_DOM_VERSION_MAJOR}.${COLLADA_DOM_VERSION_MINOR})
  set(CPACK_PACKAGE_CONTACT "" CACHE STRING "Package maintainer and PGP signer.")
  set(CPACK_PACKAGE_VENDOR "http://sourceforge.net/projects/collada-dom")
  set(CPACK_PACKAGE_DISPLAY_NAME "collada-dom ${COLLADA_DOM_VERSION}")
  set(CPACK_PACKAGE_DESCRIPTION_SUMMARY " - COLLADA")
  set(CPACK_PACKAGE_VERSION ${COLLADA_DOM_VERSION} CACHE STRING "package version")
  set(CPACK_PACKAGE_VERSION_MAJOR ${COLLADA_DOM_VERSION_MAJOR})
  set(CPACK_PACKAGE_VERSION_MINOR ${COLLADA_DOM_VERSION_MINOR})
  set(CPACK_PACKAGE_VERSION_PATCH ${COLLADA_DOM_VERSION_PATCH})
  set(CPACK_PACKAGE_INSTALL_DIRECTORY "collada-dom${COLLADA_DOM_VERSION_MAJOR}.${COLLADA_DOM_VERSION_MINOR}")
  set(CPACK_PACKAGE_DESCRIPTION_FILE ${CMAKE_CURRENT_SOURCE_DIR}/description)
  set(CPACK_RESOURCE_FILE_LICENSE ${CMAKE_CURRENT_SOURCE_DIR}/dom/license.txt)

  set(CPACK_COMPONENT_${COMPONENT_PREFIX_UPPER}DOM-DEV_DISPLAY_NAME "common headers and installs")
  
  set(CPACK_DEBIAN_BUILD_DEPENDS debhelper cmake libxml2-dev libboost-dev libpcre3-dev zlib1g-dev libboost-filesystem-dev libboost-system-dev libpcre3-dev pkg-config)

  # debian
  set(CPACK_DEBIAN_PACKAGE_PRIORITY optional)
  set(CPACK_DEBIAN_PACKAGE_SECTION libs)
  set(CPACK_DEBIAN_PACKAGE_DEPENDS ${CPACK_COMPONENTS_ALL})
  set(CPACK_DEBIAN_PACKAGE_SUGGESTS)
  set(CPACK_DEBIAN_PACKAGE_NAME collada-dom)
  set(CPACK_DEBIAN_PACKAGE_REMOVE_SOURCE_FILES viewer fx rt Makefile.linux Makefile dom/codeGen dom/Makefile dom/external-libs/boost dom/external-libs/libxml2 dom/external-libs/minizip dom/external-libs/pcre dom/external-libs/pcre-8.02 dom/external-libs/zlib-1.2.5 dom/test dom/release dom/projects dom/make)
  set(CPACK_DEBIAN_PACKAGE_SOURCE_COPY svn export --force)
  set(CPACK_DEBIAN_CHANGELOG)
  execute_process(COMMAND lsb_release -is
    OUTPUT_VARIABLE _lsb_distribution OUTPUT_STRIP_TRAILING_WHITESPACE
    RESULT_VARIABLE _lsb_release_failed)
  set(CPACK_DEBIAN_DISTRIBUTION_NAME ${_lsb_distribution} CACHE STRING "Name of the distrubiton")
  string(TOLOWER ${CPACK_DEBIAN_DISTRIBUTION_NAME} CPACK_DEBIAN_DISTRIBUTION_NAME)
  if( ${CPACK_DEBIAN_DISTRIBUTION_NAME} STREQUAL "ubuntu" )
    set(CPACK_DEBIAN_DISTRIBUTION_RELEASES karmic lucid maverick natty CACHE STRING "Release code-names of the distrubiton release")
  endif()
  set(CPACK_COMPONENT_COLLADA-DOM_DEPENDS ${CPACK_COMPONENTS_ALL})
  set(DPUT_HOST "" CACHE STRING "PPA repository to upload the debian sources")
  include(CPack)
  include(DebSourcePPA)
endif()
