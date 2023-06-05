cmake_minimum_required(VERSION 3.22.1)
set(project "vk_parser")
project(${project})

set(CMAKE_CXX_STANDARD 17)

find_package(Boost 1.82.0 COMPONENTS program_options REQUIRED)
find_package(nlohmann_json 3.10.5 REQUIRED)


configure_file(${CMAKE_CURRENT_SOURCE_DIR}/data.txt
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/access_key.txt
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

add_executable(${project} main.cpp)

target_link_libraries(${project} Boost::program_options
        ssl
        crypto
        nlohmann_json::nlohmann_json)
