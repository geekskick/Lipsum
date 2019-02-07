cmake_minimum_required(VERSION 3.12)

project(lipsum_markov)

set(CURL_LIBRARY -lcurl)

set(APP_NAME lipsum_markov)
set(SRC main.cpp)

add_executable(${APP_NAME}  ${SRC})
target_compile_features(${APP_NAME} PRIVATE cxx_nonstatic_member_init)
target_link_libraries(${APP_NAME} PRIVATE ${CURL_LIBRARY})
