#!/usr/bin/bash

build_dir="build_manual"
mkdir $build_dir > /dev/null

# build dynamic library
g++ -shared -fPIC -o $build_dir/libdyn.so dynamic_lib/src/dyn.cpp -Idynamic_lib/include

# build static library
g++ -c static_lib/src/static.cpp -o $build_dir/static.o -Istatic_lib/include
ar crs $build_dir/libstatic.a $build_dir/static.o
rm $build_dir/static.o

# build runnable
export LD_LIBRARY_PATH=$build_dir:$LD_LIBRARY_PATH; g++ -o $build_dir/runnable runnable/src/main.cpp runnable/src/lib_user.cpp -L$build_dir -ldyn -lstatic -Irunnable/include -Idynamic_lib/include -Istatic_lib/include
