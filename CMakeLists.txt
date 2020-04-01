# CMakeLists.txt has to be located in the project folder and cmake has to be
# executed from 'project/build' with 'cmake ../'.
cmake_minimum_required(VERSION 2.6)
find_package(Rock)
rock_init(does_not_add_minitest_junit_dependency_on_disabled_tests 0.1)
rock_standard_layout()
