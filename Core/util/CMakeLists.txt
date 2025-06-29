# util/CMakeLists.txt

file(GLOB SOURCES "src/*.cpp")
add_library(util
    ${SOURCES}
)

target_include_directories(util PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

# Optional: tests
if(ENABLE_TESTING)
    file(GLOB TESTS "test/*.cpp")
    add_executable(utilTests
        ${TESTS}
    )
    target_link_libraries(utilTests PRIVATE gtest_main gtest)
    add_test(NAME utilTests COMMAND utilTests)
endif()
