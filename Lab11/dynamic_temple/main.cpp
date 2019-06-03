#include <iostream>
#include "Array.h"

int main() {
    Array<int> array1;
    std::cout<< array1.size();
    array1.add(2);
    return 0;
}