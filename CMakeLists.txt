cmake_minimum_required (VERSION 2.6)

project(devil)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})

find_package(Boost)
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})

add_executable(test_bind tests.cpp
	Storages.hpp StorageTypes.hpp
	Caller.hpp
	Bind.hpp
	Traits.hpp
	Lists.hpp)

target_link_libraries(test_bind ${Boost_LIBRARIES})
