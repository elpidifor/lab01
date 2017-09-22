cmake_minimum_required (VERSION 2.8)

include_directories(SYSTEM
    ./
)

# enum your files
add_executable(executable
	hello_world.cpp
	1.cpp
	2.cpp
	3.cpp
	4.cpp
	5_1.cpp
	5-2.cpp
	6.cpp
	7.cpp
	8.cpp
	9.cpp
	10.cpp
	11.cpp
	12.cpp
	13.cpp
	
)

target_link_libraries(executable)

