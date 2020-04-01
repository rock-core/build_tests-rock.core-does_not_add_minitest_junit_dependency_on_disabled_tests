rock_library(does_not_add_minitest_junit_dependency_on_disabled_tests
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(does_not_add_minitest_junit_dependency_on_disabled_tests_bin Main.cpp
    DEPS does_not_add_minitest_junit_dependency_on_disabled_tests)

