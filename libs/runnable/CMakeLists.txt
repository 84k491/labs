project(runnable)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/lib_user.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(${PROJECT_NAME}
    dynamic_lib
    static_lib
)
