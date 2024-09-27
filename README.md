# cpp20-modules-with-gcc-demo

C++ 20 modules feature with gcc@14 demo on Mac.

* `brew install gcc`
* `cd src && make`

# cmake

    参考一些典型的 c++ 项目，且从 [c++ modules](https://gitlab.kitware.com/cmake/cmake/-/blob/f1034acb02/Tests/RunCMake/CXXModules/NinjaDependInfoExport-check.cmake) 中配置来看，cmake 反而带了比较多的复杂度，暂不采用。

* [sqlite](https://github.com/sqlite/sqlite/blob/master/main.mk)
* [nginx](https://github.com/nginx/nginx/tree/master/auto)
* [node](https://github.com/nodejs/node/blob/main/Makefile)
* [JVM](https://github.com/openjdk/jdk/blob/master/make/Init.gmk)
* [Chrome](https://github.com/chromium/chromium/blob/main/docs/mac_build_instructions.md)
* [Linux](https://github.com/torvalds/linux/blob/master/Makefile)

# References

* [Safe C++](https://safecpp.org/draft.html)
* [C++ Epoch Proposal](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2020/p1881r1.html)
* [C++ 20 手册](https://zh.cppreference.com/w/cpp/language/modules)
* [C 菜鸟教程](https://www.runoob.com/cplusplus/cpp-tutorial.html)
* [Clang 手册](https://releases.llvm.org/18.1.8/tools/clang/docs/StandardCPlusPlusModules.html)
* [cpp20_modules_with_gcc_demo](https://github.com/fvilante/cpp20_modules_with_gcc_demo/tree/master)
* [cmake vs make](https://earthly.dev/blog/cmake-vs-make-diff/)
* [make 参考手册](https://www.gy328.com/ref/docs/make.html)
