module;

// import <iostream>;
#include <iostream>

export module hello;

export void greet() {
    std::cout << "Hello, Modules!" << std::endl;
}