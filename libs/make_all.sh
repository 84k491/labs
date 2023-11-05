build_dir="build"

mkdir $build_dir
cd $build_dir

cmake ..
cmake --build . --target=all
