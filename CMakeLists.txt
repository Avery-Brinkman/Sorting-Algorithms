cmake_minimum_required(VERSION 3.10)
project(Sorting-Algorithms LANGUAGES CXX)

set(CXX_STANDARD_REQUIRED ON)
set(CXX_STANDARD 23)

if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
  add_compile_options(-Weverything -Wno-unsafe-buffer-usage -Wno-c++98-compat)
endif()

set(SRC_FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/source/BubbleSort.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/source/main.cpp
)

set(HDR_FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/include/BubbleSort.h
  ${CMAKE_CURRENT_SOURCE_DIR}/include/HeapSort.h
  ${CMAKE_CURRENT_SOURCE_DIR}/include/InsertionSort.h
  ${CMAKE_CURRENT_SOURCE_DIR}/include/MiscFuncs.h
  ${CMAKE_CURRENT_SOURCE_DIR}/include/QuickSort.h
  ${CMAKE_CURRENT_SOURCE_DIR}/include/SelectionSort.h
)

add_executable(${PROJECT_NAME}
  ${SRC_FILES}
  ${HDR_FILES}
)

target_include_directories(${PROJECT_NAME}
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_23)
