# Tarea
# Copyright © 2020 otreblan
#
# hello is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# hello is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with hello.  If not, see <http://www.gnu.org/licenses/>.

cmake_minimum_required(VERSION 3.13.0)

project(hello
	VERSION 1.7
	DESCRIPTION "Tarea 2"
	HOMEPAGE_URL "https://github.com/cs1103-lab2-01-2020-1/pooii-tarea-2-entrega-21-04-otreblan"
	LANGUAGES "CXX"
)

# Without this, paths are not relative in the sources list
cmake_policy(SET CMP0076 NEW)

include(GNUInstallDirs)
include(FindPkgConfig)

# The 2 first problems
add_executable(${PROJECT_NAME})

# Version for the library symlinks
set_target_properties(${PROJECT_NAME}
	PROPERTIES
		CXX_STANDARD 17
)

# Headers
target_include_directories(${PROJECT_NAME}
	PRIVATE ${PROJECT_SOURCE_DIR}/include
)

add_executable(pairVec)

# Version for the library symlinks
set_target_properties(pairVec
	PROPERTIES
		CXX_STANDARD 17
)

# Headers
target_include_directories(pairVec
	PRIVATE ${PROJECT_SOURCE_DIR}/include
)

add_executable(frecVec)

# Version for the library symlinks
set_target_properties(frecVec
	PROPERTIES
		CXX_STANDARD 17
)

# Headers
target_include_directories(frecVec
	PRIVATE ${PROJECT_SOURCE_DIR}/include
)

# Sources list
add_subdirectory(src)
add_subdirectory(doc)

## Libraries
#pkg_check_modules(RAPIDJSON REQUIRED RapidJSON)
#include(FindBoost)
#
## Header path
#target_include_directories(${PROJECT_NAME}
#PUBLIC
#${RAPIDJSON_INCLUDE_DIRS}
#${Boost_INCLUDE_DIRS}
#)
#
## Linking
#target_link_libraries(${PROJECT_NAME}
#PUBLIC
#${RAPIDJSON_LIBRARIES}
#${Boost_LIBRARIES}
#)
#
## Other flags
#target_compile_definitions(${PROJECT_NAME}
#PUBLIC
#${RAPIDJSON_CFLAGS_OTHER}
#RAPIDJSON_HAS_STDSTRING=1
#)

# Default flags
if(NOT DEFINED ENV{CXXFLAGS})
	set(CMAKE_CXX_FLAGS "-Wall -Wextra -g -Wl,-z,defs")
endif()

# Install target
install(TARGETS ${PROJECT_NAME}
	DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Install target
install(TARGETS pairVec
	DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Install target
install(TARGETS frecVec
	DESTINATION ${CMAKE_INSTALL_BINDIR}
)
