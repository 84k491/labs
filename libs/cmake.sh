build_dir="build_cmake"

mkdir $build_dir
cd $build_dir

cmake ..
cmake --build . --target=all
