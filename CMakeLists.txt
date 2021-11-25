cmake_minimum_required(VERSION "3.22.0")

project("Stack")

add_executable("${PROJECT_NAME}" "main.cpp")

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)

install(FILES "main.cpp" DESTINATION src)

# include(CTest)

# add_test("test1" "${CMAKE_BINARY_DIR}/${PROJECT_NAME}")

# add_test("test2" "${CMAKE_BINARY_DIR}/${PROJECT_NAME}" "sahil")