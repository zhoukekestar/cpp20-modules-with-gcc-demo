.PHONY: clean

# set your g++ compiler path
# CXX=/opt/homebrew/opt/gcc@14/bin/g++-14
CXX=g++-14

default: run

run: main
	./main

main: hello.o main.o
	${CXX} hello.o main.o -o main
		
# https://stackoverflow.com/questions/65384277/error-failed-to-read-compiled-module-no-such-file-or-directory
hello.o: hello.cpp
	${CXX} --version
	${CXX} -std=c++20 -fmodules-ts -xc++-system-header iostream
	${CXX} -c -std=c++20 -fmodules-ts hello.cpp
		
main.o: main.cpp
	${CXX} -c -std=c++20 -fmodules-ts main.cpp
		
clean:
	rm *.o main
	rm -r gcm.cache