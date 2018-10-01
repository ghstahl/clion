#include <iostream>
#include "random.h"
#include "super_math.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    int randomNumber = GenerateRandomNumber();
    std::cout << "random:"<<randomNumber<<std::endl;
    std::cout << "random:"<<Super_Add(1,2)<<std::endl;

    return 0;
}