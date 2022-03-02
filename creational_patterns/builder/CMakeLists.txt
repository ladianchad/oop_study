cmake_minimum_required(VERSION 3.0.2)
project(builder)
set_directory_properties(PROPERTIES COMPILE_OPTIONS "-std=c++11")

include_directories(
  include
)

add_library(${PROJECT_NAME}
  src/single_type_product_builder.cpp
)

add_executable(builder_test src/builder_test.cpp)
add_dependencies(builder_test ${PROJECT_NAME})
target_link_libraries(builder_test ${PROJECT_NAME})


