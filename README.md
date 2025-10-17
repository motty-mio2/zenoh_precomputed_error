# Zenoh Precomputed Error

This repository demonstrates a compilation error related to the `PrecomputedLayout` constructor in the Zenoh C++ library.

## Usage

1. Clone the repository.
2. Navigate to the project directory.
3. Create a build directory: `cmake -S . -B build`
4. Run Make `make -C build`

## Error Output

```txt
❯ make
[ 33%] Linking CXX executable main
/usr/bin/ld: CMakeFiles/main.dir/src/sample.cpp.o: in function `zenoh::PrecomputedLayout::PrecomputedLayout(zenoh::ShmProvider const&, unsigned long, signed char*)':
sample.cpp:(.text+0x0): multiple definition of `zenoh::PrecomputedLayout::PrecomputedLayout(zenoh::ShmProvider const&, unsigned long, signed char*)'; CMakeFiles/main.dir/src/main.cpp.o:main.cpp:(.text+0x0): first defined here
/usr/bin/ld: CMakeFiles/main.dir/src/sample.cpp.o: in function `zenoh::PrecomputedLayout::PrecomputedLayout(zenoh::ShmProvider const&, unsigned long, signed char*)':
sample.cpp:(.text+0x0): multiple definition of `zenoh::PrecomputedLayout::PrecomputedLayout(zenoh::ShmProvider const&, unsigned long, signed char*)'; CMakeFiles/main.dir/src/main.cpp.o:main.cpp:(.text+0x0): first defined here
/usr/bin/ld: CMakeFiles/main.dir/src/sample.cpp.o: in function `zenoh::PrecomputedLayout::PrecomputedLayout(zenoh::ShmProvider const&, unsigned long, z_alloc_alignment_t, signed char*)':
sample.cpp:(.text+0x1ba): multiple definition of `zenoh::PrecomputedLayout::PrecomputedLayout(zenoh::ShmProvider const&, unsigned long, z_alloc_alignment_t, signed char*)'; CMakeFiles/main.dir/src/main.cpp.o:main.cpp:(.text+0x1ba): first defined here
/usr/bin/ld: CMakeFiles/main.dir/src/sample.cpp.o: in function `zenoh::PrecomputedLayout::PrecomputedLayout(zenoh::ShmProvider const&, unsigned long, z_alloc_alignment_t, signed char*)':
sample.cpp:(.text+0x1ba): multiple definition of `zenoh::PrecomputedLayout::PrecomputedLayout(zenoh::ShmProvider const&, unsigned long, z_alloc_alignment_t, signed char*)'; CMakeFiles/main.dir/src/main.cpp.o:main.cpp:(.text+0x1ba): first defined here
collect2: error: ld returned 1 exit status
make[2]: *** [CMakeFiles/main.dir/build.make:114: main] エラー 1
make[1]: *** [CMakeFiles/Makefile2:83: CMakeFiles/main.dir/all] エラー 2
make: *** [Makefile:91: all] エラー 2
```
