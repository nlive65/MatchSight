    # MatchJudging/CMakeLists.txt
add_library(MatchJudging
    src/MatchJudger.cpp
)

find_package(OpenCV REQUIRED)

target_link_libraries(MatchJudging PUBLIC
    ${OpenCV_LIBS}
)
target_include_directories(MatchJudging PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

# Link against VisionModel
target_link_libraries(MatchJudging PUBLIC VisionModel)

# Optionally add tests
if(ENABLE_TESTING)
    add_executable(MatchJudgingTests
        test/MatchJudgingTest.cpp
    )
    target_link_libraries(MatchJudgingTests PRIVATE MatchJudging gtest_main gtest)
    add_test(NAME MatchJudgingTests COMMAND MatchJudgingTests)
endif()
