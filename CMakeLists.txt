cmake_minimum_required(VERSION 3.10)

include_directories(./include)


# main

file(GLOB SRC_HELLO_FILES ./src/hello/*.cpp)
add_executable(main 
  ${SRC_HELLO_FILES}
  ./src/main.cpp)


# unitTest

enable_testing()
file(GLOB TEST_FILES ./test/*.cpp)
add_executable(unitTest ${TEST_FILES} ${SRC_HELLO_FILES})
target_link_libraries(unitTest 
	/usr/lib/libgtest.a # you should replace this path with  your gtest library path
	/usr/lib/libgtest_main.a # you should replace this path with your gtest library path
	pthread
	)
add_test(NAME unitTest COMMAND unitTest)
