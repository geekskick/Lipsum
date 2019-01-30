cmake_minimum_required(VERSION 3.12)

project(lipsum_mvc)

set(APP_NAME lipsum_mvc)
set(SRC main.cpp c_view.cpp l_model.cpp)
add_executable(${APP_NAME}  ${SRC})
target_compile_features(${APP_NAME} PRIVATE cxx_nonstatic_member_init)
