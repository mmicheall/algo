cmake_minimum_required(VERSION 3.5)
project(NthLargestTwoSortedLists)

set(PROJECT_BINARY "NthLargestTwoSortedLists")

FIND_PACKAGE (Threads REQUIRED)

list(APPEND LIBRARIES "libgtest.a")
list(APPEND LIBRARIES ${CMAKE_THREAD_LIBS_INIT})

set(SOURCE_FILES test_KthLargestTwoSortedLists.cpp TestKthLargestTwoSortedLists.cpp)
add_executable(${PROJECT_BINARY} ${SOURCE_FILES})
target_link_libraries(${PROJECT_BINARY} ${LIBRARIES})