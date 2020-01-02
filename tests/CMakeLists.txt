find_package(Catch2 REQUIRED)

include_directories("${PROJECT_SOURCE_DIR}/source")

add_executable(tests_all
    tests_main.cpp
    tests_plane.cpp
)

target_link_libraries(tests_all PRIVATE Catch2::Catch2)

include(CTest)
include(ParseAndAddCatchTests)
ParseAndAddCatchTests(tests_all)
