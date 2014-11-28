#GCovr
set(GCC_COVERAGE_COMPILE_FLAGS "-fprofile-arcs -ftest-coverage -fPIC")
set(GCC_COVERAGE_LINK_FLAGS    "-lgcov")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )
set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}" )

include_directories(SYSTEM ${GMOCK_DIR}/gtest/include
                           ${GMOCK_DIR}/include
                           ${CMAKE_CURRENT_SOURCE_DIR}/Python
			   )

file(GLOB PYTHON_TEST_FILES "${CMAKE_CURRENT_SOURCE_DIR}/Python/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/Python/*.h")

add_subdirectory(Python)

