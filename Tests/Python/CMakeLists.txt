#GCovr
set(GCC_COVERAGE_COMPILE_FLAGS "-fprofile-arcs -ftest-coverage -fPIC")
set(GCC_COVERAGE_LINK_FLAGS    "-lgcov")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )
set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}" )

file(GLOB PYTHON_TEST_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")

Find_Package(SDL REQUIRED)
Find_Package(SDL_image REQUIRED)

if(NOT SDL_FOUND)
message(FATAL_ERROR "SDL not found!" )
endif( NOT SDL_FOUND )

add_custom_target(copy_test_assets)
add_executable(PythonTest ${PYTHON_TEST_FILES})
add_dependencies(PythonTest copy_test_assets rule_python)
target_link_libraries(PythonTest rule-strategie ${Boost_LIBRARIES} ${PYTHON_LIBRARIES} ${SDL_LIBRARY} ${SDLIMAGE_LIBRARY} SDLmain)
add_custom_command(TARGET copy_test_assets POST_BUILD
                     COMMAND ${CMAKE_COMMAND} -E
                         copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/scripts ${CMAKE_CURRENT_BINARY_DIR}/scripts)
add_custom_command(TARGET copy_test_assets POST_BUILD
                     COMMAND ${CMAKE_COMMAND} -E
                         copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/images ${CMAKE_CURRENT_BINARY_DIR}/images)
add_custom_command(TARGET copy_test_assets POST_BUILD
                     COMMAND ${CMAKE_COMMAND} -E
                         copy ${ConfigFile} ${CMAKE_BINARY_DIR}/Python/rule_python.so ${CMAKE_CURRENT_BINARY_DIR})

