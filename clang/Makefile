.PHONY: clean

# set your clang++ compiler path
# CXX=/usr/local/Cellar/llvm/19.1.0/bin/clang++
CXX=clang++

default: run

run: main
	./main

main: hello.pcm
	${CXX} -std=c++20 main.cpp -fprebuilt-module-path=. hello.pcm -o main
		
# https://releases.llvm.org/18.1.8/tools/clang/docs/StandardCPlusPlusModules.html
hello.pcm: hello.cpp
	${CXX} -std=c++20 -x c++-module hello.cpp --precompile -o hello.pcm 

#	${CXX} -std=c++23 -x c++-system-header format iostream -stdlib=libc++ -x c++-module hello.cpp  --precompile
#	${CXX} -std=c++20 hello.pcm -c -o hello.o

clean:
	rm *.pcm main