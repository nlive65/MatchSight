# VisionModel/CMakeLists.txt

find_package(OpenCV REQUIRED)

file(GLOB SOURCES "src/*.cpp")
add_library(VisionModel
    ${SOURCES}
)

target_include_directories(VisionModel PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_link_libraries(VisionModel PUBLIC
    ${OpenCV_LIBS}
)

# Optional: tests
if(ENABLE_TESTING)
    file(GLOB TESTS "test/*.cpp")
    add_executable(VisionModelTests
        "test/VisionTest.cpp"
    )
    target_link_libraries(VisionModelTests PRIVATE VisionModel gtest_main gtest)
    add_test(NAME VisionModelTests COMMAND VisionModelTests)
endif()
