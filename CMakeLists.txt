# cmake_minimum_required(VERSION <specify CMake version here>)
project(Poo_Warchiefs)

set(CMAKE_CXX_STANDARD 14)

add_executable(Poo_Warchiefs main.cpp clasaorc.h beast.h classstrengths.h classweakness.h)
set(SFML_DIR C:/Users/Tomy/Downloads/SFML-2.5.1/bin)
target_include_directories(${PROJECT_NAME} PUBLIC ${SFML_DIR}/include)
target_link_directories(${PROJECT_NAME} PUBLIC ${SFML_DIR}/lib)
target_link_libraries(${PROJECT_NAME} sfml-audio)