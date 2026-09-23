include(FetchContent)
FetchContent_Declare(
    doctest
    GIT_REPOSITORY https://github.com/doctest/doctest.git
    GIT_TAG v2.5.3
    GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(doctest)

add_executable(mc_tests
    test_main.cpp
    core/test_commutation.cpp
    core/test_speed_control.cpp
    core/test_fault.cpp
    core/test_motor_controller.cpp
)
target_link_libraries(mc_tests PRIVATE mc_core doctest::doctest)

include(${doctest_SOURCE_DIR}/scripts/cmake/doctest.cmake)
doctest_discover_tests(mc_tests)
