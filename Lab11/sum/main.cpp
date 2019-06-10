#include <iostream>
#include <complex>
#include "sum.h"

int main() {

    Sum<float> aa{2.5,4.7};
    std::cout <<aa.add() << std::endl;
    Sum<std::complex<int>> bb{(10,3), (3,5)};
    std::cout << bb.add();

    return 0;
}