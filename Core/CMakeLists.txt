set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

cmake_minimum_required(VERSION 3.16)

project(MatchSight_Core)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.17.0
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

# Optionally enable tests
option(ENABLE_TESTING "Enable building tests" ON)

# Add subdirectories
add_subdirectory(util)
add_subdirectory(VisionModel)
add_subdirectory(MatchJudging)


if(ENABLE_TESTING)
    file(GLOB TESTS "test/*.cpp")
    add_executable(CoreTests
        ${TESTS}
    )
    target_link_libraries(CoreTests PRIVATE gtest_main gtest)
    add_test(NAME CoreTests COMMAND CoreTests)
endif()

# Enable CTest if testing
if(ENABLE_TESTING)
  enable_testing()
endif()

