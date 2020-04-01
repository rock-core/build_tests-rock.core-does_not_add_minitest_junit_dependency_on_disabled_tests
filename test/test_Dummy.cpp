#include <boost/test/unit_test.hpp>
#include <does_not_add_minitest_junit_dependency_on_disabled_tests/Dummy.hpp>

using namespace does_not_add_minitest_junit_dependency_on_disabled_tests;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    does_not_add_minitest_junit_dependency_on_disabled_tests::DummyClass dummy;
    dummy.welcome();
}
