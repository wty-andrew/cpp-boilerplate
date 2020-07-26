include_directories(
  ${PROJECT_SOURCE_DIR}/tests/include
)

add_library(test_main OBJECT test_main.cpp)

add_executable(test_foo test_foo.cpp)
target_link_libraries(test_foo
  ${PROJECT_LIBRARY}
  test_main
)
add_test(NAME test_foo COMMAND test_foo)
