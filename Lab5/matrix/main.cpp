#include <iostream>
#include "matrix.h"

int main() {
    auto matrix1 = new Matrix("[1 2 3; 4 5 6; 7 8 9]");
    auto matrix2 = new Matrix("[9 8 7; 6 5 4; 3 2 1]");
    auto matrix3 = matrix1->Add(matrix2);

    matrix1->Print();
    std::cout << "-----------------" << std::endl;
    matrix2->Print();
    std::cout << "-----------------" << std::endl;
    matrix3->Print();

    return 0;
}
