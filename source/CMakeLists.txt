set(FLTK_DIR C:/devel/sdk/fltk/build CACHE FILEPATH "FLTK installation or build directory")

find_package(FLTK REQUIRED CONFIG)

add_executable(FLTK_TestProject
        main.cpp
        FLTK_Code.cpp
)

target_include_directories (FLTK_TestProject PRIVATE ${FLTK_INCLUDE_DIRS})

target_link_libraries (FLTK_TestProject PRIVATE fltk)