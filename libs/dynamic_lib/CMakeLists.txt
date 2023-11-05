project(dynamic_lib)

add_library(${PROJECT_NAME} SHARED
    src/dyn.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)
