.PHONY: clean

# CXX=/usr/local/Cellar/llvm/19.1.0/bin/clang++
CXX=clang++

default: run

run: main
	./main

main: Hello.pcm
	${CXX} -std=c++20 main.cpp -fmodule-file=Hello=Hello.pcm Hello.pcm -o main
		
# https://releases.llvm.org/18.1.8/tools/clang/docs/StandardCPlusPlusModules.html
Hello.pcm: Hello.cppm
	${CXX} -std=c++20 Hello.cppm --precompile -o Hello.pcm 

		
clean:
	rm *.pcm main