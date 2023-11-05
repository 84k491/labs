project(static_lib)

add_library(${PROJECT_NAME} STATIC
    src/static.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)
