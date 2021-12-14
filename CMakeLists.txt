cmake_minimum_required( VERSION 3.8 )
project( cstring VERSION 0.1 DESCRIPTION "pierwszy projekt" LANGUAGES C )

# C setup
## C version settings
set( CMAKE_C_STANDARD 11 )
set( CMAKE_C_STANDARD_REQUIRED ON )

## Add all warnings and treat them as errors
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror -Wpedantic")
## Make sure optimization is enabled when using release build mode
if( "${CMAKE_BUILD_TYPE}" STREQUAL "Release" )
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O3")
endif()

# Find files
file( GLOB_RECURSE CSTRING_SOURCES  src/*.c )
file( GLOB         CSTRING_INCLUDES include )

# Create new executable that will be compiled from given sources
add_executable( ${PROJECT_NAME} ${CSTRING_SOURCES} )

# Include directories
target_include_directories( ${PROJECT_NAME} PUBLIC ${CSTRING_INCLUDES} )
